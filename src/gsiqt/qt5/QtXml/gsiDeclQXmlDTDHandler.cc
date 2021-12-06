
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
*  @file gsiDeclQXmlDTDHandler.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlDTDHandler>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlDTDHandler

// QString QXmlDTDHandler::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlDTDHandler *)cls)->errorString ());
}


// bool QXmlDTDHandler::notationDecl(const QString &name, const QString &publicId, const QString &systemId)


static void _init_f_notationDecl_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_notationDecl_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlDTDHandler *)cls)->notationDecl (arg1, arg2, arg3));
}


// bool QXmlDTDHandler::unparsedEntityDecl(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)


static void _init_f_unparsedEntityDecl_7776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("notationName");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_unparsedEntityDecl_7776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg4 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QXmlDTDHandler *)cls)->unparsedEntityDecl (arg1, arg2, arg3, arg4));
}


namespace gsi
{

static gsi::Methods methods_QXmlDTDHandler () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QXmlDTDHandler::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("notationDecl", "@brief Method bool QXmlDTDHandler::notationDecl(const QString &name, const QString &publicId, const QString &systemId)\n", false, &_init_f_notationDecl_5859, &_call_f_notationDecl_5859);
  methods += new qt_gsi::GenericMethod ("unparsedEntityDecl", "@brief Method bool QXmlDTDHandler::unparsedEntityDecl(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)\n", false, &_init_f_unparsedEntityDecl_7776, &_call_f_unparsedEntityDecl_7776);
  return methods;
}

gsi::Class<QXmlDTDHandler> decl_QXmlDTDHandler ("QtXml", "QXmlDTDHandler_Native",
  methods_QXmlDTDHandler (),
  "@hide\n@alias QXmlDTDHandler");

GSI_QTXML_PUBLIC gsi::Class<QXmlDTDHandler> &qtdecl_QXmlDTDHandler () { return decl_QXmlDTDHandler; }

}


class QXmlDTDHandler_Adaptor : public QXmlDTDHandler, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlDTDHandler_Adaptor();

  //  [adaptor ctor] QXmlDTDHandler::QXmlDTDHandler()
  QXmlDTDHandler_Adaptor() : QXmlDTDHandler()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QString QXmlDTDHandler::errorString()
  QString cbs_errorString_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("errorString");
  }

  virtual QString errorString() const
  {
    if (cb_errorString_c0_0.can_issue()) {
      return cb_errorString_c0_0.issue<QXmlDTDHandler_Adaptor, QString>(&QXmlDTDHandler_Adaptor::cbs_errorString_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("errorString");
    }
  }

  //  [adaptor impl] bool QXmlDTDHandler::notationDecl(const QString &name, const QString &publicId, const QString &systemId)
  bool cbs_notationDecl_5859_0(const QString &name, const QString &publicId, const QString &systemId)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (publicId);
    __SUPPRESS_UNUSED_WARNING (systemId);
    throw qt_gsi::AbstractMethodCalledException("notationDecl");
  }

  virtual bool notationDecl(const QString &name, const QString &publicId, const QString &systemId)
  {
    if (cb_notationDecl_5859_0.can_issue()) {
      return cb_notationDecl_5859_0.issue<QXmlDTDHandler_Adaptor, bool, const QString &, const QString &, const QString &>(&QXmlDTDHandler_Adaptor::cbs_notationDecl_5859_0, name, publicId, systemId);
    } else {
      throw qt_gsi::AbstractMethodCalledException("notationDecl");
    }
  }

  //  [adaptor impl] bool QXmlDTDHandler::unparsedEntityDecl(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)
  bool cbs_unparsedEntityDecl_7776_0(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (publicId);
    __SUPPRESS_UNUSED_WARNING (systemId);
    __SUPPRESS_UNUSED_WARNING (notationName);
    throw qt_gsi::AbstractMethodCalledException("unparsedEntityDecl");
  }

  virtual bool unparsedEntityDecl(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)
  {
    if (cb_unparsedEntityDecl_7776_0.can_issue()) {
      return cb_unparsedEntityDecl_7776_0.issue<QXmlDTDHandler_Adaptor, bool, const QString &, const QString &, const QString &, const QString &>(&QXmlDTDHandler_Adaptor::cbs_unparsedEntityDecl_7776_0, name, publicId, systemId, notationName);
    } else {
      throw qt_gsi::AbstractMethodCalledException("unparsedEntityDecl");
    }
  }

  gsi::Callback cb_errorString_c0_0;
  gsi::Callback cb_notationDecl_5859_0;
  gsi::Callback cb_unparsedEntityDecl_7776_0;
};

