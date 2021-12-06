
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
*  @file gsiDeclQJsonDocument.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonDocument

//  Constructor QJsonDocument::QJsonDocument()


static void _init_ctor_QJsonDocument_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonDocument> ();
}

static void _call_ctor_QJsonDocument_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonDocument *> (new QJsonDocument ());
}


//  Constructor QJsonDocument::QJsonDocument(const QJsonObject &object)


static void _init_ctor_QJsonDocument_2403 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return_new<QJsonDocument> ();
}

static void _call_ctor_QJsonDocument_2403 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = gsi::arg_reader<const QJsonObject & >() (args, heap);
  ret.write<QJsonDocument *> (new QJsonDocument (arg1));
}


//  Constructor QJsonDocument::QJsonDocument(const QJsonArray &array)


static void _init_ctor_QJsonDocument_2315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return_new<QJsonDocument> ();
}

static void _call_ctor_QJsonDocument_2315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = gsi::arg_reader<const QJsonArray & >() (args, heap);
  ret.write<QJsonDocument *> (new QJsonDocument (arg1));
}


//  Constructor QJsonDocument::QJsonDocument(const QJsonDocument &other)


static void _init_ctor_QJsonDocument_2635 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonDocument & > (argspec_0);
  decl->set_return_new<QJsonDocument> ();
}

static void _call_ctor_QJsonDocument_2635 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonDocument &arg1 = gsi::arg_reader<const QJsonDocument & >() (args, heap);
  ret.write<QJsonDocument *> (new QJsonDocument (arg1));
}


// QJsonArray QJsonDocument::array()


static void _init_f_array_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray > ();
}

static void _call_f_array_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray > ((QJsonArray)((QJsonDocument *)cls)->array ());
}


// bool QJsonDocument::isArray()


static void _init_f_isArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonDocument *)cls)->isArray ());
}


// bool QJsonDocument::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonDocument *)cls)->isEmpty ());
}


// bool QJsonDocument::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonDocument *)cls)->isNull ());
}


// bool QJsonDocument::isObject()


static void _init_f_isObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonDocument *)cls)->isObject ());
}


// QJsonObject QJsonDocument::object()


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject > ((QJsonObject)((QJsonDocument *)cls)->object ());
}


// QJsonDocument &QJsonDocument::operator =(const QJsonDocument &other)


static void _init_f_operator_eq__2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonDocument & > (argspec_0);
  decl->set_return<QJsonDocument & > ();
}

static void _call_f_operator_eq__2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonDocument &arg1 = gsi::arg_reader<const QJsonDocument & >() (args, heap);
  ret.write<QJsonDocument & > ((QJsonDocument &)((QJsonDocument *)cls)->operator = (arg1));
}


// bool QJsonDocument::operator!=(const QJsonDocument &other)


static void _init_f_operator_excl__eq__c2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonDocument & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonDocument &arg1 = gsi::arg_reader<const QJsonDocument & >() (args, heap);
  ret.write<bool > ((bool)((QJsonDocument *)cls)->operator!= (arg1));
}


// bool QJsonDocument::operator==(const QJsonDocument &other)


static void _init_f_operator_eq__eq__c2635 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonDocument & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2635 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonDocument &arg1 = gsi::arg_reader<const QJsonDocument & >() (args, heap);
  ret.write<bool > ((bool)((QJsonDocument *)cls)->operator== (arg1));
}


// const QJsonValue QJsonDocument::operator[](const QString &key)


static void _init_f_operator_index__c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonDocument *)cls)->operator[] (arg1));
}


// const QJsonValue QJsonDocument::operator[](QStringView key)


static void _init_f_operator_index__c1559 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<QStringView > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c1559 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QStringView arg1 = gsi::arg_reader<QStringView >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonDocument *)cls)->operator[] (arg1));
}


// const QJsonValue QJsonDocument::operator[](QLatin1String key)


static void _init_f_operator_index__c1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<QLatin1String > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QLatin1String arg1 = gsi::arg_reader<QLatin1String >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonDocument *)cls)->operator[] (arg1));
}


// const QJsonValue QJsonDocument::operator[](qsizetype i)


static void _init_f_operator_index__c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonDocument *)cls)->operator[] (arg1));
}


