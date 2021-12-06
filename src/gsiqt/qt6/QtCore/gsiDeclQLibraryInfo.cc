
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
*  @file gsiDeclQLibraryInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLibraryInfo>
#include <QVersionNumber>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLibraryInfo

// static const char *QLibraryInfo::build()


static void _init_f_build_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_build_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)QLibraryInfo::build ());
}


// static bool QLibraryInfo::isDebugBuild()


static void _init_f_isDebugBuild_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDebugBuild_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QLibraryInfo::isDebugBuild ());
}


// static QString QLibraryInfo::location(QLibraryInfo::LibraryLocation location)


static void _init_f_location_3304 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("location");
  decl->add_arg<QLibraryInfo::LibraryLocation > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_location_3304 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QLibraryInfo::LibraryLocation arg1 = gsi::arg_reader<QLibraryInfo::LibraryLocation >() (args, heap);
  ret.write<QString > ((QString)QLibraryInfo::location (arg1));
}


// static QString QLibraryInfo::path(QLibraryInfo::LibraryPath p)


static void _init_f_path_2876 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const qt_gsi::Converter<QLibraryInfo::LibraryPath>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_path_2876 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QLibraryInfo::LibraryPath>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QLibraryInfo::LibraryPath>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QLibraryInfo::path (qt_gsi::QtToCppAdaptor<QLibraryInfo::LibraryPath>(arg1).cref()));
}


// static QStringList QLibraryInfo::platformPluginArguments(const QString &platformName)


static void _init_f_platformPluginArguments_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("platformName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_platformPluginArguments_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStringList > ((QStringList)QLibraryInfo::platformPluginArguments (arg1));
}


// static QVersionNumber QLibraryInfo::version()


static void _init_f_version_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QVersionNumber > ();
}

static void _call_f_version_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVersionNumber > ((QVersionNumber)QLibraryInfo::version ());
}



namespace gsi
{

static gsi::Methods methods_QLibraryInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("build", "@brief Static method const char *QLibraryInfo::build()\nThis method is static and can be called without an instance.", &_init_f_build_0, &_call_f_build_0);
  methods += new qt_gsi::GenericStaticMethod ("isDebugBuild?", "@brief Static method bool QLibraryInfo::isDebugBuild()\nThis method is static and can be called without an instance.", &_init_f_isDebugBuild_0, &_call_f_isDebugBuild_0);
  methods += new qt_gsi::GenericStaticMethod ("location", "@brief Static method QString QLibraryInfo::location(QLibraryInfo::LibraryLocation location)\nThis method is static and can be called without an instance.", &_init_f_location_3304, &_call_f_location_3304);
  methods += new qt_gsi::GenericStaticMethod ("path", "@brief Static method QString QLibraryInfo::path(QLibraryInfo::LibraryPath p)\nThis method is static and can be called without an instance.", &_init_f_path_2876, &_call_f_path_2876);
  methods += new qt_gsi::GenericStaticMethod ("platformPluginArguments", "@brief Static method QStringList QLibraryInfo::platformPluginArguments(const QString &platformName)\nThis method is static and can be called without an instance.", &_init_f_platformPluginArguments_2025, &_call_f_platformPluginArguments_2025);
  methods += new qt_gsi::GenericStaticMethod ("version", "@brief Static method QVersionNumber QLibraryInfo::version()\nThis method is static and can be called without an instance.", &_init_f_version_0, &_call_f_version_0);
  return methods;
}

gsi::Class<QLibraryInfo> decl_QLibraryInfo ("QtCore", "QLibraryInfo",
  methods_QLibraryInfo (),
  "@qt\n@brief Binding of QLibraryInfo");


GSI_QTCORE_PUBLIC gsi::Class<QLibraryInfo> &qtdecl_QLibraryInfo () { return decl_QLibraryInfo; }

}


//  Implementation of the enum wrapper class for QLibraryInfo::LibraryPath
namespace qt_gsi
{

static gsi::Enum<QLibraryInfo::LibraryPath> decl_QLibraryInfo_LibraryPath_Enum ("QtCore", "QLibraryInfo_LibraryPath",
    gsi::enum_const ("PrefixPath", QLibraryInfo::PrefixPath, "@brief Enum constant QLibraryInfo::PrefixPath") +
    gsi::enum_const ("DocumentationPath", QLibraryInfo::DocumentationPath, "@brief Enum constant QLibraryInfo::DocumentationPath") +
    gsi::enum_const ("HeadersPath", QLibraryInfo::HeadersPath, "@brief Enum constant QLibraryInfo::HeadersPath") +
    gsi::enum_const ("LibrariesPath", QLibraryInfo::LibrariesPath, "@brief Enum constant QLibraryInfo::LibrariesPath") +
    gsi::enum_const ("LibraryExecutablesPath", QLibraryInfo::LibraryExecutablesPath, "@brief Enum constant QLibraryInfo::LibraryExecutablesPath") +
    gsi::enum_const ("BinariesPath", QLibraryInfo::BinariesPath, "@brief Enum constant QLibraryInfo::BinariesPath") +
    gsi::enum_const ("PluginsPath", QLibraryInfo::PluginsPath, "@brief Enum constant QLibraryInfo::PluginsPath") +
    gsi::enum_const ("QmlImportsPath", QLibraryInfo::QmlImportsPath, "@brief Enum constant QLibraryInfo::QmlImportsPath") +
    gsi::enum_const ("Qml2ImportsPath", QLibraryInfo::Qml2ImportsPath, "@brief Enum constant QLibraryInfo::Qml2ImportsPath") +
    gsi::enum_const ("ArchDataPath", QLibraryInfo::ArchDataPath, "@brief Enum constant QLibraryInfo::ArchDataPath") +
    gsi::enum_const ("DataPath", QLibraryInfo::DataPath, "@brief Enum constant QLibraryInfo::DataPath") +
    gsi::enum_const ("TranslationsPath", QLibraryInfo::TranslationsPath, "@brief Enum constant QLibraryInfo::TranslationsPath") +
    gsi::enum_const ("ExamplesPath", QLibraryInfo::ExamplesPath, "@brief Enum constant QLibraryInfo::ExamplesPath") +
    gsi::enum_const ("TestsPath", QLibraryInfo::TestsPath, "@brief Enum constant QLibraryInfo::TestsPath") +
    gsi::enum_const ("SettingsPath", QLibraryInfo::SettingsPath, "@brief Enum constant QLibraryInfo::SettingsPath"),
  "@qt\n@brief This class represents the QLibraryInfo::LibraryPath enum");

static gsi::QFlagsClass<QLibraryInfo::LibraryPath > decl_QLibraryInfo_LibraryPath_Enums ("QtCore", "QLibraryInfo_QFlags_LibraryPath",
  "@qt\n@brief This class represents the QFlags<QLibraryInfo::LibraryPath> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLibraryInfo> inject_QLibraryInfo_LibraryPath_Enum_in_parent (decl_QLibraryInfo_LibraryPath_Enum.defs ());
static gsi::ClassExt<QLibraryInfo> decl_QLibraryInfo_LibraryPath_Enum_as_child (decl_QLibraryInfo_LibraryPath_Enum, "LibraryPath");
static gsi::ClassExt<QLibraryInfo> decl_QLibraryInfo_LibraryPath_Enums_as_child (decl_QLibraryInfo_LibraryPath_Enums, "QFlags_LibraryPath");

}

