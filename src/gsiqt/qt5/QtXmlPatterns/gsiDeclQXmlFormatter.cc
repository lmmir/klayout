
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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
*  @file gsiDeclQXmlFormatter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlFormatter>
#include <QXmlQuery>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlFormatter

// void QXmlFormatter::atomicValue(const QVariant &value)


static void _init_f_atomicValue_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_atomicValue_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->atomicValue (arg1);
}


// void QXmlFormatter::attribute(const QXmlName &name, const QStringRef &value)


static void _init_f_attribute_4286 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_attribute_4286 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QStringRef &arg2 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->attribute (arg1, arg2);
}


// void QXmlFormatter::characters(const QStringRef &value)


static void _init_f_characters_2310 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_characters_2310 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->characters (arg1);
}


// void QXmlFormatter::comment(const QString &value)


static void _init_f_comment_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_comment_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->comment (arg1);
}


// void QXmlFormatter::endDocument()


static void _init_f_endDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->endDocument ();
}


// void QXmlFormatter::endElement()


static void _init_f_endElement_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endElement_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->endElement ();
}


// void QXmlFormatter::endOfSequence()


static void _init_f_endOfSequence_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endOfSequence_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->endOfSequence ();
}


// int QXmlFormatter::indentationDepth()


static void _init_f_indentationDepth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_indentationDepth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlFormatter *)cls)->indentationDepth ());
}


// void QXmlFormatter::processingInstruction(const QXmlName &name, const QString &value)


static void _init_f_processingInstruction_4001 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_processingInstruction_4001 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->processingInstruction (arg1, arg2);
}


// void QXmlFormatter::setIndentationDepth(int depth)


static void _init_f_setIndentationDepth_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("depth");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIndentationDepth_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->setIndentationDepth (arg1);
}


// void QXmlFormatter::startDocument()


static void _init_f_startDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_startDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->startDocument ();
}


// void QXmlFormatter::startElement(const QXmlName &name)


static void _init_f_startElement_2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_startElement_2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->startElement (arg1);
}


// void QXmlFormatter::startOfSequence()


static void _init_f_startOfSequence_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_startOfSequence_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter *)cls)->startOfSequence ();
}


namespace gsi
{

static gsi::Methods methods_QXmlFormatter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("atomicValue", "@brief Method void QXmlFormatter::atomicValue(const QVariant &value)\nThis is a reimplementation of QXmlSerializer::atomicValue", false, &_init_f_atomicValue_2119, &_call_f_atomicValue_2119);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Method void QXmlFormatter::attribute(const QXmlName &name, const QStringRef &value)\nThis is a reimplementation of QXmlSerializer::attribute", false, &_init_f_attribute_4286, &_call_f_attribute_4286);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Method void QXmlFormatter::characters(const QStringRef &value)\nThis is a reimplementation of QXmlSerializer::characters", false, &_init_f_characters_2310, &_call_f_characters_2310);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Method void QXmlFormatter::comment(const QString &value)\nThis is a reimplementation of QXmlSerializer::comment", false, &_init_f_comment_2025, &_call_f_comment_2025);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Method void QXmlFormatter::endDocument()\nThis is a reimplementation of QXmlSerializer::endDocument", false, &_init_f_endDocument_0, &_call_f_endDocument_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Method void QXmlFormatter::endElement()\nThis is a reimplementation of QXmlSerializer::endElement", false, &_init_f_endElement_0, &_call_f_endElement_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@brief Method void QXmlFormatter::endOfSequence()\nThis is a reimplementation of QXmlSerializer::endOfSequence", false, &_init_f_endOfSequence_0, &_call_f_endOfSequence_0);
  methods += new qt_gsi::GenericMethod (":indentationDepth", "@brief Method int QXmlFormatter::indentationDepth()\n", true, &_init_f_indentationDepth_c0, &_call_f_indentationDepth_c0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Method void QXmlFormatter::processingInstruction(const QXmlName &name, const QString &value)\nThis is a reimplementation of QXmlSerializer::processingInstruction", false, &_init_f_processingInstruction_4001, &_call_f_processingInstruction_4001);
  methods += new qt_gsi::GenericMethod ("setIndentationDepth|indentationDepth=", "@brief Method void QXmlFormatter::setIndentationDepth(int depth)\n", false, &_init_f_setIndentationDepth_767, &_call_f_setIndentationDepth_767);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Method void QXmlFormatter::startDocument()\nThis is a reimplementation of QXmlSerializer::startDocument", false, &_init_f_startDocument_0, &_call_f_startDocument_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Method void QXmlFormatter::startElement(const QXmlName &name)\nThis is a reimplementation of QXmlSerializer::startElement", false, &_init_f_startElement_2084, &_call_f_startElement_2084);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@brief Method void QXmlFormatter::startOfSequence()\nThis is a reimplementation of QXmlSerializer::startOfSequence", false, &_init_f_startOfSequence_0, &_call_f_startOfSequence_0);
  return methods;
}

