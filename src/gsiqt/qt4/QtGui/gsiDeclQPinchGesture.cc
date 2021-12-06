
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
*  @file gsiDeclQPinchGesture.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPinchGesture>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QPointF>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPinchGesture

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QPinchGesture::staticMetaObject);
}


// QPointF QPinchGesture::centerPoint()


static void _init_f_centerPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_centerPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QPinchGesture *)cls)->centerPoint ());
}


// QFlags<QPinchGesture::ChangeFlag> QPinchGesture::changeFlags()


static void _init_f_changeFlags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QPinchGesture::ChangeFlag> > ();
}

static void _call_f_changeFlags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QPinchGesture::ChangeFlag> > ((QFlags<QPinchGesture::ChangeFlag>)((QPinchGesture *)cls)->changeFlags ());
}


// QPointF QPinchGesture::lastCenterPoint()


static void _init_f_lastCenterPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastCenterPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QPinchGesture *)cls)->lastCenterPoint ());
}


// double QPinchGesture::lastRotationAngle()


static void _init_f_lastRotationAngle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lastRotationAngle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPinchGesture *)cls)->lastRotationAngle ());
}


// double QPinchGesture::lastScaleFactor()


static void _init_f_lastScaleFactor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lastScaleFactor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPinchGesture *)cls)->lastScaleFactor ());
}


// double QPinchGesture::rotationAngle()


static void _init_f_rotationAngle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rotationAngle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPinchGesture *)cls)->rotationAngle ());
}


// double QPinchGesture::scaleFactor()


static void _init_f_scaleFactor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_scaleFactor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPinchGesture *)cls)->scaleFactor ());
}


// void QPinchGesture::setCenterPoint(const QPointF &value)


static void _init_f_setCenterPoint_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCenterPoint_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setCenterPoint (arg1);
}


// void QPinchGesture::setChangeFlags(QFlags<QPinchGesture::ChangeFlag> value)


static void _init_f_setChangeFlags_3522 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<QFlags<QPinchGesture::ChangeFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChangeFlags_3522 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QPinchGesture::ChangeFlag> arg1 = gsi::arg_reader<QFlags<QPinchGesture::ChangeFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setChangeFlags (arg1);
}


// void QPinchGesture::setLastCenterPoint(const QPointF &value)


static void _init_f_setLastCenterPoint_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastCenterPoint_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setLastCenterPoint (arg1);
}


// void QPinchGesture::setLastRotationAngle(double value)


static void _init_f_setLastRotationAngle_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastRotationAngle_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setLastRotationAngle (arg1);
}


// void QPinchGesture::setLastScaleFactor(double value)


static void _init_f_setLastScaleFactor_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastScaleFactor_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setLastScaleFactor (arg1);
}


// void QPinchGesture::setRotationAngle(double value)


static void _init_f_setRotationAngle_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRotationAngle_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setRotationAngle (arg1);
}


// void QPinchGesture::setScaleFactor(double value)


static void _init_f_setScaleFactor_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScaleFactor_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setScaleFactor (arg1);
}


// void QPinchGesture::setStartCenterPoint(const QPointF &value)


static void _init_f_setStartCenterPoint_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStartCenterPoint_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setStartCenterPoint (arg1);
}


// void QPinchGesture::setTotalChangeFlags(QFlags<QPinchGesture::ChangeFlag> value)


static void _init_f_setTotalChangeFlags_3522 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<QFlags<QPinchGesture::ChangeFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTotalChangeFlags_3522 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QPinchGesture::ChangeFlag> arg1 = gsi::arg_reader<QFlags<QPinchGesture::ChangeFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setTotalChangeFlags (arg1);
}


// void QPinchGesture::setTotalRotationAngle(double value)


static void _init_f_setTotalRotationAngle_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTotalRotationAngle_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setTotalRotationAngle (arg1);
}


// void QPinchGesture::setTotalScaleFactor(double value)


static void _init_f_setTotalScaleFactor_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTotalScaleFactor_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture *)cls)->setTotalScaleFactor (arg1);
}


// QPointF QPinchGesture::startCenterPoint()


static void _init_f_startCenterPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_startCenterPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QPinchGesture *)cls)->startCenterPoint ());
}


// QFlags<QPinchGesture::ChangeFlag> QPinchGesture::totalChangeFlags()


