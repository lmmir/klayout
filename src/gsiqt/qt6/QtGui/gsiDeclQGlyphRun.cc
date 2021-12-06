
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
*  @file gsiDeclQGlyphRun.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGlyphRun>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGlyphRun

//  Constructor QGlyphRun::QGlyphRun()


static void _init_ctor_QGlyphRun_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGlyphRun> ();
}

static void _call_ctor_QGlyphRun_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGlyphRun *> (new QGlyphRun ());
}


//  Constructor QGlyphRun::QGlyphRun(const QGlyphRun &other)


static void _init_ctor_QGlyphRun_2219 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QGlyphRun & > (argspec_0);
  decl->set_return_new<QGlyphRun> ();
}

static void _call_ctor_QGlyphRun_2219 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGlyphRun &arg1 = gsi::arg_reader<const QGlyphRun & >() (args, heap);
  ret.write<QGlyphRun *> (new QGlyphRun (arg1));
}


// QRectF QGlyphRun::boundingRect()


static void _init_f_boundingRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_boundingRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QGlyphRun *)cls)->boundingRect ());
}


// void QGlyphRun::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->clear ();
}


// QFlags<QGlyphRun::GlyphRunFlag> QGlyphRun::flags()


static void _init_f_flags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QGlyphRun::GlyphRunFlag> > ();
}

static void _call_f_flags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QGlyphRun::GlyphRunFlag> > ((QFlags<QGlyphRun::GlyphRunFlag>)((QGlyphRun *)cls)->flags ());
}


// QList<quint32> QGlyphRun::glyphIndexes()


static void _init_f_glyphIndexes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<quint32> > ();
}

static void _call_f_glyphIndexes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<quint32> > ((QList<quint32>)((QGlyphRun *)cls)->glyphIndexes ());
}


// bool QGlyphRun::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->isEmpty ());
}


// bool QGlyphRun::isRightToLeft()


static void _init_f_isRightToLeft_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRightToLeft_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->isRightToLeft ());
}


// bool QGlyphRun::operator!=(const QGlyphRun &other)


static void _init_f_operator_excl__eq__c2219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QGlyphRun & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGlyphRun &arg1 = gsi::arg_reader<const QGlyphRun & >() (args, heap);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->operator!= (arg1));
}


// QGlyphRun &QGlyphRun::operator=(const QGlyphRun &other)


static void _init_f_operator_eq__2219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QGlyphRun & > (argspec_0);
  decl->set_return<QGlyphRun & > ();
}

static void _call_f_operator_eq__2219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGlyphRun &arg1 = gsi::arg_reader<const QGlyphRun & >() (args, heap);
  ret.write<QGlyphRun & > ((QGlyphRun &)((QGlyphRun *)cls)->operator= (arg1));
}


// bool QGlyphRun::operator==(const QGlyphRun &other)


static void _init_f_operator_eq__eq__c2219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QGlyphRun & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGlyphRun &arg1 = gsi::arg_reader<const QGlyphRun & >() (args, heap);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->operator== (arg1));
}


// bool QGlyphRun::overline()


static void _init_f_overline_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_overline_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->overline ());
}


// QList<QPointF> QGlyphRun::positions()


static void _init_f_positions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QPointF> > ();
}

static void _call_f_positions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QPointF> > ((QList<QPointF>)((QGlyphRun *)cls)->positions ());
}


// QRawFont QGlyphRun::rawFont()


static void _init_f_rawFont_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRawFont > ();
}

static void _call_f_rawFont_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRawFont > ((QRawFont)((QGlyphRun *)cls)->rawFont ());
}


// void QGlyphRun::setBoundingRect(const QRectF &boundingRect)


static void _init_f_setBoundingRect_1862 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("boundingRect");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBoundingRect_1862 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = gsi::arg_reader<const QRectF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setBoundingRect (arg1);
}


// void QGlyphRun::setFlag(QGlyphRun::GlyphRunFlag flag, bool enabled)


