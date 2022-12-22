
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQDnsMailExchangeRecord.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDnsMailExchangeRecord>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDnsMailExchangeRecord

//  Constructor QDnsMailExchangeRecord::QDnsMailExchangeRecord()


static void _init_ctor_QDnsMailExchangeRecord_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDnsMailExchangeRecord> ();
}

static void _call_ctor_QDnsMailExchangeRecord_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDnsMailExchangeRecord *> (new QDnsMailExchangeRecord ());
}


//  Constructor QDnsMailExchangeRecord::QDnsMailExchangeRecord(const QDnsMailExchangeRecord &other)


static void _init_ctor_QDnsMailExchangeRecord_3484 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsMailExchangeRecord & > (argspec_0);
  decl->set_return_new<QDnsMailExchangeRecord> ();
}

static void _call_ctor_QDnsMailExchangeRecord_3484 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsMailExchangeRecord &arg1 = gsi::arg_reader<const QDnsMailExchangeRecord & >() (args, heap);
  ret.write<QDnsMailExchangeRecord *> (new QDnsMailExchangeRecord (arg1));
}


// QString QDnsMailExchangeRecord::exchange()


static void _init_f_exchange_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_exchange_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsMailExchangeRecord *)cls)->exchange ());
}


// QString QDnsMailExchangeRecord::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsMailExchangeRecord *)cls)->name ());
}


// QDnsMailExchangeRecord &QDnsMailExchangeRecord::operator=(const QDnsMailExchangeRecord &other)


static void _init_f_operator_eq__3484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsMailExchangeRecord & > (argspec_0);
  decl->set_return<QDnsMailExchangeRecord & > ();
}

static void _call_f_operator_eq__3484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsMailExchangeRecord &arg1 = gsi::arg_reader<const QDnsMailExchangeRecord & >() (args, heap);
  ret.write<QDnsMailExchangeRecord & > ((QDnsMailExchangeRecord &)((QDnsMailExchangeRecord *)cls)->operator= (arg1));
}


// quint16 QDnsMailExchangeRecord::preference()


static void _init_f_preference_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint16 > ();
}

static void _call_f_preference_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint16 > ((quint16)((QDnsMailExchangeRecord *)cls)->preference ());
}


// void QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord &other)


static void _init_f_swap_2789 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDnsMailExchangeRecord & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2789 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDnsMailExchangeRecord &arg1 = gsi::arg_reader<QDnsMailExchangeRecord & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDnsMailExchangeRecord *)cls)->swap (arg1);
}


// quint32 QDnsMailExchangeRecord::timeToLive()


static void _init_f_timeToLive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_timeToLive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QDnsMailExchangeRecord *)cls)->timeToLive ());
}



namespace gsi
{

static gsi::Methods methods_QDnsMailExchangeRecord () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsMailExchangeRecord::QDnsMailExchangeRecord()\nThis method creates an object of class QDnsMailExchangeRecord.", &_init_ctor_QDnsMailExchangeRecord_0, &_call_ctor_QDnsMailExchangeRecord_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsMailExchangeRecord::QDnsMailExchangeRecord(const QDnsMailExchangeRecord &other)\nThis method creates an object of class QDnsMailExchangeRecord.", &_init_ctor_QDnsMailExchangeRecord_3484, &_call_ctor_QDnsMailExchangeRecord_3484);
  methods += new qt_gsi::GenericMethod ("exchange", "@brief Method QString QDnsMailExchangeRecord::exchange()\n", true, &_init_f_exchange_c0, &_call_f_exchange_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDnsMailExchangeRecord::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDnsMailExchangeRecord &QDnsMailExchangeRecord::operator=(const QDnsMailExchangeRecord &other)\n", false, &_init_f_operator_eq__3484, &_call_f_operator_eq__3484);
  methods += new qt_gsi::GenericMethod ("preference", "@brief Method quint16 QDnsMailExchangeRecord::preference()\n", true, &_init_f_preference_c0, &_call_f_preference_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord &other)\n", false, &_init_f_swap_2789, &_call_f_swap_2789);
  methods += new qt_gsi::GenericMethod ("timeToLive", "@brief Method quint32 QDnsMailExchangeRecord::timeToLive()\n", true, &_init_f_timeToLive_c0, &_call_f_timeToLive_c0);
  return methods;
}

gsi::Class<QDnsMailExchangeRecord> decl_QDnsMailExchangeRecord ("QtNetwork", "QDnsMailExchangeRecord",
  methods_QDnsMailExchangeRecord (),
  "@qt\n@brief Binding of QDnsMailExchangeRecord");


GSI_QTNETWORK_PUBLIC gsi::Class<QDnsMailExchangeRecord> &qtdecl_QDnsMailExchangeRecord () { return decl_QDnsMailExchangeRecord; }

}
