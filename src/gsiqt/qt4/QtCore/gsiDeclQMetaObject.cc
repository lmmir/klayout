
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

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
*  @file gsiDeclQMetaObject.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaObject>
#include <QMetaClassInfo>
#include <QMetaEnum>
#include <QMetaMethod>
#include <QMetaProperty>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMetaObject

//  Constructor QMetaObject::QMetaObject()


static void _init_ctor_QMetaObject_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaObject> ();
}

static void _call_ctor_QMetaObject_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaObject *> (new QMetaObject ());
}


// QMetaClassInfo QMetaObject::classInfo(int index)


static void _init_f_classInfo_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QMetaClassInfo > ();
}

static void _call_f_classInfo_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QMetaClassInfo > ((QMetaClassInfo)((QMetaObject *)cls)->classInfo (arg1));
}


// int QMetaObject::classInfoCount()


static void _init_f_classInfoCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_classInfoCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->classInfoCount ());
}


// int QMetaObject::classInfoOffset()


static void _init_f_classInfoOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_classInfoOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->classInfoOffset ());
}


// const char *QMetaObject::className()


static void _init_f_className_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_className_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaObject *)cls)->className ());
}


// QMetaMethod QMetaObject::constructor(int index)


static void _init_f_constructor_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QMetaMethod > ();
}

static void _call_f_constructor_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QMetaMethod > ((QMetaMethod)((QMetaObject *)cls)->constructor (arg1));
}


// int QMetaObject::constructorCount()


static void _init_f_constructorCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_constructorCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->constructorCount ());
}


// QMetaEnum QMetaObject::enumerator(int index)


static void _init_f_enumerator_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QMetaEnum > ();
}

static void _call_f_enumerator_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QMetaEnum > ((QMetaEnum)((QMetaObject *)cls)->enumerator (arg1));
}


// int QMetaObject::enumeratorCount()


static void _init_f_enumeratorCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_enumeratorCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->enumeratorCount ());
}


// int QMetaObject::enumeratorOffset()


static void _init_f_enumeratorOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_enumeratorOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->enumeratorOffset ());
}


// int QMetaObject::indexOfClassInfo(const char *name)


static void _init_f_indexOfClassInfo_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfClassInfo_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfClassInfo (arg1));
}


// int QMetaObject::indexOfConstructor(const char *constructor)


static void _init_f_indexOfConstructor_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("constructor");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfConstructor_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfConstructor (arg1));
}


// int QMetaObject::indexOfEnumerator(const char *name)


static void _init_f_indexOfEnumerator_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfEnumerator_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfEnumerator (arg1));
}


// int QMetaObject::indexOfMethod(const char *method)


static void _init_f_indexOfMethod_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("method");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfMethod_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfMethod (arg1));
}


// int QMetaObject::indexOfProperty(const char *name)


static void _init_f_indexOfProperty_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfProperty_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfProperty (arg1));
}


// int QMetaObject::indexOfSignal(const char *signal)


static void _init_f_indexOfSignal_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfSignal_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfSignal (arg1));
}


// int QMetaObject::indexOfSlot(const char *slot)


static void _init_f_indexOfSlot_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("slot");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_indexOfSlot_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMetaObject *)cls)->indexOfSlot (arg1));
}


// QMetaMethod QMetaObject::method(int index)


static void _init_f_method_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QMetaMethod > ();
}

static void _call_f_method_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QMetaMethod > ((QMetaMethod)((QMetaObject *)cls)->method (arg1));
}


// int QMetaObject::methodCount()


static void _init_f_methodCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_methodCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->methodCount ());
}


// int QMetaObject::methodOffset()


static void _init_f_methodOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_methodOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->methodOffset ());
}


// QMetaProperty QMetaObject::property(int index)


static void _init_f_property_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QMetaProperty > ();
}

static void _call_f_property_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QMetaProperty > ((QMetaProperty)((QMetaObject *)cls)->property (arg1));
}


// int QMetaObject::propertyCount()


static void _init_f_propertyCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_propertyCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->propertyCount ());
}


// int QMetaObject::propertyOffset()


static void _init_f_propertyOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_propertyOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaObject *)cls)->propertyOffset ());
}


// const QMetaObject *QMetaObject::superClass()