gsi::Class<QXmlSerializer> &qtdecl_QXmlSerializer ();

gsi::Class<QXmlFormatter> decl_QXmlFormatter (qtdecl_QXmlSerializer (), "QtXmlPatterns", "QXmlFormatter_Native",
  methods_QXmlFormatter (),
  "@hide\n@alias QXmlFormatter");

GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlFormatter> &qtdecl_QXmlFormatter () { return decl_QXmlFormatter; }

}


class QXmlFormatter_Adaptor : public QXmlFormatter, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlFormatter_Adaptor();

  //  [adaptor ctor] QXmlFormatter::QXmlFormatter(const QXmlQuery &query, QIODevice *outputDevice)
  QXmlFormatter_Adaptor(const QXmlQuery &query, QIODevice *outputDevice) : QXmlFormatter(query, outputDevice)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QXmlFormatter::atomicValue(const QVariant &value)
  void cbs_atomicValue_2119_0(const QVariant &value)
  {
    QXmlFormatter::atomicValue(value);
  }

  virtual void atomicValue(const QVariant &value)
  {
    if (cb_atomicValue_2119_0.can_issue()) {
      cb_atomicValue_2119_0.issue<QXmlFormatter_Adaptor, const QVariant &>(&QXmlFormatter_Adaptor::cbs_atomicValue_2119_0, value);
    } else {
      QXmlFormatter::atomicValue(value);
    }
  }

  //  [adaptor impl] void QXmlFormatter::attribute(const QXmlName &name, const QStringRef &value)
  void cbs_attribute_4286_0(const QXmlName &name, const QStringRef &value)
  {
    QXmlFormatter::attribute(name, value);
  }

  virtual void attribute(const QXmlName &name, const QStringRef &value)
  {
    if (cb_attribute_4286_0.can_issue()) {
      cb_attribute_4286_0.issue<QXmlFormatter_Adaptor, const QXmlName &, const QStringRef &>(&QXmlFormatter_Adaptor::cbs_attribute_4286_0, name, value);
    } else {
      QXmlFormatter::attribute(name, value);
    }
  }

  //  [adaptor impl] void QXmlFormatter::characters(const QStringRef &value)
  void cbs_characters_2310_0(const QStringRef &value)
  {
    QXmlFormatter::characters(value);
  }

  virtual void characters(const QStringRef &value)
  {
    if (cb_characters_2310_0.can_issue()) {
      cb_characters_2310_0.issue<QXmlFormatter_Adaptor, const QStringRef &>(&QXmlFormatter_Adaptor::cbs_characters_2310_0, value);
    } else {
      QXmlFormatter::characters(value);
    }
  }

  //  [adaptor impl] void QXmlFormatter::comment(const QString &value)
  void cbs_comment_2025_0(const QString &value)
  {
    QXmlFormatter::comment(value);
  }

  virtual void comment(const QString &value)
  {
    if (cb_comment_2025_0.can_issue()) {
      cb_comment_2025_0.issue<QXmlFormatter_Adaptor, const QString &>(&QXmlFormatter_Adaptor::cbs_comment_2025_0, value);
    } else {
      QXmlFormatter::comment(value);
    }
  }

  //  [adaptor impl] void QXmlFormatter::endDocument()
  void cbs_endDocument_0_0()
  {
    QXmlFormatter::endDocument();
  }

  virtual void endDocument()
  {
    if (cb_endDocument_0_0.can_issue()) {
      cb_endDocument_0_0.issue<QXmlFormatter_Adaptor>(&QXmlFormatter_Adaptor::cbs_endDocument_0_0);
    } else {
      QXmlFormatter::endDocument();
    }
  }

  //  [adaptor impl] void QXmlFormatter::endElement()
  void cbs_endElement_0_0()
  {
    QXmlFormatter::endElement();
  }

  virtual void endElement()
  {
    if (cb_endElement_0_0.can_issue()) {
      cb_endElement_0_0.issue<QXmlFormatter_Adaptor>(&QXmlFormatter_Adaptor::cbs_endElement_0_0);
    } else {
      QXmlFormatter::endElement();
    }
  }

  //  [adaptor impl] void QXmlFormatter::endOfSequence()
  void cbs_endOfSequence_0_0()
  {
    QXmlFormatter::endOfSequence();
  }

  virtual void endOfSequence()
  {
    if (cb_endOfSequence_0_0.can_issue()) {
      cb_endOfSequence_0_0.issue<QXmlFormatter_Adaptor>(&QXmlFormatter_Adaptor::cbs_endOfSequence_0_0);
    } else {
      QXmlFormatter::endOfSequence();
    }
  }

  //  [adaptor impl] void QXmlFormatter::namespaceBinding(const QXmlName &nb)
  void cbs_namespaceBinding_2084_0(const QXmlName &nb)
  {
    QXmlFormatter::namespaceBinding(nb);
  }

  virtual void namespaceBinding(const QXmlName &nb)
  {
    if (cb_namespaceBinding_2084_0.can_issue()) {
      cb_namespaceBinding_2084_0.issue<QXmlFormatter_Adaptor, const QXmlName &>(&QXmlFormatter_Adaptor::cbs_namespaceBinding_2084_0, nb);
    } else {
      QXmlFormatter::namespaceBinding(nb);
    }
  }

  //  [adaptor impl] void QXmlFormatter::processingInstruction(const QXmlName &name, const QString &value)
  void cbs_processingInstruction_4001_0(const QXmlName &name, const QString &value)
  {
    QXmlFormatter::processingInstruction(name, value);
  }

  virtual void processingInstruction(const QXmlName &name, const QString &value)
  {
    if (cb_processingInstruction_4001_0.can_issue()) {
      cb_processingInstruction_4001_0.issue<QXmlFormatter_Adaptor, const QXmlName &, const QString &>(&QXmlFormatter_Adaptor::cbs_processingInstruction_4001_0, name, value);
    } else {
      QXmlFormatter::processingInstruction(name, value);
    }
  }

  //  [adaptor impl] void QXmlFormatter::startDocument()
  void cbs_startDocument_0_0()
  {
    QXmlFormatter::startDocument();
  }

  virtual void startDocument()
  {
    if (cb_startDocument_0_0.can_issue()) {
      cb_startDocument_0_0.issue<QXmlFormatter_Adaptor>(&QXmlFormatter_Adaptor::cbs_startDocument_0_0);
    } else {
      QXmlFormatter::startDocument();
    }
  }

  //  [adaptor impl] void QXmlFormatter::startElement(const QXmlName &name)
  void cbs_startElement_2084_0(const QXmlName &name)
  {
    QXmlFormatter::startElement(name);
  }

  virtual void startElement(const QXmlName &name)
  {
    if (cb_startElement_2084_0.can_issue()) {
      cb_startElement_2084_0.issue<QXmlFormatter_Adaptor, const QXmlName &>(&QXmlFormatter_Adaptor::cbs_startElement_2084_0, name);
    } else {
      QXmlFormatter::startElement(name);
    }
  }

  //  [adaptor impl] void QXmlFormatter::startOfSequence()
  void cbs_startOfSequence_0_0()
  {
    QXmlFormatter::startOfSequence();
  }

  virtual void startOfSequence()
  {
    if (cb_startOfSequence_0_0.can_issue()) {
      cb_startOfSequence_0_0.issue<QXmlFormatter_Adaptor>(&QXmlFormatter_Adaptor::cbs_startOfSequence_0_0);
    } else {
      QXmlFormatter::startOfSequence();
    }
  }

  //  [adaptor impl] void QXmlFormatter::whitespaceOnly(const QStringRef &value)
  void cbs_whitespaceOnly_2310_0(const QStringRef &value)
  {
    QXmlFormatter::whitespaceOnly(value);
  }

  virtual void whitespaceOnly(const QStringRef &value)
  {
    if (cb_whitespaceOnly_2310_0.can_issue()) {
      cb_whitespaceOnly_2310_0.issue<QXmlFormatter_Adaptor, const QStringRef &>(&QXmlFormatter_Adaptor::cbs_whitespaceOnly_2310_0, value);
    } else {
      QXmlFormatter::whitespaceOnly(value);
    }
  }

  gsi::Callback cb_atomicValue_2119_0;
  gsi::Callback cb_attribute_4286_0;
  gsi::Callback cb_characters_2310_0;
  gsi::Callback cb_comment_2025_0;
  gsi::Callback cb_endDocument_0_0;
  gsi::Callback cb_endElement_0_0;
  gsi::Callback cb_endOfSequence_0_0;
  gsi::Callback cb_namespaceBinding_2084_0;
  gsi::Callback cb_processingInstruction_4001_0;
  gsi::Callback cb_startDocument_0_0;
  gsi::Callback cb_startElement_2084_0;
  gsi::Callback cb_startOfSequence_0_0;
  gsi::Callback cb_whitespaceOnly_2310_0;
};

