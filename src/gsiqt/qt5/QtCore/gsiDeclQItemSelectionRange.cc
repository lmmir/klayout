
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
*  @file gsiDeclQItemSelectionRange.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QItemSelectionRange>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QPersistentModelIndex>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QItemSelectionRange

//  Constructor QItemSelectionRange::QItemSelectionRange()


static void _init_ctor_QItemSelectionRange_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QItemSelectionRange> ();
}

static void _call_ctor_QItemSelectionRange_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QItemSelectionRange *> (new QItemSelectionRange ());
}


//  Constructor QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange &other)


static void _init_ctor_QItemSelectionRange_3220 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  decl->set_return_new<QItemSelectionRange> ();
}

static void _call_ctor_QItemSelectionRange_3220 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  ret.write<QItemSelectionRange *> (new QItemSelectionRange (arg1));
}


//  Constructor QItemSelectionRange::QItemSelectionRange(const QModelIndex &topLeft, const QModelIndex &bottomRight)


static void _init_ctor_QItemSelectionRange_4682 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("topLeft");
  decl->add_arg<const QModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bottomRight");
  decl->add_arg<const QModelIndex & > (argspec_1);
  decl->set_return_new<QItemSelectionRange> ();
}

static void _call_ctor_QItemSelectionRange_4682 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  const QModelIndex &arg2 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  ret.write<QItemSelectionRange *> (new QItemSelectionRange (arg1, arg2));
}


//  Constructor QItemSelectionRange::QItemSelectionRange(const QModelIndex &index)


static void _init_ctor_QItemSelectionRange_2395 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return_new<QItemSelectionRange> ();
}

static void _call_ctor_QItemSelectionRange_2395 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  ret.write<QItemSelectionRange *> (new QItemSelectionRange (arg1));
}


// int QItemSelectionRange::bottom()


static void _init_f_bottom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bottom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QItemSelectionRange *)cls)->bottom ());
}


// const QPersistentModelIndex &QItemSelectionRange::bottomRight()


static void _init_f_bottomRight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPersistentModelIndex & > ();
}

static void _call_f_bottomRight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPersistentModelIndex & > ((const QPersistentModelIndex &)((QItemSelectionRange *)cls)->bottomRight ());
}


// bool QItemSelectionRange::contains(const QModelIndex &index)


static void _init_f_contains_c2395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<const QModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QModelIndex &arg1 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->contains (arg1));
}


// bool QItemSelectionRange::contains(int row, int column, const QModelIndex &parentIndex)


static void _init_f_contains_c3713 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("row");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("column");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parentIndex");
  decl->add_arg<const QModelIndex & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_contains_c3713 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QModelIndex &arg3 = gsi::arg_reader<const QModelIndex & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->contains (arg1, arg2, arg3));
}


// int QItemSelectionRange::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QItemSelectionRange *)cls)->height ());
}


// QList<QModelIndex> QItemSelectionRange::indexes()


static void _init_f_indexes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QModelIndex> > ();
}

static void _call_f_indexes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QModelIndex> > ((QList<QModelIndex>)((QItemSelectionRange *)cls)->indexes ());
}


// QItemSelectionRange QItemSelectionRange::intersected(const QItemSelectionRange &other)


static void _init_f_intersected_c3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  decl->set_return<QItemSelectionRange > ();
}

static void _call_f_intersected_c3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  ret.write<QItemSelectionRange > ((QItemSelectionRange)((QItemSelectionRange *)cls)->intersected (arg1));
}


// bool QItemSelectionRange::intersects(const QItemSelectionRange &other)


static void _init_f_intersects_c3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_intersects_c3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->intersects (arg1));
}


// bool QItemSelectionRange::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->isEmpty ());
}


// bool QItemSelectionRange::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->isValid ());
}


// int QItemSelectionRange::left()


static void _init_f_left_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_left_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QItemSelectionRange *)cls)->left ());
}


// const QAbstractItemModel *QItemSelectionRange::model()


static void _init_f_model_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QAbstractItemModel * > ();
}

static void _call_f_model_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QAbstractItemModel * > ((const QAbstractItemModel *)((QItemSelectionRange *)cls)->model ());
}


// bool QItemSelectionRange::operator!=(const QItemSelectionRange &other)


static void _init_f_operator_excl__eq__c3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->operator!= (arg1));
}


// bool QItemSelectionRange::operator<(const QItemSelectionRange &other)


static void _init_f_operator_lt__c3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->operator< (arg1));
}


// bool QItemSelectionRange::operator==(const QItemSelectionRange &other)


static void _init_f_operator_eq__eq__c3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QItemSelectionRange & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QItemSelectionRange &arg1 = gsi::arg_reader<const QItemSelectionRange & >() (args, heap);
  ret.write<bool > ((bool)((QItemSelectionRange *)cls)->operator== (arg1));
}


// QModelIndex QItemSelectionRange::parent()


static void _init_f_parent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QModelIndex > ();
}

static void _call_f_parent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QModelIndex > ((QModelIndex)((QItemSelectionRange *)cls)->parent ());
}