static void _init_f_setFlag_3417 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flag");
  decl->add_arg<const qt_gsi::Converter<QGlyphRun::GlyphRunFlag>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("enabled", true, "true");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFlag_3417 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGlyphRun::GlyphRunFlag>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QGlyphRun::GlyphRunFlag>::target_type & >() (args, heap);
  bool arg2 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (true, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setFlag (qt_gsi::QtToCppAdaptor<QGlyphRun::GlyphRunFlag>(arg1).cref(), arg2);
}


// void QGlyphRun::setFlags(QFlags<QGlyphRun::GlyphRunFlag> flags)


static void _init_f_setFlags_3357 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<QFlags<QGlyphRun::GlyphRunFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFlags_3357 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QGlyphRun::GlyphRunFlag> arg1 = gsi::arg_reader<QFlags<QGlyphRun::GlyphRunFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setFlags (arg1);
}


// void QGlyphRun::setGlyphIndexes(const QList<quint32> &glyphIndexes)


static void _init_f_setGlyphIndexes_2590 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("glyphIndexes");
  decl->add_arg<const QList<quint32> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setGlyphIndexes_2590 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<quint32> &arg1 = gsi::arg_reader<const QList<quint32> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setGlyphIndexes (arg1);
}


// void QGlyphRun::setOverline(bool overline)


static void _init_f_setOverline_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("overline");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOverline_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setOverline (arg1);
}


// void QGlyphRun::setPositions(const QList<QPointF> &positions)


static void _init_f_setPositions_2601 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("positions");
  decl->add_arg<const QList<QPointF> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPositions_2601 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QPointF> &arg1 = gsi::arg_reader<const QList<QPointF> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setPositions (arg1);
}


// void QGlyphRun::setRawData(const quint32 *glyphIndexArray, const QPointF *glyphPositionArray, int size)


static void _init_f_setRawData_4520 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("glyphIndexArray");
  decl->add_arg<const quint32 * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("glyphPositionArray");
  decl->add_arg<const QPointF * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("size");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setRawData_4520 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const quint32 *arg1 = gsi::arg_reader<const quint32 * >() (args, heap);
  const QPointF *arg2 = gsi::arg_reader<const QPointF * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setRawData (arg1, arg2, arg3);
}


// void QGlyphRun::setRawFont(const QRawFont &rawFont)


static void _init_f_setRawFont_2099 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rawFont");
  decl->add_arg<const QRawFont & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRawFont_2099 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRawFont &arg1 = gsi::arg_reader<const QRawFont & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setRawFont (arg1);
}


// void QGlyphRun::setRightToLeft(bool on)


static void _init_f_setRightToLeft_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("on");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightToLeft_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setRightToLeft (arg1);
}


// void QGlyphRun::setStrikeOut(bool strikeOut)


static void _init_f_setStrikeOut_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("strikeOut");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStrikeOut_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setStrikeOut (arg1);
}


// void QGlyphRun::setUnderline(bool underline)


static void _init_f_setUnderline_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("underline");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUnderline_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->setUnderline (arg1);
}


// bool QGlyphRun::strikeOut()


static void _init_f_strikeOut_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_strikeOut_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->strikeOut ());
}


// void QGlyphRun::swap(QGlyphRun &other)


static void _init_f_swap_1524 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QGlyphRun & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1524 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGlyphRun &arg1 = gsi::arg_reader<QGlyphRun & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGlyphRun *)cls)->swap (arg1);
}


// bool QGlyphRun::underline()


static void _init_f_underline_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_underline_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGlyphRun *)cls)->underline ());
}