static void _init_f_superClass_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMetaObject * > ();
}

static void _call_f_superClass_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMetaObject * > ((const QMetaObject *)((QMetaObject *)cls)->superClass ());
}


// QString QMetaObject::tr(const char *s, const char *c)


static void _init_f_tr_c3354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_c3354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QString > ((QString)((QMetaObject *)cls)->tr (arg1, arg2));
}


// QString QMetaObject::tr(const char *s, const char *c, int n)


static void _init_f_tr_c4013 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_c4013 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QMetaObject *)cls)->tr (arg1, arg2, arg3));
}


// QString QMetaObject::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_c3354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_c3354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QString > ((QString)((QMetaObject *)cls)->trUtf8 (arg1, arg2));
}


// QString QMetaObject::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_c4013 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_c4013 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QMetaObject *)cls)->trUtf8 (arg1, arg2, arg3));
}


// QMetaProperty QMetaObject::userProperty()


static void _init_f_userProperty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMetaProperty > ();
}

static void _call_f_userProperty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaProperty > ((QMetaProperty)((QMetaObject *)cls)->userProperty ());
}


// static bool QMetaObject::checkConnectArgs(const char *signal, const char *method)


static void _init_f_checkConnectArgs_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("method");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_checkConnectArgs_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<bool > ((bool)QMetaObject::checkConnectArgs (arg1, arg2));
}


// static bool QMetaObject::connect(const QObject *sender, int signal_index, const QObject *receiver, int method_index, int type, int *types)


static void _init_f_connect_6708 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<const QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("signal_index");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("receiver");
  decl->add_arg<const QObject * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("method_index");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("type", true, "0");
  decl->add_arg<int > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("types", true, "0");
  decl->add_arg<int * > (argspec_5);
  decl->set_return<bool > ();
}

static void _call_f_connect_6708 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = gsi::arg_reader<const QObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QObject *arg3 = gsi::arg_reader<const QObject * >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  int arg5 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  int *arg6 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (0, heap);
  ret.write<bool > ((bool)QMetaObject::connect (arg1, arg2, arg3, arg4, arg5, arg6));
}


// static void QMetaObject::connectSlotsByName(QObject *o)


static void _init_f_connectSlotsByName_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_connectSlotsByName_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QMetaObject::connectSlotsByName (arg1);
}


// static bool QMetaObject::disconnect(const QObject *sender, int signal_index, const QObject *receiver, int method_index)


static void _init_f_disconnect_5204 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<const QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("signal_index");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("receiver");
  decl->add_arg<const QObject * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("method_index");
  decl->add_arg<int > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_disconnect_5204 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = gsi::arg_reader<const QObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QObject *arg3 = gsi::arg_reader<const QObject * >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)QMetaObject::disconnect (arg1, arg2, arg3, arg4));
}


// static bool QMetaObject::disconnectOne(const QObject *sender, int signal_index, const QObject *receiver, int method_index)


static void _init_f_disconnectOne_5204 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sender");
  decl->add_arg<const QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("signal_index");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("receiver");
  decl->add_arg<const QObject * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("method_index");
  decl->add_arg<int > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_disconnectOne_5204 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QObject *arg1 = gsi::arg_reader<const QObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QObject *arg3 = gsi::arg_reader<const QObject * >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)QMetaObject::disconnectOne (arg1, arg2, arg3, arg4));
}


// static QByteArray QMetaObject::normalizedSignature(const char *method)


static void _init_f_normalizedSignature_1731 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("method");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_normalizedSignature_1731 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QMetaObject::normalizedSignature (arg1));
}


// static QByteArray QMetaObject::normalizedType(const char *type)


static void _init_f_normalizedType_1731 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_normalizedType_1731 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QMetaObject::normalizedType (arg1));
}