QXmlFormatter_Adaptor::~QXmlFormatter_Adaptor() { }

//  Constructor QXmlFormatter::QXmlFormatter(const QXmlQuery &query, QIODevice *outputDevice) (adaptor class)

static void _init_ctor_QXmlFormatter_Adaptor_3572 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QXmlQuery & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("outputDevice");
  decl->add_arg<QIODevice * > (argspec_1);
  decl->set_return_new<QXmlFormatter_Adaptor> ();
}

static void _call_ctor_QXmlFormatter_Adaptor_3572 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlQuery &arg1 = args.read<const QXmlQuery & > (heap);
  QIODevice *arg2 = args.read<QIODevice * > (heap);
  ret.write<QXmlFormatter_Adaptor *> (new QXmlFormatter_Adaptor (arg1, arg2));
}


// void QXmlFormatter::atomicValue(const QVariant &value)

static void _init_cbs_atomicValue_2119_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_atomicValue_2119_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_atomicValue_2119_0 (arg1);
}

static void _set_callback_cbs_atomicValue_2119_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_atomicValue_2119_0 = cb;
}


// void QXmlFormatter::attribute(const QXmlName &name, const QStringRef &value)

static void _init_cbs_attribute_4286_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_attribute_4286_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QStringRef &arg2 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_attribute_4286_0 (arg1, arg2);
}

