
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
*  @file gsiDeclQTabletEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTabletEvent>
#include <QPoint>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTabletEvent

// QTabletEvent::TabletDevice QTabletEvent::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTabletEvent::TabletDevice>::target_type > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTabletEvent::TabletDevice>::target_type > ((qt_gsi::Converter<QTabletEvent::TabletDevice>::target_type)qt_gsi::CppToQtAdaptor<QTabletEvent::TabletDevice>(((QTabletEvent *)cls)->device ()));
}


// const QPoint &QTabletEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QTabletEvent *)cls)->globalPos ());
}


// int QTabletEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->globalX ());
}


// int QTabletEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->globalY ());
}


// const QPointF &QTabletEvent::hiResGlobalPos()


static void _init_f_hiResGlobalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF & > ();
}

static void _call_f_hiResGlobalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF & > ((const QPointF &)((QTabletEvent *)cls)->hiResGlobalPos ());
}


// double QTabletEvent::hiResGlobalX()


static void _init_f_hiResGlobalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_hiResGlobalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->hiResGlobalX ());
}


// double QTabletEvent::hiResGlobalY()


static void _init_f_hiResGlobalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_hiResGlobalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->hiResGlobalY ());
}


// QTabletEvent::PointerType QTabletEvent::pointerType()


static void _init_f_pointerType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTabletEvent::PointerType>::target_type > ();
}

static void _call_f_pointerType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTabletEvent::PointerType>::target_type > ((qt_gsi::Converter<QTabletEvent::PointerType>::target_type)qt_gsi::CppToQtAdaptor<QTabletEvent::PointerType>(((QTabletEvent *)cls)->pointerType ()));
}


// const QPoint &QTabletEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QTabletEvent *)cls)->pos ());
}


// double QTabletEvent::pressure()


static void _init_f_pressure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_pressure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->pressure ());
}


// double QTabletEvent::rotation()


static void _init_f_rotation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rotation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->rotation ());
}


// double QTabletEvent::tangentialPressure()


static void _init_f_tangentialPressure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_tangentialPressure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->tangentialPressure ());
}


// qint64 QTabletEvent::uniqueId()


static void _init_f_uniqueId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_uniqueId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QTabletEvent *)cls)->uniqueId ());
}


// int QTabletEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->x ());
}


// int QTabletEvent::xTilt()


static void _init_f_xTilt_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_xTilt_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->xTilt ());
}


// int QTabletEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->y ());
}


// int QTabletEvent::yTilt()


static void _init_f_yTilt_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_yTilt_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->yTilt ());
}


// int QTabletEvent::z()


static void _init_f_z_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_z_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->z ());
}