// int QItemSelectionRange::right()


static void _init_f_right_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_right_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QItemSelectionRange *)cls)->right ());
}


// int QItemSelectionRange::top()


static void _init_f_top_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_top_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QItemSelectionRange *)cls)->top ());
}


// const QPersistentModelIndex &QItemSelectionRange::topLeft()


static void _init_f_topLeft_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPersistentModelIndex & > ();
}

static void _call_f_topLeft_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPersistentModelIndex & > ((const QPersistentModelIndex &)((QItemSelectionRange *)cls)->topLeft ());
}


// int QItemSelectionRange::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QItemSelectionRange *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QItemSelectionRange () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemSelectionRange::QItemSelectionRange()\nThis method creates an object of class QItemSelectionRange.", &_init_ctor_QItemSelectionRange_0, &_call_ctor_QItemSelectionRange_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange &other)\nThis method creates an object of class QItemSelectionRange.", &_init_ctor_QItemSelectionRange_3220, &_call_ctor_QItemSelectionRange_3220);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemSelectionRange::QItemSelectionRange(const QModelIndex &topLeft, const QModelIndex &bottomRight)\nThis method creates an object of class QItemSelectionRange.", &_init_ctor_QItemSelectionRange_4682, &_call_ctor_QItemSelectionRange_4682);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemSelectionRange::QItemSelectionRange(const QModelIndex &index)\nThis method creates an object of class QItemSelectionRange.", &_init_ctor_QItemSelectionRange_2395, &_call_ctor_QItemSelectionRange_2395);
  methods += new qt_gsi::GenericMethod ("bottom", "@brief Method int QItemSelectionRange::bottom()\n", true, &_init_f_bottom_c0, &_call_f_bottom_c0);
  methods += new qt_gsi::GenericMethod ("bottomRight", "@brief Method const QPersistentModelIndex &QItemSelectionRange::bottomRight()\n", true, &_init_f_bottomRight_c0, &_call_f_bottomRight_c0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QItemSelectionRange::contains(const QModelIndex &index)\n", true, &_init_f_contains_c2395, &_call_f_contains_c2395);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QItemSelectionRange::contains(int row, int column, const QModelIndex &parentIndex)\n", true, &_init_f_contains_c3713, &_call_f_contains_c3713);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method int QItemSelectionRange::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("indexes", "@brief Method QList<QModelIndex> QItemSelectionRange::indexes()\n", true, &_init_f_indexes_c0, &_call_f_indexes_c0);
  methods += new qt_gsi::GenericMethod ("intersected", "@brief Method QItemSelectionRange QItemSelectionRange::intersected(const QItemSelectionRange &other)\n", true, &_init_f_intersected_c3220, &_call_f_intersected_c3220);
  methods += new qt_gsi::GenericMethod ("intersects", "@brief Method bool QItemSelectionRange::intersects(const QItemSelectionRange &other)\n", true, &_init_f_intersects_c3220, &_call_f_intersects_c3220);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QItemSelectionRange::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QItemSelectionRange::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("left", "@brief Method int QItemSelectionRange::left()\n", true, &_init_f_left_c0, &_call_f_left_c0);
  methods += new qt_gsi::GenericMethod ("model", "@brief Method const QAbstractItemModel *QItemSelectionRange::model()\n", true, &_init_f_model_c0, &_call_f_model_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QItemSelectionRange::operator!=(const QItemSelectionRange &other)\n", true, &_init_f_operator_excl__eq__c3220, &_call_f_operator_excl__eq__c3220);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QItemSelectionRange::operator<(const QItemSelectionRange &other)\n", true, &_init_f_operator_lt__c3220, &_call_f_operator_lt__c3220);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QItemSelectionRange::operator==(const QItemSelectionRange &other)\n", true, &_init_f_operator_eq__eq__c3220, &_call_f_operator_eq__eq__c3220);
  methods += new qt_gsi::GenericMethod ("parent", "@brief Method QModelIndex QItemSelectionRange::parent()\n", true, &_init_f_parent_c0, &_call_f_parent_c0);
  methods += new qt_gsi::GenericMethod ("right", "@brief Method int QItemSelectionRange::right()\n", true, &_init_f_right_c0, &_call_f_right_c0);
  methods += new qt_gsi::GenericMethod ("top", "@brief Method int QItemSelectionRange::top()\n", true, &_init_f_top_c0, &_call_f_top_c0);
  methods += new qt_gsi::GenericMethod ("topLeft", "@brief Method const QPersistentModelIndex &QItemSelectionRange::topLeft()\n", true, &_init_f_topLeft_c0, &_call_f_topLeft_c0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method int QItemSelectionRange::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QItemSelectionRange> decl_QItemSelectionRange ("QtCore", "QItemSelectionRange",
  methods_QItemSelectionRange (),
  "@qt\n@brief Binding of QItemSelectionRange");


GSI_QTCORE_PUBLIC gsi::Class<QItemSelectionRange> &qtdecl_QItemSelectionRange () { return decl_QItemSelectionRange; }

}