namespace gsi
{

static gsi::Methods methods_QMetaObject () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaObject::QMetaObject()\nThis method creates an object of class QMetaObject.", &_init_ctor_QMetaObject_0, &_call_ctor_QMetaObject_0);
  methods += new qt_gsi::GenericMethod ("classInfo", "@brief Method QMetaClassInfo QMetaObject::classInfo(int index)\n", true, &_init_f_classInfo_c767, &_call_f_classInfo_c767);
  methods += new qt_gsi::GenericMethod ("classInfoCount", "@brief Method int QMetaObject::classInfoCount()\n", true, &_init_f_classInfoCount_c0, &_call_f_classInfoCount_c0);
  methods += new qt_gsi::GenericMethod ("classInfoOffset", "@brief Method int QMetaObject::classInfoOffset()\n", true, &_init_f_classInfoOffset_c0, &_call_f_classInfoOffset_c0);
  methods += new qt_gsi::GenericMethod ("className", "@brief Method const char *QMetaObject::className()\n", true, &_init_f_className_c0, &_call_f_className_c0);
  methods += new qt_gsi::GenericMethod ("constructor", "@brief Method QMetaMethod QMetaObject::constructor(int index)\n", true, &_init_f_constructor_c767, &_call_f_constructor_c767);
  methods += new qt_gsi::GenericMethod ("constructorCount", "@brief Method int QMetaObject::constructorCount()\n", true, &_init_f_constructorCount_c0, &_call_f_constructorCount_c0);
  methods += new qt_gsi::GenericMethod ("enumerator", "@brief Method QMetaEnum QMetaObject::enumerator(int index)\n", true, &_init_f_enumerator_c767, &_call_f_enumerator_c767);
  methods += new qt_gsi::GenericMethod ("enumeratorCount", "@brief Method int QMetaObject::enumeratorCount()\n", true, &_init_f_enumeratorCount_c0, &_call_f_enumeratorCount_c0);
  methods += new qt_gsi::GenericMethod ("enumeratorOffset", "@brief Method int QMetaObject::enumeratorOffset()\n", true, &_init_f_enumeratorOffset_c0, &_call_f_enumeratorOffset_c0);
  methods += new qt_gsi::GenericMethod ("indexOfClassInfo", "@brief Method int QMetaObject::indexOfClassInfo(const char *name)\n", true, &_init_f_indexOfClassInfo_c1731, &_call_f_indexOfClassInfo_c1731);
  methods += new qt_gsi::GenericMethod ("indexOfConstructor", "@brief Method int QMetaObject::indexOfConstructor(const char *constructor)\n", true, &_init_f_indexOfConstructor_c1731, &_call_f_indexOfConstructor_c1731);
  methods += new qt_gsi::GenericMethod ("indexOfEnumerator", "@brief Method int QMetaObject::indexOfEnumerator(const char *name)\n", true, &_init_f_indexOfEnumerator_c1731, &_call_f_indexOfEnumerator_c1731);
  methods += new qt_gsi::GenericMethod ("indexOfMethod", "@brief Method int QMetaObject::indexOfMethod(const char *method)\n", true, &_init_f_indexOfMethod_c1731, &_call_f_indexOfMethod_c1731);
  methods += new qt_gsi::GenericMethod ("indexOfProperty", "@brief Method int QMetaObject::indexOfProperty(const char *name)\n", true, &_init_f_indexOfProperty_c1731, &_call_f_indexOfProperty_c1731);
  methods += new qt_gsi::GenericMethod ("indexOfSignal", "@brief Method int QMetaObject::indexOfSignal(const char *signal)\n", true, &_init_f_indexOfSignal_c1731, &_call_f_indexOfSignal_c1731);
  methods += new qt_gsi::GenericMethod ("indexOfSlot", "@brief Method int QMetaObject::indexOfSlot(const char *slot)\n", true, &_init_f_indexOfSlot_c1731, &_call_f_indexOfSlot_c1731);
  methods += new qt_gsi::GenericMethod ("method", "@brief Method QMetaMethod QMetaObject::method(int index)\n", true, &_init_f_method_c767, &_call_f_method_c767);
  methods += new qt_gsi::GenericMethod ("methodCount", "@brief Method int QMetaObject::methodCount()\n", true, &_init_f_methodCount_c0, &_call_f_methodCount_c0);
  methods += new qt_gsi::GenericMethod ("methodOffset", "@brief Method int QMetaObject::methodOffset()\n", true, &_init_f_methodOffset_c0, &_call_f_methodOffset_c0);
  methods += new qt_gsi::GenericMethod ("property", "@brief Method QMetaProperty QMetaObject::property(int index)\n", true, &_init_f_property_c767, &_call_f_property_c767);
  methods += new qt_gsi::GenericMethod ("propertyCount", "@brief Method int QMetaObject::propertyCount()\n", true, &_init_f_propertyCount_c0, &_call_f_propertyCount_c0);
  methods += new qt_gsi::GenericMethod ("propertyOffset", "@brief Method int QMetaObject::propertyOffset()\n", true, &_init_f_propertyOffset_c0, &_call_f_propertyOffset_c0);
  methods += new qt_gsi::GenericMethod ("superClass", "@brief Method const QMetaObject *QMetaObject::superClass()\n", true, &_init_f_superClass_c0, &_call_f_superClass_c0);
  methods += new qt_gsi::GenericMethod ("tr", "@brief Method QString QMetaObject::tr(const char *s, const char *c)\n", true, &_init_f_tr_c3354, &_call_f_tr_c3354);
  methods += new qt_gsi::GenericMethod ("tr", "@brief Method QString QMetaObject::tr(const char *s, const char *c, int n)\n", true, &_init_f_tr_c4013, &_call_f_tr_c4013);
  methods += new qt_gsi::GenericMethod ("trUtf8", "@brief Method QString QMetaObject::trUtf8(const char *s, const char *c)\n", true, &_init_f_trUtf8_c3354, &_call_f_trUtf8_c3354);
  methods += new qt_gsi::GenericMethod ("trUtf8", "@brief Method QString QMetaObject::trUtf8(const char *s, const char *c, int n)\n", true, &_init_f_trUtf8_c4013, &_call_f_trUtf8_c4013);
  methods += new qt_gsi::GenericMethod ("userProperty", "@brief Method QMetaProperty QMetaObject::userProperty()\n", true, &_init_f_userProperty_c0, &_call_f_userProperty_c0);
  methods += new qt_gsi::GenericStaticMethod ("checkConnectArgs", "@brief Static method bool QMetaObject::checkConnectArgs(const char *signal, const char *method)\nThis method is static and can be called without an instance.", &_init_f_checkConnectArgs_3354, &_call_f_checkConnectArgs_3354);
  methods += new qt_gsi::GenericStaticMethod ("connect", "@brief Static method bool QMetaObject::connect(const QObject *sender, int signal_index, const QObject *receiver, int method_index, int type, int *types)\nThis method is static and can be called without an instance.", &_init_f_connect_6708, &_call_f_connect_6708);
  methods += new qt_gsi::GenericStaticMethod ("connectSlotsByName", "@brief Static method void QMetaObject::connectSlotsByName(QObject *o)\nThis method is static and can be called without an instance.", &_init_f_connectSlotsByName_1302, &_call_f_connectSlotsByName_1302);
  methods += new qt_gsi::GenericStaticMethod ("disconnect", "@brief Static method bool QMetaObject::disconnect(const QObject *sender, int signal_index, const QObject *receiver, int method_index)\nThis method is static and can be called without an instance.", &_init_f_disconnect_5204, &_call_f_disconnect_5204);
  methods += new qt_gsi::GenericStaticMethod ("disconnectOne", "@brief Static method bool QMetaObject::disconnectOne(const QObject *sender, int signal_index, const QObject *receiver, int method_index)\nThis method is static and can be called without an instance.", &_init_f_disconnectOne_5204, &_call_f_disconnectOne_5204);
  methods += new qt_gsi::GenericStaticMethod ("normalizedSignature", "@brief Static method QByteArray QMetaObject::normalizedSignature(const char *method)\nThis method is static and can be called without an instance.", &_init_f_normalizedSignature_1731, &_call_f_normalizedSignature_1731);
  methods += new qt_gsi::GenericStaticMethod ("normalizedType", "@brief Static method QByteArray QMetaObject::normalizedType(const char *type)\nThis method is static and can be called without an instance.", &_init_f_normalizedType_1731, &_call_f_normalizedType_1731);
  return methods;
}

gsi::Class<QMetaObject> decl_QMetaObject ("QtCore", "QMetaObject",
  methods_QMetaObject (),
  "@qt\n@brief Binding of QMetaObject");


GSI_QTCORE_PUBLIC gsi::Class<QMetaObject> &qtdecl_QMetaObject () { return decl_QMetaObject; }

}

