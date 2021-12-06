
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
*  @file gsiDeclQStorageInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStorageInfo>
#include <QDir>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStorageInfo

//  Constructor QStorageInfo::QStorageInfo()


static void _init_ctor_QStorageInfo_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStorageInfo> ();
}

static void _call_ctor_QStorageInfo_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStorageInfo *> (new QStorageInfo ());
}


//  Constructor QStorageInfo::QStorageInfo(const QString &path)


static void _init_ctor_QStorageInfo_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QStorageInfo> ();
}

static void _call_ctor_QStorageInfo_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStorageInfo *> (new QStorageInfo (arg1));
}


//  Constructor QStorageInfo::QStorageInfo(const QDir &dir)


static void _init_ctor_QStorageInfo_1681 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dir");
  decl->add_arg<const QDir & > (argspec_0);
  decl->set_return_new<QStorageInfo> ();
}

static void _call_ctor_QStorageInfo_1681 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDir &arg1 = gsi::arg_reader<const QDir & >() (args, heap);
  ret.write<QStorageInfo *> (new QStorageInfo (arg1));
}


//  Constructor QStorageInfo::QStorageInfo(const QStorageInfo &other)


static void _init_ctor_QStorageInfo_2515 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStorageInfo & > (argspec_0);
  decl->set_return_new<QStorageInfo> ();
}

static void _call_ctor_QStorageInfo_2515 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStorageInfo &arg1 = gsi::arg_reader<const QStorageInfo & >() (args, heap);
  ret.write<QStorageInfo *> (new QStorageInfo (arg1));
}


// qint64 QStorageInfo::bytesAvailable()


static void _init_f_bytesAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QStorageInfo *)cls)->bytesAvailable ());
}


// qint64 QStorageInfo::bytesFree()


static void _init_f_bytesFree_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesFree_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QStorageInfo *)cls)->bytesFree ());
}


// qint64 QStorageInfo::bytesTotal()


static void _init_f_bytesTotal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesTotal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QStorageInfo *)cls)->bytesTotal ());
}


// QByteArray QStorageInfo::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QStorageInfo *)cls)->device ());
}


// QString QStorageInfo::displayName()


static void _init_f_displayName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_displayName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QStorageInfo *)cls)->displayName ());
}


// QByteArray QStorageInfo::fileSystemType()


static void _init_f_fileSystemType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_fileSystemType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QStorageInfo *)cls)->fileSystemType ());
}


// bool QStorageInfo::isReadOnly()


static void _init_f_isReadOnly_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isReadOnly_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QStorageInfo *)cls)->isReadOnly ());
}


// bool QStorageInfo::isReady()


static void _init_f_isReady_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isReady_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QStorageInfo *)cls)->isReady ());
}


// bool QStorageInfo::isRoot()


static void _init_f_isRoot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRoot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QStorageInfo *)cls)->isRoot ());
}


// bool QStorageInfo::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QStorageInfo *)cls)->isValid ());
}


// QString QStorageInfo::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QStorageInfo *)cls)->name ());
}


// QStorageInfo &QStorageInfo::operator=(const QStorageInfo &other)


static void _init_f_operator_eq__2515 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStorageInfo & > (argspec_0);
  decl->set_return<QStorageInfo & > ();
}

static void _call_f_operator_eq__2515 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStorageInfo &arg1 = gsi::arg_reader<const QStorageInfo & >() (args, heap);
  ret.write<QStorageInfo & > ((QStorageInfo &)((QStorageInfo *)cls)->operator= (arg1));
}


// void QStorageInfo::refresh()


static void _init_f_refresh_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_refresh_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStorageInfo *)cls)->refresh ();
}


// QString QStorageInfo::rootPath()


static void _init_f_rootPath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_rootPath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QStorageInfo *)cls)->rootPath ());
}


// void QStorageInfo::setPath(const QString &path)


static void _init_f_setPath_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPath_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStorageInfo *)cls)->setPath (arg1);
}


// void QStorageInfo::swap(QStorageInfo &other)


static void _init_f_swap_1820 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QStorageInfo & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1820 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QStorageInfo &arg1 = gsi::arg_reader<QStorageInfo & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStorageInfo *)cls)->swap (arg1);
}


// static QList<QStorageInfo> QStorageInfo::mountedVolumes()


static void _init_f_mountedVolumes_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QStorageInfo> > ();
}

static void _call_f_mountedVolumes_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QStorageInfo> > ((QList<QStorageInfo>)QStorageInfo::mountedVolumes ());
}


// static QStorageInfo QStorageInfo::root()


static void _init_f_root_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStorageInfo > ();
}

static void _call_f_root_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStorageInfo > ((QStorageInfo)QStorageInfo::root ());
}


//  bool ::operator==(const QStorageInfo &first, const QStorageInfo &second)
static bool op_QStorageInfo_operator_eq__eq__4922(const QStorageInfo *_self, const QStorageInfo &second) {
  return ::operator==(*_self, second);
}

