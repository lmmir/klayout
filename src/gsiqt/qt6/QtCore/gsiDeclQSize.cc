
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
*  @file gsiDeclQSize.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSize>
#include <QMargins>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSize

//  Constructor QSize::QSize()


static void _init_ctor_QSize_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSize> ();
}

static void _call_ctor_QSize_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize *> (new QSize ());
}


//  Constructor QSize::QSize(int w, int h)


static void _init_ctor_QSize_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QSize> ();
}

static void _call_ctor_QSize_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QSize *> (new QSize (arg1, arg2));
}


// QSize QSize::boundedTo(const QSize &)


static void _init_f_boundedTo_c1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<QSize > ();
}

static void _call_f_boundedTo_c1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  ret.write<QSize > ((QSize)((QSize *)cls)->boundedTo (arg1));
}


// QSize QSize::expandedTo(const QSize &)


static void _init_f_expandedTo_c1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<QSize > ();
}

static void _call_f_expandedTo_c1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  ret.write<QSize > ((QSize)((QSize *)cls)->expandedTo (arg1));
}


// QSize QSize::grownBy(QMargins m)


static void _init_f_grownBy_c1238 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("m");
  decl->add_arg<QMargins > (argspec_0);
  decl->set_return<QSize > ();
}

static void _call_f_grownBy_c1238 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMargins arg1 = gsi::arg_reader<QMargins >() (args, heap);
  ret.write<QSize > ((QSize)((QSize *)cls)->grownBy (arg1));
}


// int QSize::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSize *)cls)->height ());
}


// bool QSize::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSize *)cls)->isEmpty ());
}


// bool QSize::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSize *)cls)->isNull ());
}


// bool QSize::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSize *)cls)->isValid ());
}


// QSize &QSize::operator*=(double c)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QSize & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QSize & > ((QSize &)((QSize *)cls)->operator*= (arg1));
}


// QSize &QSize::operator+=(const QSize &)


static void _init_f_operator_plus__eq__1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<QSize & > ();
}

static void _call_f_operator_plus__eq__1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  ret.write<QSize & > ((QSize &)((QSize *)cls)->operator+= (arg1));
}


// QSize &QSize::operator-=(const QSize &)


static void _init_f_operator_minus__eq__1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<QSize & > ();
}

static void _call_f_operator_minus__eq__1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  ret.write<QSize & > ((QSize &)((QSize *)cls)->operator-= (arg1));
}


// QSize &QSize::operator/=(double c)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QSize & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QSize & > ((QSize &)((QSize *)cls)->operator/= (arg1));
}


// int &QSize::rheight()


static void _init_f_rheight_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int & > ();
}

static void _call_f_rheight_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int & > ((int &)((QSize *)cls)->rheight ());
}


// int &QSize::rwidth()


static void _init_f_rwidth_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int & > ();
}

static void _call_f_rwidth_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int & > ((int &)((QSize *)cls)->rwidth ());
}


// void QSize::scale(int w, int h, Qt::AspectRatioMode mode)


static void _init_f_scale_3575 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_scale_3575 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & arg3 = gsi::arg_reader<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSize *)cls)->scale (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::AspectRatioMode>(arg3).cref());
}


// void QSize::scale(const QSize &s, Qt::AspectRatioMode mode)


static void _init_f_scale_3954 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_scale_3954 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSize *)cls)->scale (arg1, qt_gsi::QtToCppAdaptor<Qt::AspectRatioMode>(arg2).cref());
}


// QSize QSize::scaled(int w, int h, Qt::AspectRatioMode mode)


static void _init_f_scaled_c3575 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & > (argspec_2);
  decl->set_return<QSize > ();
}

static void _call_f_scaled_c3575 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & arg3 = gsi::arg_reader<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & >() (args, heap);
  ret.write<QSize > ((QSize)((QSize *)cls)->scaled (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::AspectRatioMode>(arg3).cref()));
}


// QSize QSize::scaled(const QSize &s, Qt::AspectRatioMode mode)


static void _init_f_scaled_c3954 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & > (argspec_1);
  decl->set_return<QSize > ();
}

static void _call_f_scaled_c3954 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & >() (args, heap);
  ret.write<QSize > ((QSize)((QSize *)cls)->scaled (arg1, qt_gsi::QtToCppAdaptor<Qt::AspectRatioMode>(arg2).cref()));
}


// void QSize::setHeight(int h)


static void _init_f_setHeight_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("h");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHeight_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSize *)cls)->setHeight (arg1);
}


// void QSize::setWidth(int w)


static void _init_f_setWidth_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSize *)cls)->setWidth (arg1);
}


// QSize QSize::shrunkBy(QMargins m)


