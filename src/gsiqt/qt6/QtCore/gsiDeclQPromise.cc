
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
*  @file gsiDeclQPromise.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPromise>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPromise

//  Constructor QPromise::QPromise()


static void _init_ctor_QPromise_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPromise> ();
}

static void _call_ctor_QPromise_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPromise *> (new QPromise ());
}


//  Constructor QPromise::QPromise(const QPromise &)


static void _init_ctor_QPromise_2129 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPromise & > (argspec_0);
  decl->set_return_new<QPromise> ();
}

static void _call_ctor_QPromise_2129 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPromise &arg1 = gsi::arg_reader<const QPromise & >() (args, heap);
  ret.write<QPromise *> (new QPromise (arg1));
}


//  Constructor QPromise::QPromise(const QFutureInterface<T> &other)


static void _init_ctor_QPromise_3148 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QFutureInterface<T> & > (argspec_0);
  decl->set_return_new<QPromise> ();
}

static void _call_ctor_QPromise_3148 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFutureInterface<T> &arg1 = gsi::arg_reader<const QFutureInterface<T> & >() (args, heap);
  ret.write<QPromise *> (new QPromise (arg1));
}


// void QPromise::finish()


static void _init_f_finish_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_finish_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->finish ();
}


// QFuture<T> QPromise::future()


static void _init_f_future_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFuture<T> > ();
}

static void _call_f_future_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFuture<T> > ((QFuture<T>)((QPromise *)cls)->future ());
}


// bool QPromise::isCanceled()


static void _init_f_isCanceled_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCanceled_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPromise *)cls)->isCanceled ());
}


// QPromise &QPromise::operator=(const QPromise &)


static void _init_f_operator_eq__2129 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPromise & > (argspec_0);
  decl->set_return<QPromise & > ();
}

static void _call_f_operator_eq__2129 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPromise &arg1 = gsi::arg_reader<const QPromise & >() (args, heap);
  ret.write<QPromise & > ((QPromise &)((QPromise *)cls)->operator= (arg1));
}


// void QPromise::setException(const QException &e)


static void _init_f_setException_2337 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<const QException & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setException_2337 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QException &arg1 = gsi::arg_reader<const QException & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->setException (arg1);
}


// void QPromise::setException(std::exception_ptr e)


static void _init_f_setException_2295 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<std::exception_ptr > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setException_2295 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  std::exception_ptr arg1 = gsi::arg_reader<std::exception_ptr >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->setException (arg1);
}


// void QPromise::setProgressRange(int minimum, int maximum)


static void _init_f_setProgressRange_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("minimum");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("maximum");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setProgressRange_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->setProgressRange (arg1, arg2);
}


// void QPromise::setProgressValue(int progressValue)


static void _init_f_setProgressValue_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("progressValue");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setProgressValue_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->setProgressValue (arg1);
}


// void QPromise::setProgressValueAndText(int progressValue, const QString &progressText)


static void _init_f_setProgressValueAndText_2684 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("progressValue");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("progressText");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setProgressValueAndText_2684 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->setProgressValueAndText (arg1, arg2);
}


// void QPromise::start()


static void _init_f_start_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_start_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->start ();
}


// void QPromise::suspendIfRequested()


static void _init_f_suspendIfRequested_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_suspendIfRequested_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->suspendIfRequested ();
}


// void QPromise::swap(QPromise<T> &other)


static void _init_f_swap_1640 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QPromise<T> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1640 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPromise<T> &arg1 = gsi::arg_reader<QPromise<T> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPromise *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QPromise () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPromise::QPromise()\nThis method creates an object of class QPromise.", &_init_ctor_QPromise_0, &_call_ctor_QPromise_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPromise::QPromise(const QPromise &)\nThis method creates an object of class QPromise.", &_init_ctor_QPromise_2129, &_call_ctor_QPromise_2129);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPromise::QPromise(const QFutureInterface<T> &other)\nThis method creates an object of class QPromise.", &_init_ctor_QPromise_3148, &_call_ctor_QPromise_3148);
  methods += new qt_gsi::GenericMethod ("finish", "@brief Method void QPromise::finish()\n", false, &_init_f_finish_0, &_call_f_finish_0);
  methods += new qt_gsi::GenericMethod ("future", "@brief Method QFuture<T> QPromise::future()\n", true, &_init_f_future_c0, &_call_f_future_c0);
  methods += new qt_gsi::GenericMethod ("isCanceled?", "@brief Method bool QPromise::isCanceled()\n", true, &_init_f_isCanceled_c0, &_call_f_isCanceled_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QPromise &QPromise::operator=(const QPromise &)\n", false, &_init_f_operator_eq__2129, &_call_f_operator_eq__2129);
  methods += new qt_gsi::GenericMethod ("setException", "@brief Method void QPromise::setException(const QException &e)\n", false, &_init_f_setException_2337, &_call_f_setException_2337);
  methods += new qt_gsi::GenericMethod ("setException", "@brief Method void QPromise::setException(std::exception_ptr e)\n", false, &_init_f_setException_2295, &_call_f_setException_2295);
  methods += new qt_gsi::GenericMethod ("setProgressRange", "@brief Method void QPromise::setProgressRange(int minimum, int maximum)\n", false, &_init_f_setProgressRange_1426, &_call_f_setProgressRange_1426);
  methods += new qt_gsi::GenericMethod ("setProgressValue", "@brief Method void QPromise::setProgressValue(int progressValue)\n", false, &_init_f_setProgressValue_767, &_call_f_setProgressValue_767);
  methods += new qt_gsi::GenericMethod ("setProgressValueAndText", "@brief Method void QPromise::setProgressValueAndText(int progressValue, const QString &progressText)\n", false, &_init_f_setProgressValueAndText_2684, &_call_f_setProgressValueAndText_2684);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QPromise::start()\n", false, &_init_f_start_0, &_call_f_start_0);
  methods += new qt_gsi::GenericMethod ("suspendIfRequested", "@brief Method void QPromise::suspendIfRequested()\n", false, &_init_f_suspendIfRequested_0, &_call_f_suspendIfRequested_0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QPromise::swap(QPromise<T> &other)\n", false, &_init_f_swap_1640, &_call_f_swap_1640);
  return methods;
}

gsi::Class<QPromise> decl_QPromise ("QtCore", "QPromise",
  methods_QPromise (),
  "@qt\n@brief Binding of QPromise");


GSI_QTCORE_PUBLIC gsi::Class<QPromise> &qtdecl_QPromise () { return decl_QPromise; }

}