// void QJsonDocument::setArray(const QJsonArray &array)


static void _init_f_setArray_2315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setArray_2315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = gsi::arg_reader<const QJsonArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonDocument *)cls)->setArray (arg1);
}


// void QJsonDocument::setObject(const QJsonObject &object)


static void _init_f_setObject_2403 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setObject_2403 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = gsi::arg_reader<const QJsonObject & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonDocument *)cls)->setObject (arg1);
}


// void QJsonDocument::swap(QJsonDocument &other)


static void _init_f_swap_1940 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QJsonDocument & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1940 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonDocument &arg1 = gsi::arg_reader<QJsonDocument & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonDocument *)cls)->swap (arg1);
}


// QByteArray QJsonDocument::toJson(QJsonDocument::JsonFormat format)


static void _init_f_toJson_c2901 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format", true, "QJsonDocument::Indented");
  decl->add_arg<const qt_gsi::Converter<QJsonDocument::JsonFormat>::target_type & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_toJson_c2901 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QJsonDocument::JsonFormat>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QJsonDocument::JsonFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QJsonDocument::JsonFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QJsonDocument::JsonFormat>(heap, QJsonDocument::Indented), heap);
  ret.write<QByteArray > ((QByteArray)((QJsonDocument *)cls)->toJson (qt_gsi::QtToCppAdaptor<QJsonDocument::JsonFormat>(arg1).cref()));
}


// QVariant QJsonDocument::toVariant()


static void _init_f_toVariant_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_toVariant_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QJsonDocument *)cls)->toVariant ());
}


// static QJsonDocument QJsonDocument::fromJson(const QByteArray &json, QJsonParseError *error)


static void _init_f_fromJson_4343 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("json");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("error", true, "nullptr");
  decl->add_arg<QJsonParseError * > (argspec_1);
  decl->set_return<QJsonDocument > ();
}

static void _call_f_fromJson_4343 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  QJsonParseError *arg2 = args ? gsi::arg_reader<QJsonParseError * >() (args, heap) : gsi::arg_maker<QJsonParseError * >() (nullptr, heap);
  ret.write<QJsonDocument > ((QJsonDocument)QJsonDocument::fromJson (arg1, arg2));
}


// static QJsonDocument QJsonDocument::fromVariant(const QVariant &variant)


static void _init_f_fromVariant_2119 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("variant");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<QJsonDocument > ();
}

static void _call_f_fromVariant_2119 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  ret.write<QJsonDocument > ((QJsonDocument)QJsonDocument::fromVariant (arg1));
}