static void _init_f_shrunkBy_c1238 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("m");
  decl->add_arg<QMargins > (argspec_0);
  decl->set_return<QSize > ();
}

static void _call_f_shrunkBy_c1238 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMargins arg1 = gsi::arg_reader<QMargins >() (args, heap);
  ret.write<QSize > ((QSize)((QSize *)cls)->shrunkBy (arg1));
}


// void QSize::transpose()


static void _init_f_transpose_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_transpose_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSize *)cls)->transpose ();
}


// QSize QSize::transposed()


static void _init_f_transposed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_transposed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QSize *)cls)->transposed ());
}


// int QSize::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSize *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QSize () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSize::QSize()\nThis method creates an object of class QSize.", &_init_ctor_QSize_0, &_call_ctor_QSize_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSize::QSize(int w, int h)\nThis method creates an object of class QSize.", &_init_ctor_QSize_1426, &_call_ctor_QSize_1426);
  methods += new qt_gsi::GenericMethod ("boundedTo", "@brief Method QSize QSize::boundedTo(const QSize &)\n", true, &_init_f_boundedTo_c1805, &_call_f_boundedTo_c1805);
  methods += new qt_gsi::GenericMethod ("expandedTo", "@brief Method QSize QSize::expandedTo(const QSize &)\n", true, &_init_f_expandedTo_c1805, &_call_f_expandedTo_c1805);
  methods += new qt_gsi::GenericMethod ("grownBy", "@brief Method QSize QSize::grownBy(QMargins m)\n", true, &_init_f_grownBy_c1238, &_call_f_grownBy_c1238);
  methods += new qt_gsi::GenericMethod (":height", "@brief Method int QSize::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QSize::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSize::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSize::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QSize &QSize::operator*=(double c)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QSize &QSize::operator+=(const QSize &)\n", false, &_init_f_operator_plus__eq__1805, &_call_f_operator_plus__eq__1805);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QSize &QSize::operator-=(const QSize &)\n", false, &_init_f_operator_minus__eq__1805, &_call_f_operator_minus__eq__1805);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QSize &QSize::operator/=(double c)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod ("rheight", "@brief Method int &QSize::rheight()\n", false, &_init_f_rheight_0, &_call_f_rheight_0);
  methods += new qt_gsi::GenericMethod ("rwidth", "@brief Method int &QSize::rwidth()\n", false, &_init_f_rwidth_0, &_call_f_rwidth_0);
  methods += new qt_gsi::GenericMethod ("scale", "@brief Method void QSize::scale(int w, int h, Qt::AspectRatioMode mode)\n", false, &_init_f_scale_3575, &_call_f_scale_3575);
  methods += new qt_gsi::GenericMethod ("scale", "@brief Method void QSize::scale(const QSize &s, Qt::AspectRatioMode mode)\n", false, &_init_f_scale_3954, &_call_f_scale_3954);
  methods += new qt_gsi::GenericMethod ("scaled", "@brief Method QSize QSize::scaled(int w, int h, Qt::AspectRatioMode mode)\n", true, &_init_f_scaled_c3575, &_call_f_scaled_c3575);
  methods += new qt_gsi::GenericMethod ("scaled", "@brief Method QSize QSize::scaled(const QSize &s, Qt::AspectRatioMode mode)\n", true, &_init_f_scaled_c3954, &_call_f_scaled_c3954);
  methods += new qt_gsi::GenericMethod ("setHeight|height=", "@brief Method void QSize::setHeight(int h)\n", false, &_init_f_setHeight_767, &_call_f_setHeight_767);
  methods += new qt_gsi::GenericMethod ("setWidth|width=", "@brief Method void QSize::setWidth(int w)\n", false, &_init_f_setWidth_767, &_call_f_setWidth_767);
  methods += new qt_gsi::GenericMethod ("shrunkBy", "@brief Method QSize QSize::shrunkBy(QMargins m)\n", true, &_init_f_shrunkBy_c1238, &_call_f_shrunkBy_c1238);
  methods += new qt_gsi::GenericMethod ("transpose", "@brief Method void QSize::transpose()\n", false, &_init_f_transpose_0, &_call_f_transpose_0);
  methods += new qt_gsi::GenericMethod ("transposed", "@brief Method QSize QSize::transposed()\n", true, &_init_f_transposed_c0, &_call_f_transposed_c0);
  methods += new qt_gsi::GenericMethod (":width", "@brief Method int QSize::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QSize> decl_QSize ("QtCore", "QSize",
  methods_QSize (),
  "@qt\n@brief Binding of QSize");


GSI_QTCORE_PUBLIC gsi::Class<QSize> &qtdecl_QSize () { return decl_QSize; }

}