QXmlDTDHandler_Adaptor::~QXmlDTDHandler_Adaptor() { }

//  Constructor QXmlDTDHandler::QXmlDTDHandler() (adaptor class)

static void _init_ctor_QXmlDTDHandler_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlDTDHandler_Adaptor> ();
}

static void _call_ctor_QXmlDTDHandler_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlDTDHandler_Adaptor *> (new QXmlDTDHandler_Adaptor ());
}


// QString QXmlDTDHandler::errorString()

static void _init_cbs_errorString_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_errorString_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlDTDHandler_Adaptor *)cls)->cbs_errorString_c0_0 ());
}

static void _set_callback_cbs_errorString_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDTDHandler_Adaptor *)cls)->cb_errorString_c0_0 = cb;
}


// bool QXmlDTDHandler::notationDecl(const QString &name, const QString &publicId, const QString &systemId)

static void _init_cbs_notationDecl_5859_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_cbs_notationDecl_5859_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlDTDHandler_Adaptor *)cls)->cbs_notationDecl_5859_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_notationDecl_5859_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDTDHandler_Adaptor *)cls)->cb_notationDecl_5859_0 = cb;
}


// bool QXmlDTDHandler::unparsedEntityDecl(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)

static void _init_cbs_unparsedEntityDecl_7776_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("notationName");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_cbs_unparsedEntityDecl_7776_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  const QString &arg4 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QXmlDTDHandler_Adaptor *)cls)->cbs_unparsedEntityDecl_7776_0 (arg1, arg2, arg3, arg4));
}

static void _set_callback_cbs_unparsedEntityDecl_7776_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlDTDHandler_Adaptor *)cls)->cb_unparsedEntityDecl_7776_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlDTDHandler> &qtdecl_QXmlDTDHandler ();

static gsi::Methods methods_QXmlDTDHandler_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlDTDHandler::QXmlDTDHandler()\nThis method creates an object of class QXmlDTDHandler.", &_init_ctor_QXmlDTDHandler_Adaptor_0, &_call_ctor_QXmlDTDHandler_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Virtual method QString QXmlDTDHandler::errorString()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@hide", true, &_init_cbs_errorString_c0_0, &_call_cbs_errorString_c0_0, &_set_callback_cbs_errorString_c0_0);
  methods += new qt_gsi::GenericMethod ("notationDecl", "@brief Virtual method bool QXmlDTDHandler::notationDecl(const QString &name, const QString &publicId, const QString &systemId)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_notationDecl_5859_0, &_call_cbs_notationDecl_5859_0);
  methods += new qt_gsi::GenericMethod ("notationDecl", "@hide", false, &_init_cbs_notationDecl_5859_0, &_call_cbs_notationDecl_5859_0, &_set_callback_cbs_notationDecl_5859_0);
  methods += new qt_gsi::GenericMethod ("unparsedEntityDecl", "@brief Virtual method bool QXmlDTDHandler::unparsedEntityDecl(const QString &name, const QString &publicId, const QString &systemId, const QString &notationName)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_unparsedEntityDecl_7776_0, &_call_cbs_unparsedEntityDecl_7776_0);
  methods += new qt_gsi::GenericMethod ("unparsedEntityDecl", "@hide", false, &_init_cbs_unparsedEntityDecl_7776_0, &_call_cbs_unparsedEntityDecl_7776_0, &_set_callback_cbs_unparsedEntityDecl_7776_0);
  return methods;
}

gsi::Class<QXmlDTDHandler_Adaptor> decl_QXmlDTDHandler_Adaptor (qtdecl_QXmlDTDHandler (), "QtXml", "QXmlDTDHandler",
  methods_QXmlDTDHandler_Adaptor (),
  "@qt\n@brief Binding of QXmlDTDHandler");

}

