
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
*  @file gsiDeclQTemporaryFile.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTemporaryFile>
#include <QEvent>
#include <QFile>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTemporaryFile

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QTemporaryFile::staticMetaObject);
}


//  Constructor QTemporaryFile::QTemporaryFile()


static void _init_ctor_QTemporaryFile_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTemporaryFile> ();
}

static void _call_ctor_QTemporaryFile_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTemporaryFile *> (new QTemporaryFile ());
}


//  Constructor QTemporaryFile::QTemporaryFile(const QString &templateName)


static void _init_ctor_QTemporaryFile_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("templateName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QTemporaryFile> ();
}

static void _call_ctor_QTemporaryFile_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTemporaryFile *> (new QTemporaryFile (arg1));
}


//  Constructor QTemporaryFile::QTemporaryFile(QObject *parent)


static void _init_ctor_QTemporaryFile_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QTemporaryFile> ();
}

static void _call_ctor_QTemporaryFile_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QTemporaryFile *> (new QTemporaryFile (arg1));
}


//  Constructor QTemporaryFile::QTemporaryFile(const QString &templateName, QObject *parent)


static void _init_ctor_QTemporaryFile_3219 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("templateName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QTemporaryFile> ();
}

static void _call_ctor_QTemporaryFile_3219 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QTemporaryFile *> (new QTemporaryFile (arg1, arg2));
}


// bool QTemporaryFile::autoRemove()


static void _init_f_autoRemove_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoRemove_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTemporaryFile *)cls)->autoRemove ());
}


// QString QTemporaryFile::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTemporaryFile *)cls)->fileName ());
}


// QString QTemporaryFile::fileTemplate()


static void _init_f_fileTemplate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileTemplate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTemporaryFile *)cls)->fileTemplate ());
}


// bool QTemporaryFile::open()


static void _init_f_open_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_open_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTemporaryFile *)cls)->open ());
}


// void QTemporaryFile::setAutoRemove(bool b)


static void _init_f_setAutoRemove_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoRemove_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTemporaryFile *)cls)->setAutoRemove (arg1);
}


// void QTemporaryFile::setFileTemplate(const QString &name)


static void _init_f_setFileTemplate_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileTemplate_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTemporaryFile *)cls)->setFileTemplate (arg1);
}


// static QTemporaryFile *QTemporaryFile::createLocalFile(const QString &fileName)


static void _init_f_createLocalFile_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QTemporaryFile * > ();
}

static void _call_f_createLocalFile_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTemporaryFile * > ((QTemporaryFile *)QTemporaryFile::createLocalFile (arg1));
}


// static QTemporaryFile *QTemporaryFile::createLocalFile(QFile &file)


static void _init_f_createLocalFile_1083 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<QFile & > (argspec_0);
  decl->set_return<QTemporaryFile * > ();
}

static void _call_f_createLocalFile_1083 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFile &arg1 = gsi::arg_reader<QFile & >() (args, heap);
  ret.write<QTemporaryFile * > ((QTemporaryFile *)QTemporaryFile::createLocalFile (arg1));
}


// static QTemporaryFile *QTemporaryFile::createNativeFile(const QString &fileName)


static void _init_f_createNativeFile_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QTemporaryFile * > ();
}

static void _call_f_createNativeFile_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTemporaryFile * > ((QTemporaryFile *)QTemporaryFile::createNativeFile (arg1));
}


// static QTemporaryFile *QTemporaryFile::createNativeFile(QFile &file)


static void _init_f_createNativeFile_1083 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<QFile & > (argspec_0);
  decl->set_return<QTemporaryFile * > ();
}

static void _call_f_createNativeFile_1083 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFile &arg1 = gsi::arg_reader<QFile & >() (args, heap);
  ret.write<QTemporaryFile * > ((QTemporaryFile *)QTemporaryFile::createNativeFile (arg1));
}


// static QString QTemporaryFile::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QTemporaryFile::tr (arg1, arg2, arg3));
}


