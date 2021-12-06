
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQStyleOptionGroupBox.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionGroupBox>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionGroupBox

//  Constructor QStyleOptionGroupBox::QStyleOptionGroupBox()


static void _init_ctor_QStyleOptionGroupBox_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionGroupBox> ();
}

static void _call_ctor_QStyleOptionGroupBox_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionGroupBox *> (new QStyleOptionGroupBox ());
}


//  Constructor QStyleOptionGroupBox::QStyleOptionGroupBox(const QStyleOptionGroupBox &other)


static void _init_ctor_QStyleOptionGroupBox_3378 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionGroupBox & > (argspec_0);
  decl->set_return_new<QStyleOptionGroupBox> ();
}

static void _call_ctor_QStyleOptionGroupBox_3378 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionGroupBox &arg1 = gsi::arg_reader<const QStyleOptionGroupBox & >() (args, heap);
  ret.write<QStyleOptionGroupBox *> (new QStyleOptionGroupBox (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionGroupBox () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionGroupBox::QStyleOptionGroupBox()\nThis method creates an object of class QStyleOptionGroupBox.", &_init_ctor_QStyleOptionGroupBox_0, &_call_ctor_QStyleOptionGroupBox_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionGroupBox::QStyleOptionGroupBox(const QStyleOptionGroupBox &other)\nThis method creates an object of class QStyleOptionGroupBox.", &_init_ctor_QStyleOptionGroupBox_3378, &_call_ctor_QStyleOptionGroupBox_3378);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionGroupBox> decl_QStyleOptionGroupBox (qtdecl_QStyleOptionComplex (), "QtWidgets", "QStyleOptionGroupBox",
  methods_QStyleOptionGroupBox (),
  "@qt\n@brief Binding of QStyleOptionGroupBox");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionGroupBox> &qtdecl_QStyleOptionGroupBox () { return decl_QStyleOptionGroupBox; }

}