namespace gsi
{

static gsi::Methods methods_QGlyphRun () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGlyphRun::QGlyphRun()\nThis method creates an object of class QGlyphRun.", &_init_ctor_QGlyphRun_0, &_call_ctor_QGlyphRun_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGlyphRun::QGlyphRun(const QGlyphRun &other)\nThis method creates an object of class QGlyphRun.", &_init_ctor_QGlyphRun_2219, &_call_ctor_QGlyphRun_2219);
  methods += new qt_gsi::GenericMethod (":boundingRect", "@brief Method QRectF QGlyphRun::boundingRect()\n", true, &_init_f_boundingRect_c0, &_call_f_boundingRect_c0);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QGlyphRun::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod (":flags", "@brief Method QFlags<QGlyphRun::GlyphRunFlag> QGlyphRun::flags()\n", true, &_init_f_flags_c0, &_call_f_flags_c0);
  methods += new qt_gsi::GenericMethod (":glyphIndexes", "@brief Method QList<quint32> QGlyphRun::glyphIndexes()\n", true, &_init_f_glyphIndexes_c0, &_call_f_glyphIndexes_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QGlyphRun::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isRightToLeft?|:rightToLeft", "@brief Method bool QGlyphRun::isRightToLeft()\n", true, &_init_f_isRightToLeft_c0, &_call_f_isRightToLeft_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QGlyphRun::operator!=(const QGlyphRun &other)\n", true, &_init_f_operator_excl__eq__c2219, &_call_f_operator_excl__eq__c2219);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QGlyphRun &QGlyphRun::operator=(const QGlyphRun &other)\n", false, &_init_f_operator_eq__2219, &_call_f_operator_eq__2219);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QGlyphRun::operator==(const QGlyphRun &other)\n", true, &_init_f_operator_eq__eq__c2219, &_call_f_operator_eq__eq__c2219);
  methods += new qt_gsi::GenericMethod (":overline", "@brief Method bool QGlyphRun::overline()\n", true, &_init_f_overline_c0, &_call_f_overline_c0);
  methods += new qt_gsi::GenericMethod (":positions", "@brief Method QList<QPointF> QGlyphRun::positions()\n", true, &_init_f_positions_c0, &_call_f_positions_c0);
  methods += new qt_gsi::GenericMethod (":rawFont", "@brief Method QRawFont QGlyphRun::rawFont()\n", true, &_init_f_rawFont_c0, &_call_f_rawFont_c0);
  methods += new qt_gsi::GenericMethod ("setBoundingRect|boundingRect=", "@brief Method void QGlyphRun::setBoundingRect(const QRectF &boundingRect)\n", false, &_init_f_setBoundingRect_1862, &_call_f_setBoundingRect_1862);
  methods += new qt_gsi::GenericMethod ("setFlag", "@brief Method void QGlyphRun::setFlag(QGlyphRun::GlyphRunFlag flag, bool enabled)\n", false, &_init_f_setFlag_3417, &_call_f_setFlag_3417);
  methods += new qt_gsi::GenericMethod ("setFlags|flags=", "@brief Method void QGlyphRun::setFlags(QFlags<QGlyphRun::GlyphRunFlag> flags)\n", false, &_init_f_setFlags_3357, &_call_f_setFlags_3357);
  methods += new qt_gsi::GenericMethod ("setGlyphIndexes|glyphIndexes=", "@brief Method void QGlyphRun::setGlyphIndexes(const QList<quint32> &glyphIndexes)\n", false, &_init_f_setGlyphIndexes_2590, &_call_f_setGlyphIndexes_2590);
  methods += new qt_gsi::GenericMethod ("setOverline|overline=", "@brief Method void QGlyphRun::setOverline(bool overline)\n", false, &_init_f_setOverline_864, &_call_f_setOverline_864);
  methods += new qt_gsi::GenericMethod ("setPositions|positions=", "@brief Method void QGlyphRun::setPositions(const QList<QPointF> &positions)\n", false, &_init_f_setPositions_2601, &_call_f_setPositions_2601);
  methods += new qt_gsi::GenericMethod ("setRawData", "@brief Method void QGlyphRun::setRawData(const quint32 *glyphIndexArray, const QPointF *glyphPositionArray, int size)\n", false, &_init_f_setRawData_4520, &_call_f_setRawData_4520);
  methods += new qt_gsi::GenericMethod ("setRawFont|rawFont=", "@brief Method void QGlyphRun::setRawFont(const QRawFont &rawFont)\n", false, &_init_f_setRawFont_2099, &_call_f_setRawFont_2099);
  methods += new qt_gsi::GenericMethod ("setRightToLeft|rightToLeft=", "@brief Method void QGlyphRun::setRightToLeft(bool on)\n", false, &_init_f_setRightToLeft_864, &_call_f_setRightToLeft_864);
  methods += new qt_gsi::GenericMethod ("setStrikeOut|strikeOut=", "@brief Method void QGlyphRun::setStrikeOut(bool strikeOut)\n", false, &_init_f_setStrikeOut_864, &_call_f_setStrikeOut_864);
  methods += new qt_gsi::GenericMethod ("setUnderline|underline=", "@brief Method void QGlyphRun::setUnderline(bool underline)\n", false, &_init_f_setUnderline_864, &_call_f_setUnderline_864);
  methods += new qt_gsi::GenericMethod (":strikeOut", "@brief Method bool QGlyphRun::strikeOut()\n", true, &_init_f_strikeOut_c0, &_call_f_strikeOut_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QGlyphRun::swap(QGlyphRun &other)\n", false, &_init_f_swap_1524, &_call_f_swap_1524);
  methods += new qt_gsi::GenericMethod (":underline", "@brief Method bool QGlyphRun::underline()\n", true, &_init_f_underline_c0, &_call_f_underline_c0);
  return methods;
}