namespace gsi
{

static gsi::Methods methods_QJsonDocument () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonDocument::QJsonDocument()\nThis method creates an object of class QJsonDocument.", &_init_ctor_QJsonDocument_0, &_call_ctor_QJsonDocument_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonDocument::QJsonDocument(const QJsonObject &object)\nThis method creates an object of class QJsonDocument.", &_init_ctor_QJsonDocument_2403, &_call_ctor_QJsonDocument_2403);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonDocument::QJsonDocument(const QJsonArray &array)\nThis method creates an object of class QJsonDocument.", &_init_ctor_QJsonDocument_2315, &_call_ctor_QJsonDocument_2315);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonDocument::QJsonDocument(const QJsonDocument &other)\nThis method creates an object of class QJsonDocument.", &_init_ctor_QJsonDocument_2635, &_call_ctor_QJsonDocument_2635);
  methods += new qt_gsi::GenericMethod (":array", "@brief Method QJsonArray QJsonDocument::array()\n", true, &_init_f_array_c0, &_call_f_array_c0);
  methods += new qt_gsi::GenericMethod ("isArray?", "@brief Method bool QJsonDocument::isArray()\n", true, &_init_f_isArray_c0, &_call_f_isArray_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QJsonDocument::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QJsonDocument::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isObject?", "@brief Method bool QJsonDocument::isObject()\n", true, &_init_f_isObject_c0, &_call_f_isObject_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method QJsonObject QJsonDocument::object()\n", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QJsonDocument &QJsonDocument::operator =(const QJsonDocument &other)\n", false, &_init_f_operator_eq__2635, &_call_f_operator_eq__2635);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonDocument::operator!=(const QJsonDocument &other)\n", true, &_init_f_operator_excl__eq__c2635, &_call_f_operator_excl__eq__c2635);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonDocument::operator==(const QJsonDocument &other)\n", true, &_init_f_operator_eq__eq__c2635, &_call_f_operator_eq__eq__c2635);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonDocument::operator[](const QString &key)\n", true, &_init_f_operator_index__c2025, &_call_f_operator_index__c2025);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonDocument::operator[](QStringView key)\n", true, &_init_f_operator_index__c1559, &_call_f_operator_index__c1559);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonDocument::operator[](QLatin1String key)\n", true, &_init_f_operator_index__c1701, &_call_f_operator_index__c1701);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonDocument::operator[](qsizetype i)\n", true, &_init_f_operator_index__c1442, &_call_f_operator_index__c1442);
  methods += new qt_gsi::GenericMethod ("setArray|array=", "@brief Method void QJsonDocument::setArray(const QJsonArray &array)\n", false, &_init_f_setArray_2315, &_call_f_setArray_2315);
  methods += new qt_gsi::GenericMethod ("setObject", "@brief Method void QJsonDocument::setObject(const QJsonObject &object)\n", false, &_init_f_setObject_2403, &_call_f_setObject_2403);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QJsonDocument::swap(QJsonDocument &other)\n", false, &_init_f_swap_1940, &_call_f_swap_1940);
  methods += new qt_gsi::GenericMethod ("toJson", "@brief Method QByteArray QJsonDocument::toJson(QJsonDocument::JsonFormat format)\n", true, &_init_f_toJson_c2901, &_call_f_toJson_c2901);
  methods += new qt_gsi::GenericMethod ("toVariant", "@brief Method QVariant QJsonDocument::toVariant()\n", true, &_init_f_toVariant_c0, &_call_f_toVariant_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromJson", "@brief Static method QJsonDocument QJsonDocument::fromJson(const QByteArray &json, QJsonParseError *error)\nThis method is static and can be called without an instance.", &_init_f_fromJson_4343, &_call_f_fromJson_4343);
  methods += new qt_gsi::GenericStaticMethod ("fromVariant", "@brief Static method QJsonDocument QJsonDocument::fromVariant(const QVariant &variant)\nThis method is static and can be called without an instance.", &_init_f_fromVariant_2119, &_call_f_fromVariant_2119);
  return methods;
}

gsi::Class<QJsonDocument> decl_QJsonDocument ("QtCore", "QJsonDocument",
  methods_QJsonDocument (),
  "@qt\n@brief Binding of QJsonDocument");


GSI_QTCORE_PUBLIC gsi::Class<QJsonDocument> &qtdecl_QJsonDocument () { return decl_QJsonDocument; }

}


//  Implementation of the enum wrapper class for QJsonDocument::JsonFormat
namespace qt_gsi
{

static gsi::Enum<QJsonDocument::JsonFormat> decl_QJsonDocument_JsonFormat_Enum ("QtCore", "QJsonDocument_JsonFormat",
    gsi::enum_const ("Indented", QJsonDocument::Indented, "@brief Enum constant QJsonDocument::Indented") +
    gsi::enum_const ("Compact", QJsonDocument::Compact, "@brief Enum constant QJsonDocument::Compact"),
  "@qt\n@brief This class represents the QJsonDocument::JsonFormat enum");

static gsi::QFlagsClass<QJsonDocument::JsonFormat > decl_QJsonDocument_JsonFormat_Enums ("QtCore", "QJsonDocument_QFlags_JsonFormat",
  "@qt\n@brief This class represents the QFlags<QJsonDocument::JsonFormat> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QJsonDocument> inject_QJsonDocument_JsonFormat_Enum_in_parent (decl_QJsonDocument_JsonFormat_Enum.defs ());
static gsi::ClassExt<QJsonDocument> decl_QJsonDocument_JsonFormat_Enum_as_child (decl_QJsonDocument_JsonFormat_Enum, "JsonFormat");
static gsi::ClassExt<QJsonDocument> decl_QJsonDocument_JsonFormat_Enums_as_child (decl_QJsonDocument_JsonFormat_Enums, "QFlags_JsonFormat");

}