static void _set_callback_cbs_attribute_4286_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_attribute_4286_0 = cb;
}


// void QXmlFormatter::characters(const QStringRef &value)

static void _init_cbs_characters_2310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_characters_2310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_characters_2310_0 (arg1);
}

static void _set_callback_cbs_characters_2310_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_characters_2310_0 = cb;
}


// void QXmlFormatter::comment(const QString &value)

static void _init_cbs_comment_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_comment_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_comment_2025_0 (arg1);
}

static void _set_callback_cbs_comment_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_comment_2025_0 = cb;
}


// void QXmlFormatter::endDocument()

static void _init_cbs_endDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_endDocument_0_0 ();
}

static void _set_callback_cbs_endDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_endDocument_0_0 = cb;
}


// void QXmlFormatter::endElement()

static void _init_cbs_endElement_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endElement_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_endElement_0_0 ();
}

static void _set_callback_cbs_endElement_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_endElement_0_0 = cb;
}


// void QXmlFormatter::endOfSequence()

static void _init_cbs_endOfSequence_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endOfSequence_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_endOfSequence_0_0 ();
}

static void _set_callback_cbs_endOfSequence_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_endOfSequence_0_0 = cb;
}


// void QXmlFormatter::namespaceBinding(const QXmlName &nb)

static void _init_cbs_namespaceBinding_2084_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nb");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_namespaceBinding_2084_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_namespaceBinding_2084_0 (arg1);
}

static void _set_callback_cbs_namespaceBinding_2084_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_namespaceBinding_2084_0 = cb;
}


// void QXmlFormatter::processingInstruction(const QXmlName &name, const QString &value)

static void _init_cbs_processingInstruction_4001_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_processingInstruction_4001_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_processingInstruction_4001_0 (arg1, arg2);
}

static void _set_callback_cbs_processingInstruction_4001_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_processingInstruction_4001_0 = cb;
}


// void QXmlFormatter::startDocument()

static void _init_cbs_startDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_startDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_startDocument_0_0 ();
}

static void _set_callback_cbs_startDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_startDocument_0_0 = cb;
}


// void QXmlFormatter::startElement(const QXmlName &name)

static void _init_cbs_startElement_2084_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_startElement_2084_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_startElement_2084_0 (arg1);
}

static void _set_callback_cbs_startElement_2084_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_startElement_2084_0 = cb;
}


// void QXmlFormatter::startOfSequence()

static void _init_cbs_startOfSequence_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_startOfSequence_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_startOfSequence_0_0 ();
}

static void _set_callback_cbs_startOfSequence_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_startOfSequence_0_0 = cb;
}


// void QXmlFormatter::whitespaceOnly(const QStringRef &value)