namespace gsi
{

static gsi::Methods methods_QTabletEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("device", "@brief Method QTabletEvent::TabletDevice QTabletEvent::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method const QPoint &QTabletEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QTabletEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QTabletEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("hiResGlobalPos", "@brief Method const QPointF &QTabletEvent::hiResGlobalPos()\n", true, &_init_f_hiResGlobalPos_c0, &_call_f_hiResGlobalPos_c0);
  methods += new qt_gsi::GenericMethod ("hiResGlobalX", "@brief Method double QTabletEvent::hiResGlobalX()\n", true, &_init_f_hiResGlobalX_c0, &_call_f_hiResGlobalX_c0);
  methods += new qt_gsi::GenericMethod ("hiResGlobalY", "@brief Method double QTabletEvent::hiResGlobalY()\n", true, &_init_f_hiResGlobalY_c0, &_call_f_hiResGlobalY_c0);
  methods += new qt_gsi::GenericMethod ("pointerType", "@brief Method QTabletEvent::PointerType QTabletEvent::pointerType()\n", true, &_init_f_pointerType_c0, &_call_f_pointerType_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QTabletEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("pressure", "@brief Method double QTabletEvent::pressure()\n", true, &_init_f_pressure_c0, &_call_f_pressure_c0);
  methods += new qt_gsi::GenericMethod ("rotation", "@brief Method double QTabletEvent::rotation()\n", true, &_init_f_rotation_c0, &_call_f_rotation_c0);
  methods += new qt_gsi::GenericMethod ("tangentialPressure", "@brief Method double QTabletEvent::tangentialPressure()\n", true, &_init_f_tangentialPressure_c0, &_call_f_tangentialPressure_c0);
  methods += new qt_gsi::GenericMethod ("uniqueId", "@brief Method qint64 QTabletEvent::uniqueId()\n", true, &_init_f_uniqueId_c0, &_call_f_uniqueId_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QTabletEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("xTilt", "@brief Method int QTabletEvent::xTilt()\n", true, &_init_f_xTilt_c0, &_call_f_xTilt_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QTabletEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericMethod ("yTilt", "@brief Method int QTabletEvent::yTilt()\n", true, &_init_f_yTilt_c0, &_call_f_yTilt_c0);
  methods += new qt_gsi::GenericMethod ("z", "@brief Method int QTabletEvent::z()\n", true, &_init_f_z_c0, &_call_f_z_c0);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QTabletEvent> decl_QTabletEvent (qtdecl_QInputEvent (), "QtGui", "QTabletEvent_Native",
  methods_QTabletEvent (),
  "@hide\n@alias QTabletEvent");

GSI_QTGUI_PUBLIC gsi::Class<QTabletEvent> &qtdecl_QTabletEvent () { return decl_QTabletEvent; }

}


class QTabletEvent_Adaptor : public QTabletEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTabletEvent_Adaptor();

  
};

QTabletEvent_Adaptor::~QTabletEvent_Adaptor() { }

namespace gsi
{

gsi::Class<QTabletEvent> &qtdecl_QTabletEvent ();

static gsi::Methods methods_QTabletEvent_Adaptor () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QTabletEvent_Adaptor> decl_QTabletEvent_Adaptor (qtdecl_QTabletEvent (), "QtGui", "QTabletEvent",
  methods_QTabletEvent_Adaptor (),
  "@qt\n@brief Binding of QTabletEvent");

}


//  Implementation of the enum wrapper class for QTabletEvent::PointerType
namespace qt_gsi
{

static gsi::Enum<QTabletEvent::PointerType> decl_QTabletEvent_PointerType_Enum ("QtGui", "QTabletEvent_PointerType",
    gsi::enum_const ("UnknownPointer", QTabletEvent::UnknownPointer, "@brief Enum constant QTabletEvent::UnknownPointer") +
    gsi::enum_const ("Pen", QTabletEvent::Pen, "@brief Enum constant QTabletEvent::Pen") +
    gsi::enum_const ("Cursor", QTabletEvent::Cursor, "@brief Enum constant QTabletEvent::Cursor") +
    gsi::enum_const ("Eraser", QTabletEvent::Eraser, "@brief Enum constant QTabletEvent::Eraser"),
  "@qt\n@brief This class represents the QTabletEvent::PointerType enum");

static gsi::QFlagsClass<QTabletEvent::PointerType > decl_QTabletEvent_PointerType_Enums ("QtGui", "QTabletEvent_QFlags_PointerType",
  "@qt\n@brief This class represents the QFlags<QTabletEvent::PointerType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTabletEvent> inject_QTabletEvent_PointerType_Enum_in_parent (decl_QTabletEvent_PointerType_Enum.defs ());
static gsi::ClassExt<QTabletEvent> decl_QTabletEvent_PointerType_Enum_as_child (decl_QTabletEvent_PointerType_Enum, "PointerType");
static gsi::ClassExt<QTabletEvent> decl_QTabletEvent_PointerType_Enums_as_child (decl_QTabletEvent_PointerType_Enums, "QFlags_PointerType");

}


//  Implementation of the enum wrapper class for QTabletEvent::TabletDevice
namespace qt_gsi
{

static gsi::Enum<QTabletEvent::TabletDevice> decl_QTabletEvent_TabletDevice_Enum ("QtGui", "QTabletEvent_TabletDevice",
    gsi::enum_const ("NoDevice", QTabletEvent::NoDevice, "@brief Enum constant QTabletEvent::NoDevice") +
    gsi::enum_const ("Puck", QTabletEvent::Puck, "@brief Enum constant QTabletEvent::Puck") +
    gsi::enum_const ("Stylus", QTabletEvent::Stylus, "@brief Enum constant QTabletEvent::Stylus") +
    gsi::enum_const ("Airbrush", QTabletEvent::Airbrush, "@brief Enum constant QTabletEvent::Airbrush") +
    gsi::enum_const ("FourDMouse", QTabletEvent::FourDMouse, "@brief Enum constant QTabletEvent::FourDMouse") +
    gsi::enum_const ("XFreeEraser", QTabletEvent::XFreeEraser, "@brief Enum constant QTabletEvent::XFreeEraser") +
    gsi::enum_const ("RotationStylus", QTabletEvent::RotationStylus, "@brief Enum constant QTabletEvent::RotationStylus"),
  "@qt\n@brief This class represents the QTabletEvent::TabletDevice enum");

static gsi::QFlagsClass<QTabletEvent::TabletDevice > decl_QTabletEvent_TabletDevice_Enums ("QtGui", "QTabletEvent_QFlags_TabletDevice",
  "@qt\n@brief This class represents the QFlags<QTabletEvent::TabletDevice> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTabletEvent> inject_QTabletEvent_TabletDevice_Enum_in_parent (decl_QTabletEvent_TabletDevice_Enum.defs ());
static gsi::ClassExt<QTabletEvent> decl_QTabletEvent_TabletDevice_Enum_as_child (decl_QTabletEvent_TabletDevice_Enum, "TabletDevice");
static gsi::ClassExt<QTabletEvent> decl_QTabletEvent_TabletDevice_Enums_as_child (decl_QTabletEvent_TabletDevice_Enums, "QFlags_TabletDevice");

}

