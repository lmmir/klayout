
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
*  @file gsiDeclQTextEdit_ExtraSelection.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextEdit>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QTextEdit::ExtraSelection

//  Constructor QTextEdit::ExtraSelection::ExtraSelection()


static void _init_ctor_QTextEdit_ExtraSelection_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextEdit::ExtraSelection> ();
}

static void _call_ctor_QTextEdit_ExtraSelection_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextEdit::ExtraSelection *> (new QTextEdit::ExtraSelection ());
}



namespace gsi
{

static gsi::Methods methods_QTextEdit_ExtraSelection () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextEdit::ExtraSelection::ExtraSelection()\nThis method creates an object of class QTextEdit::ExtraSelection.", &_init_ctor_QTextEdit_ExtraSelection_0, &_call_ctor_QTextEdit_ExtraSelection_0);
  return methods;
}

gsi::Class<QTextEdit::ExtraSelection> decl_QTextEdit_ExtraSelection ("QtWidgets", "QTextEdit_ExtraSelection",
  methods_QTextEdit_ExtraSelection (),
  "@qt\n@brief Binding of QTextEdit::ExtraSelection");

gsi::ClassExt<QTextEdit> decl_QTextEdit_ExtraSelection_as_child (decl_QTextEdit_ExtraSelection, "ExtraSelection");

GSI_QTWIDGETS_PUBLIC gsi::Class<QTextEdit::ExtraSelection> &qtdecl_QTextEdit_ExtraSelection () { return decl_QTextEdit_ExtraSelection; }

}

