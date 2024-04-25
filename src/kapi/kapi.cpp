#include "kapi.h"
#include "layMainWindow.h"
#include <QDebug>
#include <QWebSocket>
struct KapiPluginDeclaration::Private {
  QWebSocketServer *websocketServer;
};

void KapiPluginDeclaration::declaration() {}

KapiPluginDeclaration::KapiPluginDeclaration() {
  ;
  qDebug() << __FUNCTION__;
}

KapiPluginDeclaration::~KapiPluginDeclaration() {}

lay::Plugin *KapiPluginDeclaration::create_plugin(db::Manager *,
                                                  lay::Dispatcher *,
                                                  lay::LayoutViewBase *) const {
  ;
  qDebug() << __FUNCTION__;
  return 0;
}

void KapiPluginDeclaration::initialize(lay::Dispatcher *) {
  ;
  qDebug() << __FUNCTION__;
}

void KapiPluginDeclaration::initialized(lay::Dispatcher *) {
  ;
  qDebug() << __FUNCTION__;
  d.reset(new Private);
  d->websocketServer =
      new QWebSocketServer("kapi", QWebSocketServer::NonSecureMode);
  connect(d->websocketServer, &QWebSocketServer::newConnection, this,
          &KapiPluginDeclaration::slotNewConnection);

  d->websocketServer->listen(QHostAddress::Any, 50080);
}

void KapiPluginDeclaration::uninitialize(lay::Dispatcher *) {}

void KapiPluginDeclaration::slotNewConnection() {
  QWebSocket *websocket = d->websocketServer->nextPendingConnection();
  connect(websocket, &QWebSocket::textMessageReceived, this,
          &KapiPluginDeclaration::slotTextMessageReceived);
  qDebug() << __FUNCTION__;
}

void KapiPluginDeclaration::slotTextMessageReceived(const QString &message) {

  qDebug() << message;
  auto mainWindow = lay::MainWindow::instance();
  if (mainWindow->current_view() == 0)
    return;
  lay::LayoutView *layoutView = mainWindow->current_view();
  qDebug() << mainWindow->views() << layoutView->cellviews()
           << layoutView->active_cellview_index();

  auto cellViewIndex = layoutView->active_cellview_index();

  auto &cellView = layoutView->cellview(cellViewIndex);
  auto dbu = cellView->layout().dbu();

  qDebug() << "cellViewIndex :" << cellViewIndex
           << cellView.cell_index(); // the top cell index
  qDebug() << "cells:" << cellView->layout().cells();
  {
    auto itCell = cellView->layout().begin();
    for (; itCell != cellView->layout().end(); ++itCell) {

      qDebug() << itCell->layers();
    }
  }

  {
    auto itCell = cellView.cell()->begin(); // get the first child cell
    while (!itCell.at_end()) {

      qDebug() << "itCell->cell_index():" << itCell->cell_index();
      ++itCell;
    }
  }

  qDebug() << cellView.cell()->layout() << &cellView->layout();

  qDebug() << "current top cell's:" << cellView.cell()->layers()
           << ", all layers:" << cellView->layout().layers();

  {

    int layIndex = -1;

    db::LayerIterator layerIterator = cellView->layout().begin_layers();
    for (; layerIterator != cellView->layout().end_layers(); ++layerIterator) {
      layIndex = (*layerIterator).first;
      // 1个layer 可以关联多个cell
      auto itLayer = cellView->layout().begin_layers();
      auto itCell = cellView->layout().begin();
      size_t shapesCount = 0;
      for (; itCell != cellView->layout().end(); ++itCell) {
        auto &shapes =
            cellView->layout().cell(itCell->cell_index()).shapes(layIndex);
        qDebug() << "shapes:" << shapes.size();
        auto it = shapes.begin(db::ShapeIterator::All);
        shapesCount = shapesCount + shapes.size();
        qDebug() << "shapes.size():" << shapes.size();
      }

      {
        lay::LayerPropertiesConstIterator it(layoutView->get_properties());
        while (!it.at_end()) {
          qDebug() << "it->layer_index():" << it->layer_index()
                   << it->cellview_index();
          if (it->layer_index() == layIndex) {
            layoutView->delete_layer(it); //删除ui， 如果db ，add 会重新添加
            break;
          }
          ++it;
        }
        cellView->layout().delete_layer(layIndex); //删除db， 如果ui 有则灰色。
      }
      break;
    }

    //    db::Box box(39597500, 31211300, 39675000, 31260300);
    //    cellView->layout().cell(cellView.cell_index()).shapes(layIndex).insert(box);

    return;
    db::LayerProperties lp = cellView->layout().get_properties(0);
    qDebug() << lp.layer << lp.datatype << QString::fromStdString(lp.name);

    // cellView->layout().cell(cellView.cell_index()).shapes()
    //  collect valid layers
    std::vector<lay::LayerPropertiesConstIterator> valid_sel;
    std::set<std::pair<db::Layout *, unsigned int>> valid_layers;
    //    for (std::vector<lay::LayerPropertiesConstIterator>::const_iterator
    //    si
    //    =
    //             sel.begin();
    //         si != sel.end(); ++si)
    {
      int cv_index = cellViewIndex;

      //      if (!(*si)->has_children() && cv_index >= 0 &&
      //          int(view()->cellviews()) > cv_index && (*si)->layer_index()
      //          >= 0 && cv.is_valid()) {
      //        valid_sel.push_back(*si);
      //        valid_layers.insert(
      //            std::make_pair(&cv->layout(), (*si)->layer_index()));
      //      }
    }
  }
}
static tl::RegisteredClass<lay::PluginDeclaration>
    kapi(new KapiPluginDeclaration());
