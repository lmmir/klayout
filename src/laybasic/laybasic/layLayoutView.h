
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


#ifndef HDR_layLayoutView
#define HDR_layLayoutView

#include "laybasicCommon.h"

#include <vector>
#include <map>
#include <set>
#include <list>
#include <string>
#include <memory>

#include <QFrame>
#include <QImage>

#include "layLayoutViewBase.h"
#include "layLayerProperties.h"
#include "layAbstractMenu.h"
#include "layAnnotationShapes.h"
#include "layDispatcher.h"
#include "layLayoutCanvas.h"
#include "layColorPalette.h"
#include "layStipplePalette.h"
#include "layLineStylePalette.h"
#include "layCellView.h"
#include "layViewOp.h"
#include "layEditable.h"
#include "layPlugin.h"
#include "layDisplayState.h"
#include "layBookmarkList.h"
#include "layEditorOptionsFrame.h"
#include "gsi.h"
#include "tlException.h"
#include "tlEvents.h"
#include "dbInstElement.h"

class QSpinBox;

namespace rdb {
  class Database;
}

namespace db {
  class Layout;
  class Manager;
  class SaveLayoutOptions;
  class LayoutToNetlist;
}

namespace lay {

class AbstractMenu;
class LayerControlPanel;
class HierarchyControlPanel;
class LibrariesView;
class BookmarksView;
class MouseTracker;
class ZoomService;
class SelectionService;
class MoveService;
class Browser;
class ColorButton;
class ConfigureAction;
class EditorOptionsPages;

/**
 *  @brief The layout view object
 *
 *  The layout view is responsible for displaying one or a set of layouts.
 *  It is composed of a canvas and controls to control the appearance.
 *  It manages the layer display list, bookmark list etc.
 */
class LAYBASIC_PUBLIC LayoutView
  : public LayoutViewBase
{
Q_OBJECT

public:
  /**
   *  @brief Constructor
   */
  LayoutView (db::Manager *mgr, bool editable, lay::Plugin *plugin_parent, QWidget *parent = 0, const char *name = "view", unsigned int options = (unsigned int) LV_Normal);

  /**
   *  @brief Constructor (clone from another view)
   */
  LayoutView (lay::LayoutView *source, db::Manager *mgr, bool editable, lay::Plugin *plugin_parent, QWidget *parent = 0, const char *name = "view", unsigned int options = (unsigned int) LV_Normal);

  /**
   *  @brief Makes this view the current one
   */
  void set_current ();

  /**
   *  @brief Makes the given view the current one
   *
   *  The argument can be 0 which means there is no current view.
   */
  static void set_current (LayoutViewBase *);

  /**
   *  @brief Gets the current view
   */
  static LayoutViewBase *current ();

  /**
   *  @brief Gets the window title of the view
   */
  std::string title () const;

  /**
   *  @brief Sets the window title to an explicit string
   */
  void set_title (const std::string &t);

  /**
   *  @brief Resets the explicit title and enable the automatic naming
   */
  void reset_title ();

  /**
   *  @brief Sets the currently active layer by layer properties and cell view index
   *
   *  If the layer does not exist, the user will be asked whether to create the layer.
   *  Returns false if the layer is not a valid one and the user defined to create the layer.
   */
  bool set_or_request_current_layer (unsigned int cv_index, const db::LayerProperties &properties);

  /**
   *  @brief Sets the currently active layer by layer properties and cell view index
   *
   *  This method will look up that layer in the layer view tree and select that layer.
   *  This method will also select this layer.
   *
   *  Returns false if the layer is not a valid one.
   */
  bool set_current_layer (unsigned int cv_index, const db::LayerProperties &properties);

  /**
   *  @brief Sets the currently active layer
   *
   *  The active layer is the one that is active in the layer
   *  browser panel. This method will also select this layer.
   */
  void set_current_layer (const lay::LayerPropertiesConstIterator &l);

  /**
   *  @brief Retrieve the index of the currently active layer
   *
   *  The active layer is the one that is active in the layer
   *  browser panel.
   *  This method returns a null iterator, if no layer is active.
   */
  lay::LayerPropertiesConstIterator current_layer () const;

  /**
   *  @brief Return the layers that are selected in the layer browser
   *
   *  Returns an empty list if no layer is selected.
   */
  std::vector<lay::LayerPropertiesConstIterator> selected_layers () const;

  /**
   *  @brief Sets the layers that are selected in the layer browser
   */
  void set_selected_layers (const std::vector<lay::LayerPropertiesConstIterator> &sel);

  /**
   *  @brief Get the index of the active cellview (shown in hierarchy browser)
   */
  int active_cellview_index () const;

  /**
   *  @brief Get the index of the active cellview (shown in hierarchy browser)
   */
  const lay::CellView &active_cellview () const;

  /**
   *  @brief Gets a cellview reference to the active cellview
   */
  lay::CellViewRef active_cellview_ref ();

  /**
   *  @brief Select a certain cellview for the active one
   */
  void set_active_cellview_index (int index);

  /**
   *  @brief Cell paths of the selected cells
   *
   *  The current cell is the one highlighted in the browser with the focus rectangle. The
   *  current path is returned for the cellview given by cv_index.
   */
  void selected_cells_paths (int cv_index, std::vector<cell_path_type> &paths) const;

  /**
   *  @brief Cell path of the current cell
   *
   *  The current cell is the one highlighted in the browser with the focus rectangle. The
   *  current path is returned for the cellview given by cv_index.
   */
  void current_cell_path (int cv_index, cell_path_type &path) const;

  /**
   *  @brief Cell path of the current cell
   *
   *  This method version is provided for automation purposes mainly.
   */
  cell_path_type get_current_cell_path (int cv_index) const
  {
    cell_path_type r;
    current_cell_path (cv_index, r);
    return r;
  }

  /**
   *  @brief Cell path of the current cell in the active cellview
   *
   *  This is a convenience function returning the path for the active cellview.
   */
  void current_cell_path (cell_path_type &path) const
  {
    current_cell_path (active_cellview_index (), path);
  }

  /**
   *  @brief Set the path to the current cell
   *
   *  The current cell is the one highlighted in the browser with the focus rectangle. The
   *  cell given by the path is highlighted and scrolled into view.
   */
  void set_current_cell_path (int cv_index, const cell_path_type &path);

  /**
   *  @brief Set the path to the current cell is the current cellview
   *
   *  This is a convenience function setting the path for the active cellview.
   */
  void set_current_cell_path (const cell_path_type &path)
  {
    set_current_cell_path (active_cellview_index (), path);
  }

  /**
   *  @brief Bookmark the current view under the given name
   */
  void bookmark_view (const std::string &name);

  /**
   *  @brief Asks for a bookmark name and bookmark the current view under this name
   */
  void bookmark_current_view ();

  /**
   *  @brief Show the bookmark management form
   */
  void manage_bookmarks ();

  /**
   *  @brief Obtain the bookmarks list
   */
  const BookmarkList &bookmarks () const
  {
    return m_bookmarks;
  }

  /**
   *  @brief Set the bookmarks list
   */
  void bookmarks (const BookmarkList &b);

  /**
   *  @brief Open the RDB browser for a given database and associated cv index
   */
  void open_rdb_browser (int rdb_index, int cv_index);

  /**
   *  @brief Open the L2NDB browser for a given database and associated cv index
   */
  void open_l2ndb_browser (int l2ndb_index, int cv_index);

  /**
   *  @brief Gets the container with the layer control panel
   */
  QWidget *layer_control_frame () 
  {
    return mp_control_frame;
  }

  /**
   *  @brief Gets the layer control panel
   */
  lay::LayerControlPanel *control_panel ()
  {
    return mp_control_panel;
  }

  /**
   *  @brief Gets the container with the hierarchy control panel
   */
  QWidget *hierarchy_control_frame () 
  {
    return mp_hierarchy_frame;
  }

  /**
   *  @brief Gets the hierarchy panel
   */
  lay::HierarchyControlPanel *hierarchy_panel ()
  {
    return mp_hierarchy_panel;
  }

  /**
   *  @brief Gets the container with the libraries view
   */
  QWidget *libraries_frame ()
  {
    return mp_libraries_frame;
  }

  /**
   *  @brief Gets the container with the bookmarks view
   */
  QWidget *bookmarks_frame ()
  {
    return mp_bookmarks_frame;
  }

  /**
   *  @brief Gets the container with the editor options
   */
  QWidget *editor_options_frame ()
  {
    return mp_editor_options_frame;
  }

  /**
   *  @brief Deliver a size hint (reimplementation of QWidget)
   */
  QSize sizeHint () const;

  /**
   *  @brief An event signalling that the view is going to close
   */
  tl::Event close_event;

  /**
   *  @brief An event signalling that the view is going to become visible
   */
  tl::Event show_event;

  /**
   *  @brief An event signalling that the view is going to become invisible
   */
  tl::Event hide_event;

public slots:
  /**
   *  @brief Store the current state on the "previous states" stack
   */
  void store_state ()
  {
    LayoutViewBase::store_state ();
  }

  /**
   *  @brief Cancels all edit operations, clears the selection and resets the mode to "Select"
   */
  void cancel_esc ()
  {
    LayoutViewBase::cancel_esc ();
  }

  /**
   *  @brief Cancels all edit operations and clears the selection
   */
  void cancel ()
  {
    LayoutViewBase::cancel ();
  }

  /**
   *  @brief Cancels all edit operations but maintains selection
   */
  void cancel_edits ()
  {
    LayoutViewBase::cancel_edits ();
  }

  /**
   *  @brief Select all levels of hierarchy available
   */
  void max_hier ()
  {
    LayoutViewBase::max_hier ();
  }

  /**
   *  @brief Stop activities like shape browser and redrawing thread
   */
  void stop ()
  {
    LayoutViewBase::stop ();
  }

  /**
   *  @brief Stop redrawing thread
   */
  void stop_redraw ()
  {
    LayoutViewBase::stop_redraw ();
  }

  /** 
   *  @brief Select last display state
   */
  void prev_display_state ()
  {
    LayoutViewBase::prev_display_state ();
  }

  /** 
   *  @brief Select next display state
   */
  void next_display_state ()
  {
    LayoutViewBase::next_display_state ();
  }

  /**
   *  @brief Ensure the selection is visible 
   */
  void ensure_selection_visible ()
  {
    LayoutViewBase::ensure_selection_visible ();
  }

  /** 
   *  @brief Select a cell by index for a certain cell view
   *
   *  This will be forwarded to select_cell or select_cell_fit depending
   *  on the m_fit_new_cell flag.
   */
  void select_cell_dispatch (const cell_path_type &path, int cellview_index)
  {
    LayoutViewBase::select_cell_dispatch (path, cellview_index);
  }

  /**
   *  @brief Called when the current layer changed
   */
  void current_layer_changed_slot (const lay::LayerPropertiesConstIterator &iter)
  {
    LayoutViewBase::current_layer_changed_slot (iter);
  }

  //  zoom slots
  void zoom_fit ()
  {
    LayoutViewBase::zoom_fit ();
  }

  void zoom_fit_sel ()
  {
    LayoutViewBase::zoom_fit_sel ();
  }

  void zoom_in ()
  {
    LayoutViewBase::zoom_in ();
  }

  void zoom_out ()
  {
    LayoutViewBase::zoom_out ();
  }

  void pan_left ()
  {
    LayoutViewBase::pan_left ();
  }

  void pan_up ()
  {
    LayoutViewBase::pan_up ();
  }

  void pan_right ()
  {
    LayoutViewBase::pan_right ();
  }

  void pan_down ()
  {
    LayoutViewBase::pan_down ();
  }

  void pan_left_fast ()
  {
    LayoutViewBase::pan_left_fast ();
  }

  void pan_up_fast ()
  {
    LayoutViewBase::pan_up_fast ();
  }

  void pan_right_fast ()
  {
    LayoutViewBase::pan_right_fast ();
  }

  void pan_down_fast ()
  {
    LayoutViewBase::pan_down_fast ();
  }

  //  called by children and owner
  void redraw ()
  {
    LayoutViewBase::redraw ();
  }

  void redraw_layer (unsigned int index)
  {
    LayoutViewBase::redraw_layer (index);
  }

  void redraw_deco_layer ()
  {
    LayoutViewBase::redraw_deco_layer ();
  }

  void redraw_cell_boxes ()
  {
    LayoutViewBase::redraw_cell_boxes ();
  }

  void layer_tab_changed ()
  {
    LayoutViewBase::layer_tab_changed ();
  }

  void layer_order_changed ()
  {
    LayoutViewBase::layer_order_changed ();
  }

  void timer ()
  {
    LayoutViewBase::timer ();
  }

  void min_hier_changed (int i)
  {
    LayoutViewBase::min_hier_changed (i);
  }

  void max_hier_changed (int i)
  {
    LayoutViewBase::max_hier_changed (i);
  }

  void deactivate_all_browsers ();

private:
  //  event handlers used to connect to the layout object's events
  void signal_hier_changed ();
  void signal_bboxes_from_layer_changed (unsigned int cv_index, unsigned int layer_index);
  void signal_bboxes_changed ();
  void signal_prop_ids_changed ();
  void signal_layer_properties_changed ();
  void signal_cell_name_changed ();
  void signal_annotations_changed ();
  void signal_plugin_enabled_changed ();
  void signal_apply_technology (lay::LayoutHandle *layout_handle);

private slots:
  void active_cellview_changed (int index)
  {
    LayoutViewBase::active_cellview_changed (index);
  }

  void active_library_changed (int index)
  {
    LayoutViewBase::active_library_changed (index);
  }

  void side_panel_destroyed ();

signals:
  /**
   *  @brief This signal is emitted when the title changes
   */
  void title_changed ();

  /**
   *  @brief This signal is emitted when the "dirty" flag changes
   */
  void dirty_changed ();

  /**
   *  @brief This signal is emitted when the view wants to show a message for the given time (of infinitely for ms == 0)
   */
  void show_message (const std::string &s, int ms);

  /**
   *  @brief This signal is emitted when the view wants to indicate a mouse position change
   */
  void current_pos_changed (double x, double y, bool dbu_units);

  /**
   *  @brief This signal is emitted when the view wants to clear the mouse position
   */
  void clear_current_pos ();

  /**
   *  @brief This signal is sent when the "edits_enabled" state has changed
   */
  void edits_enabled_changed ();

  /**
   *  @brief This signal is sent when the view wants to update the menu
   */
  void menu_needs_update ();

  /**
   *  @brief The view initiated a mode change
   */
  void mode_change (int m);

  /**
   *  @brief The current layer changed
   */
  void current_layer_changed (const lay::LayerPropertiesConstIterator &l);

private:
  QTimer *mp_timer;
  QFrame *mp_left_frame;
  lay::LayerControlPanel *mp_control_panel;
  lay::HierarchyControlPanel *mp_hierarchy_panel;
  lay::LibrariesView *mp_libraries_view;
  lay::BookmarksView *mp_bookmarks_view;
  QWidget *mp_control_frame, *mp_hierarchy_frame, *mp_libraries_frame, *mp_bookmarks_frame;
  lay::EditorOptionsFrame *mp_editor_options_frame;
  QSpinBox *mp_min_hier_spbx;
  QSpinBox *mp_max_hier_spbx;
  BookmarkList m_bookmarks;
  bool m_active_cellview_changed_event_enabled;

  tl::DeferredMethod<lay::LayoutView> dm_prop_changed;
  tl::DeferredMethod<lay::LayoutView> dm_setup_editor_option_pages;

  void init (db::Manager *mgr, QWidget *parent);
  void init_menu ();
  void do_setup_editor_options_pages ();
  void activate ();
  void deactivate ();

  bool eventFilter(QObject *obj, QEvent *ev);
  void showEvent (QShowEvent *);
  void hideEvent (QHideEvent *);
};

}

#endif