static void _init_cbs_whitespaceOnly_2310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_whitespaceOnly_2310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlFormatter_Adaptor *)cls)->cbs_whitespaceOnly_2310_0 (arg1);
}

static void _set_callback_cbs_whitespaceOnly_2310_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlFormatter_Adaptor *)cls)->cb_whitespaceOnly_2310_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlFormatter> &qtdecl_QXmlFormatter ();

static gsi::Methods methods_QXmlFormatter_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlFormatter::QXmlFormatter(const QXmlQuery &query, QIODevice *outputDevice)\nThis method creates an object of class QXmlFormatter.", &_init_ctor_QXmlFormatter_Adaptor_3572, &_call_ctor_QXmlFormatter_Adaptor_3572);
  methods += new qt_gsi::GenericMethod ("atomicValue", "@hide", false, &_init_cbs_atomicValue_2119_0, &_call_cbs_atomicValue_2119_0);
  methods += new qt_gsi::GenericMethod ("atomicValue", "@brief Virtual method void QXmlFormatter::atomicValue(const QVariant &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_atomicValue_2119_0, &_call_cbs_atomicValue_2119_0, &_set_callback_cbs_atomicValue_2119_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@hide", false, &_init_cbs_attribute_4286_0, &_call_cbs_attribute_4286_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Virtual method void QXmlFormatter::attribute(const QXmlName &name, const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_attribute_4286_0, &_call_cbs_attribute_4286_0, &_set_callback_cbs_attribute_4286_0);
  methods += new qt_gsi::GenericMethod ("characters", "@hide", false, &_init_cbs_characters_2310_0, &_call_cbs_characters_2310_0);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Virtual method void QXmlFormatter::characters(const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_characters_2310_0, &_call_cbs_characters_2310_0, &_set_callback_cbs_characters_2310_0);
  methods += new qt_gsi::GenericMethod ("comment", "@hide", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Virtual method void QXmlFormatter::comment(const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0, &_set_callback_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@hide", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Virtual method void QXmlFormatter::endDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0, &_set_callback_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@hide", false, &_init_cbs_endElement_0_0, &_call_cbs_endElement_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Virtual method void QXmlFormatter::endElement()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endElement_0_0, &_call_cbs_endElement_0_0, &_set_callback_cbs_endElement_0_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@hide", false, &_init_cbs_endOfSequence_0_0, &_call_cbs_endOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@brief Virtual method void QXmlFormatter::endOfSequence()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endOfSequence_0_0, &_call_cbs_endOfSequence_0_0, &_set_callback_cbs_endOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@hide", false, &_init_cbs_namespaceBinding_2084_0, &_call_cbs_namespaceBinding_2084_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@brief Virtual method void QXmlFormatter::namespaceBinding(const QXmlName &nb)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_namespaceBinding_2084_0, &_call_cbs_namespaceBinding_2084_0, &_set_callback_cbs_namespaceBinding_2084_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@hide", false, &_init_cbs_processingInstruction_4001_0, &_call_cbs_processingInstruction_4001_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Virtual method void QXmlFormatter::processingInstruction(const QXmlName &name, const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_processingInstruction_4001_0, &_call_cbs_processingInstruction_4001_0, &_set_callback_cbs_processingInstruction_4001_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@hide", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Virtual method void QXmlFormatter::startDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0, &_set_callback_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@hide", false, &_init_cbs_startElement_2084_0, &_call_cbs_startElement_2084_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Virtual method void QXmlFormatter::startElement(const QXmlName &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startElement_2084_0, &_call_cbs_startElement_2084_0, &_set_callback_cbs_startElement_2084_0);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@hide", false, &_init_cbs_startOfSequence_0_0, &_call_cbs_startOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@brief Virtual method void QXmlFormatter::startOfSequence()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startOfSequence_0_0, &_call_cbs_startOfSequence_0_0, &_set_callback_cbs_startOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@hide", false, &_init_cbs_whitespaceOnly_2310_0, &_call_cbs_whitespaceOnly_2310_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@brief Virtual method void QXmlFormatter::whitespaceOnly(const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_whitespaceOnly_2310_0, &_call_cbs_whitespaceOnly_2310_0, &_set_callback_cbs_whitespaceOnly_2310_0);
  return methods;
}

gsi::Class<QXmlFormatter_Adaptor> decl_QXmlFormatter_Adaptor (qtdecl_QXmlFormatter (), "QtXmlPatterns", "QXmlFormatter",
  methods_QXmlFormatter_Adaptor (),
  "@qt\n@brief Binding of QXmlFormatter");

}