static void _init_f_totalChangeFlags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QPinchGesture::ChangeFlag> > ();
}

static void _call_f_totalChangeFlags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QPinchGesture::ChangeFlag> > ((QFlags<QPinchGesture::ChangeFlag>)((QPinchGesture *)cls)->totalChangeFlags ());
}


// double QPinchGesture::totalRotationAngle()


static void _init_f_totalRotationAngle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_totalRotationAngle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPinchGesture *)cls)->totalRotationAngle ());
}


// double QPinchGesture::totalScaleFactor()


static void _init_f_totalScaleFactor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_totalScaleFactor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPinchGesture *)cls)->totalScaleFactor ());
}


// static QString QPinchGesture::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QPinchGesture::tr (arg1, arg2));
}


// static QString QPinchGesture::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QPinchGesture::tr (arg1, arg2, arg3));
}


// static QString QPinchGesture::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QPinchGesture::trUtf8 (arg1, arg2));
}


// static QString QPinchGesture::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QPinchGesture::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QPinchGesture () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":centerPoint", "@brief Method QPointF QPinchGesture::centerPoint()\n", true, &_init_f_centerPoint_c0, &_call_f_centerPoint_c0);
  methods += new qt_gsi::GenericMethod (":changeFlags", "@brief Method QFlags<QPinchGesture::ChangeFlag> QPinchGesture::changeFlags()\n", true, &_init_f_changeFlags_c0, &_call_f_changeFlags_c0);
  methods += new qt_gsi::GenericMethod (":lastCenterPoint", "@brief Method QPointF QPinchGesture::lastCenterPoint()\n", true, &_init_f_lastCenterPoint_c0, &_call_f_lastCenterPoint_c0);
  methods += new qt_gsi::GenericMethod (":lastRotationAngle", "@brief Method double QPinchGesture::lastRotationAngle()\n", true, &_init_f_lastRotationAngle_c0, &_call_f_lastRotationAngle_c0);
  methods += new qt_gsi::GenericMethod (":lastScaleFactor", "@brief Method double QPinchGesture::lastScaleFactor()\n", true, &_init_f_lastScaleFactor_c0, &_call_f_lastScaleFactor_c0);
  methods += new qt_gsi::GenericMethod (":rotationAngle", "@brief Method double QPinchGesture::rotationAngle()\n", true, &_init_f_rotationAngle_c0, &_call_f_rotationAngle_c0);
  methods += new qt_gsi::GenericMethod (":scaleFactor", "@brief Method double QPinchGesture::scaleFactor()\n", true, &_init_f_scaleFactor_c0, &_call_f_scaleFactor_c0);
  methods += new qt_gsi::GenericMethod ("setCenterPoint|centerPoint=", "@brief Method void QPinchGesture::setCenterPoint(const QPointF &value)\n", false, &_init_f_setCenterPoint_1986, &_call_f_setCenterPoint_1986);
  methods += new qt_gsi::GenericMethod ("setChangeFlags|changeFlags=", "@brief Method void QPinchGesture::setChangeFlags(QFlags<QPinchGesture::ChangeFlag> value)\n", false, &_init_f_setChangeFlags_3522, &_call_f_setChangeFlags_3522);
  methods += new qt_gsi::GenericMethod ("setLastCenterPoint|lastCenterPoint=", "@brief Method void QPinchGesture::setLastCenterPoint(const QPointF &value)\n", false, &_init_f_setLastCenterPoint_1986, &_call_f_setLastCenterPoint_1986);
  methods += new qt_gsi::GenericMethod ("setLastRotationAngle|lastRotationAngle=", "@brief Method void QPinchGesture::setLastRotationAngle(double value)\n", false, &_init_f_setLastRotationAngle_1071, &_call_f_setLastRotationAngle_1071);
  methods += new qt_gsi::GenericMethod ("setLastScaleFactor|lastScaleFactor=", "@brief Method void QPinchGesture::setLastScaleFactor(double value)\n", false, &_init_f_setLastScaleFactor_1071, &_call_f_setLastScaleFactor_1071);
  methods += new qt_gsi::GenericMethod ("setRotationAngle|rotationAngle=", "@brief Method void QPinchGesture::setRotationAngle(double value)\n", false, &_init_f_setRotationAngle_1071, &_call_f_setRotationAngle_1071);
  methods += new qt_gsi::GenericMethod ("setScaleFactor|scaleFactor=", "@brief Method void QPinchGesture::setScaleFactor(double value)\n", false, &_init_f_setScaleFactor_1071, &_call_f_setScaleFactor_1071);
  methods += new qt_gsi::GenericMethod ("setStartCenterPoint|startCenterPoint=", "@brief Method void QPinchGesture::setStartCenterPoint(const QPointF &value)\n", false, &_init_f_setStartCenterPoint_1986, &_call_f_setStartCenterPoint_1986);
  methods += new qt_gsi::GenericMethod ("setTotalChangeFlags|totalChangeFlags=", "@brief Method void QPinchGesture::setTotalChangeFlags(QFlags<QPinchGesture::ChangeFlag> value)\n", false, &_init_f_setTotalChangeFlags_3522, &_call_f_setTotalChangeFlags_3522);
  methods += new qt_gsi::GenericMethod ("setTotalRotationAngle|totalRotationAngle=", "@brief Method void QPinchGesture::setTotalRotationAngle(double value)\n", false, &_init_f_setTotalRotationAngle_1071, &_call_f_setTotalRotationAngle_1071);
  methods += new qt_gsi::GenericMethod ("setTotalScaleFactor|totalScaleFactor=", "@brief Method void QPinchGesture::setTotalScaleFactor(double value)\n", false, &_init_f_setTotalScaleFactor_1071, &_call_f_setTotalScaleFactor_1071);
  methods += new qt_gsi::GenericMethod (":startCenterPoint", "@brief Method QPointF QPinchGesture::startCenterPoint()\n", true, &_init_f_startCenterPoint_c0, &_call_f_startCenterPoint_c0);
  methods += new qt_gsi::GenericMethod (":totalChangeFlags", "@brief Method QFlags<QPinchGesture::ChangeFlag> QPinchGesture::totalChangeFlags()\n", true, &_init_f_totalChangeFlags_c0, &_call_f_totalChangeFlags_c0);
  methods += new qt_gsi::GenericMethod (":totalRotationAngle", "@brief Method double QPinchGesture::totalRotationAngle()\n", true, &_init_f_totalRotationAngle_c0, &_call_f_totalRotationAngle_c0);
  methods += new qt_gsi::GenericMethod (":totalScaleFactor", "@brief Method double QPinchGesture::totalScaleFactor()\n", true, &_init_f_totalScaleFactor_c0, &_call_f_totalScaleFactor_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QPinchGesture::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPinchGesture::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPinchGesture::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QPinchGesture::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QPinchGesture::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QGesture> &qtdecl_QGesture ();

qt_gsi::QtNativeClass<QPinchGesture> decl_QPinchGesture (qtdecl_QGesture (), "QtGui", "QPinchGesture_Native",
  methods_QPinchGesture (),
  "@hide\n@alias QPinchGesture");

GSI_QTGUI_PUBLIC gsi::Class<QPinchGesture> &qtdecl_QPinchGesture () { return decl_QPinchGesture; }

}