//  bool ::operator!=(const QStorageInfo &first, const QStorageInfo &second)
static bool op_QStorageInfo_operator_excl__eq__4922(const QStorageInfo *_self, const QStorageInfo &second) {
  return ::operator!=(*_self, second);
}


namespace gsi
{

static gsi::Methods methods_QStorageInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStorageInfo::QStorageInfo()\nThis method creates an object of class QStorageInfo.", &_init_ctor_QStorageInfo_0, &_call_ctor_QStorageInfo_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStorageInfo::QStorageInfo(const QString &path)\nThis method creates an object of class QStorageInfo.", &_init_ctor_QStorageInfo_2025, &_call_ctor_QStorageInfo_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStorageInfo::QStorageInfo(const QDir &dir)\nThis method creates an object of class QStorageInfo.", &_init_ctor_QStorageInfo_1681, &_call_ctor_QStorageInfo_1681);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStorageInfo::QStorageInfo(const QStorageInfo &other)\nThis method creates an object of class QStorageInfo.", &_init_ctor_QStorageInfo_2515, &_call_ctor_QStorageInfo_2515);
  methods += new qt_gsi::GenericMethod ("bytesAvailable", "@brief Method qint64 QStorageInfo::bytesAvailable()\n", true, &_init_f_bytesAvailable_c0, &_call_f_bytesAvailable_c0);
  methods += new qt_gsi::GenericMethod ("bytesFree", "@brief Method qint64 QStorageInfo::bytesFree()\n", true, &_init_f_bytesFree_c0, &_call_f_bytesFree_c0);
  methods += new qt_gsi::GenericMethod ("bytesTotal", "@brief Method qint64 QStorageInfo::bytesTotal()\n", true, &_init_f_bytesTotal_c0, &_call_f_bytesTotal_c0);
  methods += new qt_gsi::GenericMethod ("device", "@brief Method QByteArray QStorageInfo::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("displayName", "@brief Method QString QStorageInfo::displayName()\n", true, &_init_f_displayName_c0, &_call_f_displayName_c0);
  methods += new qt_gsi::GenericMethod ("fileSystemType", "@brief Method QByteArray QStorageInfo::fileSystemType()\n", true, &_init_f_fileSystemType_c0, &_call_f_fileSystemType_c0);
  methods += new qt_gsi::GenericMethod ("isReadOnly?", "@brief Method bool QStorageInfo::isReadOnly()\n", true, &_init_f_isReadOnly_c0, &_call_f_isReadOnly_c0);
  methods += new qt_gsi::GenericMethod ("isReady?", "@brief Method bool QStorageInfo::isReady()\n", true, &_init_f_isReady_c0, &_call_f_isReady_c0);
  methods += new qt_gsi::GenericMethod ("isRoot?", "@brief Method bool QStorageInfo::isRoot()\n", true, &_init_f_isRoot_c0, &_call_f_isRoot_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QStorageInfo::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QStorageInfo::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStorageInfo &QStorageInfo::operator=(const QStorageInfo &other)\n", false, &_init_f_operator_eq__2515, &_call_f_operator_eq__2515);
  methods += new qt_gsi::GenericMethod ("refresh", "@brief Method void QStorageInfo::refresh()\n", false, &_init_f_refresh_0, &_call_f_refresh_0);
  methods += new qt_gsi::GenericMethod ("rootPath", "@brief Method QString QStorageInfo::rootPath()\n", true, &_init_f_rootPath_c0, &_call_f_rootPath_c0);
  methods += new qt_gsi::GenericMethod ("setPath", "@brief Method void QStorageInfo::setPath(const QString &path)\n", false, &_init_f_setPath_2025, &_call_f_setPath_2025);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QStorageInfo::swap(QStorageInfo &other)\n", false, &_init_f_swap_1820, &_call_f_swap_1820);
  methods += new qt_gsi::GenericStaticMethod ("mountedVolumes", "@brief Static method QList<QStorageInfo> QStorageInfo::mountedVolumes()\nThis method is static and can be called without an instance.", &_init_f_mountedVolumes_0, &_call_f_mountedVolumes_0);
  methods += new qt_gsi::GenericStaticMethod ("root", "@brief Static method QStorageInfo QStorageInfo::root()\nThis method is static and can be called without an instance.", &_init_f_root_0, &_call_f_root_0);
  methods += gsi::method_ext("==", &::op_QStorageInfo_operator_eq__eq__4922, gsi::arg ("second"), "@brief Operator bool ::operator==(const QStorageInfo &first, const QStorageInfo &second)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QStorageInfo_operator_excl__eq__4922, gsi::arg ("second"), "@brief Operator bool ::operator!=(const QStorageInfo &first, const QStorageInfo &second)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QStorageInfo> decl_QStorageInfo ("QtCore", "QStorageInfo",
  methods_QStorageInfo (),
  "@qt\n@brief Binding of QStorageInfo");


GSI_QTCORE_PUBLIC gsi::Class<QStorageInfo> &qtdecl_QStorageInfo () { return decl_QStorageInfo; }

}