// static QString QTemporaryFile::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QTemporaryFile::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QTemporaryFile () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTemporaryFile::QTemporaryFile()\nThis method creates an object of class QTemporaryFile.", &_init_ctor_QTemporaryFile_0, &_call_ctor_QTemporaryFile_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTemporaryFile::QTemporaryFile(const QString &templateName)\nThis method creates an object of class QTemporaryFile.", &_init_ctor_QTemporaryFile_2025, &_call_ctor_QTemporaryFile_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTemporaryFile::QTemporaryFile(QObject *parent)\nThis method creates an object of class QTemporaryFile.", &_init_ctor_QTemporaryFile_1302, &_call_ctor_QTemporaryFile_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTemporaryFile::QTemporaryFile(const QString &templateName, QObject *parent)\nThis method creates an object of class QTemporaryFile.", &_init_ctor_QTemporaryFile_3219, &_call_ctor_QTemporaryFile_3219);
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":autoRemove", "@brief Method bool QTemporaryFile::autoRemove()\n", true, &_init_f_autoRemove_c0, &_call_f_autoRemove_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QTemporaryFile::fileName()\nThis is a reimplementation of QFile::fileName", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod (":fileTemplate", "@brief Method QString QTemporaryFile::fileTemplate()\n", true, &_init_f_fileTemplate_c0, &_call_f_fileTemplate_c0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method bool QTemporaryFile::open()\n", false, &_init_f_open_0, &_call_f_open_0);
  methods += new qt_gsi::GenericMethod ("setAutoRemove|autoRemove=", "@brief Method void QTemporaryFile::setAutoRemove(bool b)\n", false, &_init_f_setAutoRemove_864, &_call_f_setAutoRemove_864);
  methods += new qt_gsi::GenericMethod ("setFileTemplate|fileTemplate=", "@brief Method void QTemporaryFile::setFileTemplate(const QString &name)\n", false, &_init_f_setFileTemplate_2025, &_call_f_setFileTemplate_2025);
  methods += gsi::qt_signal ("aboutToClose()", "aboutToClose", "@brief Signal declaration for QTemporaryFile::aboutToClose()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64 > ("bytesWritten(qint64)", "bytesWritten", gsi::arg("bytes"), "@brief Signal declaration for QTemporaryFile::bytesWritten(qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QTemporaryFile::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QTemporaryFile::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readChannelFinished()", "readChannelFinished", "@brief Signal declaration for QTemporaryFile::readChannelFinished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readyRead()", "readyRead", "@brief Signal declaration for QTemporaryFile::readyRead()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("createLocalFile", "@brief Static method QTemporaryFile *QTemporaryFile::createLocalFile(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_createLocalFile_2025, &_call_f_createLocalFile_2025);
  methods += new qt_gsi::GenericStaticMethod ("createLocalFile", "@brief Static method QTemporaryFile *QTemporaryFile::createLocalFile(QFile &file)\nThis method is static and can be called without an instance.", &_init_f_createLocalFile_1083, &_call_f_createLocalFile_1083);
  methods += new qt_gsi::GenericStaticMethod ("createNativeFile", "@brief Static method QTemporaryFile *QTemporaryFile::createNativeFile(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_createNativeFile_2025, &_call_f_createNativeFile_2025);
  methods += new qt_gsi::GenericStaticMethod ("createNativeFile", "@brief Static method QTemporaryFile *QTemporaryFile::createNativeFile(QFile &file)\nThis method is static and can be called without an instance.", &_init_f_createNativeFile_1083, &_call_f_createNativeFile_1083);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTemporaryFile::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTemporaryFile::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QFile> &qtdecl_QFile ();

qt_gsi::QtNativeClass<QTemporaryFile> decl_QTemporaryFile (qtdecl_QFile (), "QtCore", "QTemporaryFile",
  methods_QTemporaryFile (),
  "@qt\n@brief Binding of QTemporaryFile");


GSI_QTCORE_PUBLIC gsi::Class<QTemporaryFile> &qtdecl_QTemporaryFile () { return decl_QTemporaryFile; }

}