class QPinchGesture_Adaptor : public QPinchGesture, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPinchGesture_Adaptor();

  //  [adaptor ctor] QPinchGesture::QPinchGesture(QObject *parent)
  QPinchGesture_Adaptor() : QPinchGesture()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPinchGesture::QPinchGesture(QObject *parent)
  QPinchGesture_Adaptor(QObject *parent) : QPinchGesture(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QPinchGesture::receivers(const char *signal)
  int fp_QPinchGesture_receivers_c1731 (const char *signal) const {
    return QPinchGesture::receivers(signal);
  }

  //  [expose] QObject *QPinchGesture::sender()
  QObject * fp_QPinchGesture_sender_c0 () const {
    return QPinchGesture::sender();
  }

  //  [adaptor impl] bool QPinchGesture::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QPinchGesture::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QPinchGesture_Adaptor, bool, QEvent *>(&QPinchGesture_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QPinchGesture::event(arg1);
    }
  }

  //  [adaptor impl] bool QPinchGesture::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QPinchGesture::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QPinchGesture_Adaptor, bool, QObject *, QEvent *>(&QPinchGesture_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QPinchGesture::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QPinchGesture::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QPinchGesture::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QPinchGesture_Adaptor, QChildEvent *>(&QPinchGesture_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QPinchGesture::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QPinchGesture::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QPinchGesture::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QPinchGesture_Adaptor, QEvent *>(&QPinchGesture_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QPinchGesture::customEvent(arg1);
    }
  }

  //  [emitter impl] void QPinchGesture::destroyed(QObject *)
  void emitter_QPinchGesture_destroyed_1302(QObject *arg1)
  {
    emit QPinchGesture::destroyed(arg1);
  }

  //  [adaptor impl] void QPinchGesture::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QPinchGesture::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QPinchGesture_Adaptor, const char *>(&QPinchGesture_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QPinchGesture::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QPinchGesture::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QPinchGesture::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QPinchGesture_Adaptor, QTimerEvent *>(&QPinchGesture_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QPinchGesture::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QPinchGesture_Adaptor::~QPinchGesture_Adaptor() { }