gsi::Class<QGlyphRun> decl_QGlyphRun ("QtGui", "QGlyphRun",
  methods_QGlyphRun (),
  "@qt\n@brief Binding of QGlyphRun");


GSI_QTGUI_PUBLIC gsi::Class<QGlyphRun> &qtdecl_QGlyphRun () { return decl_QGlyphRun; }

}


//  Implementation of the enum wrapper class for QGlyphRun::GlyphRunFlag
namespace qt_gsi
{

static gsi::Enum<QGlyphRun::GlyphRunFlag> decl_QGlyphRun_GlyphRunFlag_Enum ("QtGui", "QGlyphRun_GlyphRunFlag",
    gsi::enum_const ("Overline", QGlyphRun::Overline, "@brief Enum constant QGlyphRun::Overline") +
    gsi::enum_const ("Underline", QGlyphRun::Underline, "@brief Enum constant QGlyphRun::Underline") +
    gsi::enum_const ("StrikeOut", QGlyphRun::StrikeOut, "@brief Enum constant QGlyphRun::StrikeOut") +
    gsi::enum_const ("RightToLeft", QGlyphRun::RightToLeft, "@brief Enum constant QGlyphRun::RightToLeft") +
    gsi::enum_const ("SplitLigature", QGlyphRun::SplitLigature, "@brief Enum constant QGlyphRun::SplitLigature"),
  "@qt\n@brief This class represents the QGlyphRun::GlyphRunFlag enum");

static gsi::QFlagsClass<QGlyphRun::GlyphRunFlag > decl_QGlyphRun_GlyphRunFlag_Enums ("QtGui", "QGlyphRun_QFlags_GlyphRunFlag",
  "@qt\n@brief This class represents the QFlags<QGlyphRun::GlyphRunFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGlyphRun> inject_QGlyphRun_GlyphRunFlag_Enum_in_parent (decl_QGlyphRun_GlyphRunFlag_Enum.defs ());
static gsi::ClassExt<QGlyphRun> decl_QGlyphRun_GlyphRunFlag_Enum_as_child (decl_QGlyphRun_GlyphRunFlag_Enum, "GlyphRunFlag");
static gsi::ClassExt<QGlyphRun> decl_QGlyphRun_GlyphRunFlag_Enums_as_child (decl_QGlyphRun_GlyphRunFlag_Enums, "QFlags_GlyphRunFlag");

}

