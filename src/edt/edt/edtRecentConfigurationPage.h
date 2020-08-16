
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


#ifndef HDR_edtRecentConfigurationPage
#define HDR_edtRecentConfigurationPage

#include "edtEditorOptionsPage.h"

#include <list>
#include <QTreeWidget>

namespace edt
{

class PCellParametersPage;

class EditorOptionsPages;

/**
 *  @brief The base class for a object properties page
 */
class RecentConfigurationPage
  : public EditorOptionsPage
{
Q_OBJECT

public:
  enum ConfigurationRendering
  {
    Text = 0,
    Bool = 1,
    Double = 2,
    Int = 3,
    Layer = 4,
    PCellParamters = 5
  };

  struct ConfigurationDescriptor
  {
    ConfigurationDescriptor (const std::string &_cfg_name, const std::string &_title, ConfigurationRendering _rendering)
      : cfg_name (_cfg_name), title (_title), rendering (_rendering)
    { }

    std::string cfg_name, title;
    ConfigurationRendering rendering;
  };

  template <class Iter>
  RecentConfigurationPage (lay::Dispatcher *dispatcher, const std::string &recent_cfg_name, Iter begin_cfg, Iter end_cfg)
    : EditorOptionsPage (dispatcher), m_recent_cfg_name (recent_cfg_name), m_cfg (begin_cfg, end_cfg)
  {
    init ();
  }

  virtual ~RecentConfigurationPage ();

  virtual std::string title () const;
  virtual int order () const;
  virtual void apply (lay::Dispatcher * /*root*/) { }
  virtual void setup (lay::Dispatcher * /*root*/) { }
  virtual void commit_recent (lay::Dispatcher *root);

private:
  std::string m_recent_cfg_name;
  std::list<ConfigurationDescriptor> m_cfg;
  QTreeWidget *mp_tree_widget;

  void init ();
  void update_list (const std::list<std::vector<std::string> > &stored_values);
  std::list<std::vector<std::string> > get_stored_values () const;
  void set_stored_values (const std::list<std::vector<std::string> > &values) const;
};

}

#endif

