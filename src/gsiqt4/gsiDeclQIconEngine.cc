
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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
*  @file gsiDeclQIconEngine.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIconEngine>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIconEngine

// QSize QIconEngine::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)


static void _init_f_actualSize_4543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QSize > ();
}

static void _call_f_actualSize_4543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  ret.write<QSize > ((QSize)((QIconEngine *)cls)->actualSize (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref()));
}


// void QIconEngine::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)


static void _init_f_addFile_6460 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("size");
  decl->add_arg<const QSize & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_addFile_6460 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QSize &arg2 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngine *)cls)->addFile (arg1, arg2, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg3).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg4).cref());
}


// void QIconEngine::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)


static void _init_f_addPixmap_4755 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_addPixmap_4755 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngine *)cls)->addPixmap (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref());
}


// void QIconEngine::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)


static void _init_f_paint_5848 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRect & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_paint_5848 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  const QRect &arg2 = args.read<const QRect & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngine *)cls)->paint (arg1, arg2, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg3).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg4).cref());
}


// QPixmap QIconEngine::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)


static void _init_f_pixmap_4543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_4543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  ret.write<QPixmap > ((QPixmap)((QIconEngine *)cls)->pixmap (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref()));
}


namespace gsi
{

static gsi::Methods methods_QIconEngine () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("actualSize", "@brief Method QSize QIconEngine::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_actualSize_4543, &_call_f_actualSize_4543);
  methods += new qt_gsi::GenericMethod ("addFile", "@brief Method void QIconEngine::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_addFile_6460, &_call_f_addFile_6460);
  methods += new qt_gsi::GenericMethod ("addPixmap", "@brief Method void QIconEngine::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_addPixmap_4755, &_call_f_addPixmap_4755);
  methods += new qt_gsi::GenericMethod ("paint", "@brief Method void QIconEngine::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_paint_5848, &_call_f_paint_5848);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Method QPixmap QIconEngine::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_pixmap_4543, &_call_f_pixmap_4543);
  return methods;
}

gsi::Class<QIconEngine> decl_QIconEngine ("QIconEngine_Native",
  methods_QIconEngine (),
  "@hide\n@alias QIconEngine");

GSIQT_PUBLIC gsi::Class<QIconEngine> &qtdecl_QIconEngine () { return decl_QIconEngine; }

}


class QIconEngine_Adaptor : public QIconEngine, public qt_gsi::QtObjectBase
{
public:

  virtual ~QIconEngine_Adaptor();

  //  [adaptor ctor] QIconEngine::QIconEngine()
  QIconEngine_Adaptor() : QIconEngine()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QSize QIconEngine::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)
  QSize cbs_actualSize_4543_0(const QSize &size, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    return QIconEngine::actualSize(size, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual QSize actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_actualSize_4543_0.can_issue()) {
      return cb_actualSize_4543_0.issue<QIconEngine_Adaptor, QSize, const QSize &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngine_Adaptor::cbs_actualSize_4543_0, size, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      return QIconEngine::actualSize(size, mode, state);
    }
  }

  //  [adaptor impl] void QIconEngine::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)
  void cbs_addFile_6460_0(const QString &fileName, const QSize &size, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    QIconEngine::addFile(fileName, size, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual void addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_addFile_6460_0.can_issue()) {
      cb_addFile_6460_0.issue<QIconEngine_Adaptor, const QString &, const QSize &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngine_Adaptor::cbs_addFile_6460_0, fileName, size, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      QIconEngine::addFile(fileName, size, mode, state);
    }
  }

  //  [adaptor impl] void QIconEngine::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)
  void cbs_addPixmap_4755_0(const QPixmap &pixmap, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    QIconEngine::addPixmap(pixmap, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual void addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_addPixmap_4755_0.can_issue()) {
      cb_addPixmap_4755_0.issue<QIconEngine_Adaptor, const QPixmap &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngine_Adaptor::cbs_addPixmap_4755_0, pixmap, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      QIconEngine::addPixmap(pixmap, mode, state);
    }
  }

  //  [adaptor impl] void QIconEngine::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)
  void cbs_paint_5848_0(QPainter *painter, const QRect &rect, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    __SUPPRESS_UNUSED_WARNING (painter);
    __SUPPRESS_UNUSED_WARNING (rect);
    __SUPPRESS_UNUSED_WARNING (mode);
    __SUPPRESS_UNUSED_WARNING (state);
    throw qt_gsi::AbstractMethodCalledException("paint");
  }

  virtual void paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_paint_5848_0.can_issue()) {
      cb_paint_5848_0.issue<QIconEngine_Adaptor, QPainter *, const QRect &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngine_Adaptor::cbs_paint_5848_0, painter, rect, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      throw qt_gsi::AbstractMethodCalledException("paint");
    }
  }

  //  [adaptor impl] QPixmap QIconEngine::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)
  QPixmap cbs_pixmap_4543_0(const QSize &size, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    return QIconEngine::pixmap(size, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual QPixmap pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_pixmap_4543_0.can_issue()) {
      return cb_pixmap_4543_0.issue<QIconEngine_Adaptor, QPixmap, const QSize &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngine_Adaptor::cbs_pixmap_4543_0, size, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      return QIconEngine::pixmap(size, mode, state);
    }
  }