//  Constructor QPinchGesture::QPinchGesture(QObject *parent) (adaptor class)

static void _init_ctor_QPinchGesture_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QPinchGesture_Adaptor> ();
}

static void _call_ctor_QPinchGesture_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QPinchGesture_Adaptor *> (new QPinchGesture_Adaptor (arg1));
}


// void QPinchGesture::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QPinchGesture_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QPinchGesture::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPinchGesture_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QPinchGesture::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QPinchGesture_Adaptor *)cls)->emitter_QPinchGesture_destroyed_1302 (arg1);
}


// void QPinchGesture::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QPinchGesture_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QPinchGesture::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QPinchGesture_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPinchGesture_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QPinchGesture::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QPinchGesture_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QPinchGesture_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QPinchGesture::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QPinchGesture_Adaptor *)cls)->fp_QPinchGesture_receivers_c1731 (arg1));
}


// exposed QObject *QPinchGesture::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QPinchGesture_Adaptor *)cls)->fp_QPinchGesture_sender_c0 ());
}


// void QPinchGesture::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPinchGesture_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QPinchGesture_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QPinchGesture> &qtdecl_QPinchGesture ();

static gsi::Methods methods_QPinchGesture_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPinchGesture::QPinchGesture(QObject *parent)\nThis method creates an object of class QPinchGesture.", &_init_ctor_QPinchGesture_Adaptor_1302, &_call_ctor_QPinchGesture_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QPinchGesture::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QPinchGesture::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QPinchGesture::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QPinchGesture::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QPinchGesture::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QPinchGesture::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QPinchGesture::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QPinchGesture::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QPinchGesture::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QPinchGesture_Adaptor> decl_QPinchGesture_Adaptor (qtdecl_QPinchGesture (), "QtGui", "QPinchGesture",
  methods_QPinchGesture_Adaptor (),
  "@qt\n@brief Binding of QPinchGesture");

}


//  Implementation of the enum wrapper class for QPinchGesture::ChangeFlag
namespace qt_gsi
{

static gsi::Enum<QPinchGesture::ChangeFlag> decl_QPinchGesture_ChangeFlag_Enum ("QtGui", "QPinchGesture_ChangeFlag",
    gsi::enum_const ("ScaleFactorChanged", QPinchGesture::ScaleFactorChanged, "@brief Enum constant QPinchGesture::ScaleFactorChanged") +
    gsi::enum_const ("RotationAngleChanged", QPinchGesture::RotationAngleChanged, "@brief Enum constant QPinchGesture::RotationAngleChanged") +
    gsi::enum_const ("CenterPointChanged", QPinchGesture::CenterPointChanged, "@brief Enum constant QPinchGesture::CenterPointChanged"),
  "@qt\n@brief This class represents the QPinchGesture::ChangeFlag enum");

static gsi::QFlagsClass<QPinchGesture::ChangeFlag > decl_QPinchGesture_ChangeFlag_Enums ("QtGui", "QPinchGesture_QFlags_ChangeFlag",
  "@qt\n@brief This class represents the QFlags<QPinchGesture::ChangeFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPinchGesture> inject_QPinchGesture_ChangeFlag_Enum_in_parent (decl_QPinchGesture_ChangeFlag_Enum.defs ());
static gsi::ClassExt<QPinchGesture> decl_QPinchGesture_ChangeFlag_Enum_as_child (decl_QPinchGesture_ChangeFlag_Enum, "ChangeFlag");
static gsi::ClassExt<QPinchGesture> decl_QPinchGesture_ChangeFlag_Enums_as_child (decl_QPinchGesture_ChangeFlag_Enums, "QFlags_ChangeFlag");

}

