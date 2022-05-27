
# A lean substitute for QRC which is employed in the non-Qt case

import xml.etree.ElementTree as et
import argparse
import zlib
import os


# A class providing the generator

class RCFile(object):

  def __init__(self, alias, path):
    self.path = path
    self.alias = alias

  def write(self, file, index):

    f = open(self.path, "rb")
    raw_data = f.read()
    f.close()

    data = zlib.compress(raw_data)
    compressed = "true"

    cb = "{"
    bc = "}"
    cls = "Resource" + str(index)
    file.write(f"\n// Resource file {self.path} as {self.alias}\n")
    file.write( "namespace {\n")
    file.write( "\n")
    file.write(f"  class {cls}\n")
    file.write( "  {\n")
    file.write(f"    {cls}() {cb}\n")
    file.write(f"      static bool compressed = {compressed};\n")
    file.write(f"      static const char *name = \"{self.alias}\";\n")
    file.write( "      static const unsigned char data[] = {")
    n = 0
    for b in data:
      if n == 0:
        file.write("\n        ")
      file.write("0x%02x," % b)
      n += 1
      if n == 16:
        n = 0
    file.write( "\n")
    file.write( "      };\n")
    file.write( "      m_id = tl::register_resource(name, compressed, data, sizeof(data) / sizeof(data[0]));\n")
    file.write( "    }\n")
    file.write(f"    ~{cls}() {cb}\n")
    file.write( "      tl::unregister_resource(m_id)\n")
    file.write( "    }\n")
    file.write( "    tl::resource_id_type m_id;\n")
    file.write(f"  {bc} resource_instance{index}\n")
    file.write( "\n")
    file.write( "}\n")

    
class RCGenerator(object):

  def __init__(self):
    self.files = []

  def append(self, path, alias):
    self.files.append(RCFile(path, alias))

  def dump_files(self):
    for f in self.files:
      print(f.path)

  def write(self, file):
    file.write(f"""
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include "tlResources.h"
""")
    i = 1
    for f in self.files:
      f.write(file, i)
      i += 1
  

# The main code

generator = RCGenerator()

# argument parsing

parser = argparse.ArgumentParser(description='Lean QRC parser')
parser.add_argument('input', type=str, nargs='+',
                    help='The QRC input file')
parser.add_argument('--output', '-o', type=str, nargs='?',
                    help='The C++ output file')
parser.add_argument('--path', '-p', type=str, nargs='?',
                    help='Path to the input files (default is current directory)')

args = parser.parse_args()

# read the input file

for input in args.input:

  root_node = et.parse(input).getroot()

  for qresource in root_node.findall('qresource'):
    prefix = qresource.get('prefix')
    for file in qresource.findall('file'):
      alias = file.get('alias')
      path = file.text
      if alias is None:
        alias = path
      if prefix is not None:
        alias = prefix + "/" + alias
      if args.path is not None:
        path = os.path.join(args.path, path)
      else:
        path = os.path.join(os.path.dirname(input), path)
      generator.append(alias, path)

# produce the output file

if args.output is not None:
  f = open(args.output, "w")
  generator.write(f)
  f.close()
else:
  generator.dump_files()