  gsi::Callback cb_actualSize_4543_0;
  gsi::Callback cb_addFile_6460_0;
  gsi::Callback cb_addPixmap_4755_0;
  gsi::Callback cb_paint_5848_0;
  gsi::Callback cb_pixmap_4543_0;
};

QIconEngine_Adaptor::~QIconEngine_Adaptor() { }

//  Constructor QIconEngine::QIconEngine() (adaptor class)

static void _init_ctor_QIconEngine_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QIconEngine_Adaptor> ();
}

static void _call_ctor_QIconEngine_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIconEngine_Adaptor *> (new QIconEngine_Adaptor ());
}


// QSize QIconEngine::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_actualSize_4543_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QSize > ();
}

static void _call_cbs_actualSize_4543_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  ret.write<QSize > ((QSize)((QIconEngine_Adaptor *)cls)->cbs_actualSize_4543_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_actualSize_4543_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngine_Adaptor *)cls)->cb_actualSize_4543_0 = cb;
}


// void QIconEngine::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_addFile_6460_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("size");
  decl->add_arg<const QSize & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_cbs_addFile_6460_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QSize &arg2 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngine_Adaptor *)cls)->cbs_addFile_6460_0 (arg1, arg2, arg3, arg4);
}

static void _set_callback_cbs_addFile_6460_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngine_Adaptor *)cls)->cb_addFile_6460_0 = cb;
}


// void QIconEngine::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_addPixmap_4755_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_cbs_addPixmap_4755_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngine_Adaptor *)cls)->cbs_addPixmap_4755_0 (arg1, arg2, arg3);
}

static void _set_callback_cbs_addPixmap_4755_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngine_Adaptor *)cls)->cb_addPixmap_4755_0 = cb;
}


// void QIconEngine::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_paint_5848_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRect & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_cbs_paint_5848_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  const QRect &arg2 = args.read<const QRect & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngine_Adaptor *)cls)->cbs_paint_5848_0 (arg1, arg2, arg3, arg4);
}

static void _set_callback_cbs_paint_5848_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngine_Adaptor *)cls)->cb_paint_5848_0 = cb;
}


// QPixmap QIconEngine::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_pixmap_4543_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QPixmap > ();
}

static void _call_cbs_pixmap_4543_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  ret.write<QPixmap > ((QPixmap)((QIconEngine_Adaptor *)cls)->cbs_pixmap_4543_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_pixmap_4543_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngine_Adaptor *)cls)->cb_pixmap_4543_0 = cb;
}


namespace gsi
{

gsi::Class<QIconEngine> &qtdecl_QIconEngine ();

static gsi::Methods methods_QIconEngine_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIconEngine::QIconEngine()\nThis method creates an object of class QIconEngine.", &_init_ctor_QIconEngine_Adaptor_0, &_call_ctor_QIconEngine_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("actualSize", "@hide", false, &_init_cbs_actualSize_4543_0, &_call_cbs_actualSize_4543_0);
  methods += new qt_gsi::GenericMethod ("actualSize", "@brief Virtual method QSize QIconEngine::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_actualSize_4543_0, &_call_cbs_actualSize_4543_0, &_set_callback_cbs_actualSize_4543_0);
  methods += new qt_gsi::GenericMethod ("addFile", "@hide", false, &_init_cbs_addFile_6460_0, &_call_cbs_addFile_6460_0);
  methods += new qt_gsi::GenericMethod ("addFile", "@brief Virtual method void QIconEngine::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_addFile_6460_0, &_call_cbs_addFile_6460_0, &_set_callback_cbs_addFile_6460_0);
  methods += new qt_gsi::GenericMethod ("addPixmap", "@hide", false, &_init_cbs_addPixmap_4755_0, &_call_cbs_addPixmap_4755_0);
  methods += new qt_gsi::GenericMethod ("addPixmap", "@brief Virtual method void QIconEngine::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_addPixmap_4755_0, &_call_cbs_addPixmap_4755_0, &_set_callback_cbs_addPixmap_4755_0);
  methods += new qt_gsi::GenericMethod ("paint", "@hide", false, &_init_cbs_paint_5848_0, &_call_cbs_paint_5848_0);
  methods += new qt_gsi::GenericMethod ("paint", "@brief Virtual method void QIconEngine::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_paint_5848_0, &_call_cbs_paint_5848_0, &_set_callback_cbs_paint_5848_0);
  methods += new qt_gsi::GenericMethod ("pixmap", "@hide", false, &_init_cbs_pixmap_4543_0, &_call_cbs_pixmap_4543_0);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Virtual method QPixmap QIconEngine::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_pixmap_4543_0, &_call_cbs_pixmap_4543_0, &_set_callback_cbs_pixmap_4543_0);
  return methods;
}

gsi::Class<QIconEngine_Adaptor> decl_QIconEngine_Adaptor (qtdecl_QIconEngine (), "QIconEngine",
  methods_QIconEngine_Adaptor (),
  "@qt\n@brief Binding of QIconEngine");

}

