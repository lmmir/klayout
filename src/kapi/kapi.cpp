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
  qDebug() << mainWindow->views() << mainWindow->current_view()->cellviews()
           << mainWindow->current_view()->active_cellview_index();
  auto cellViewIndex = mainWindow->current_view()->active_cellview_index();
  auto &cellView = mainWindow->current_view()->cellview(cellViewIndex);
  qDebug() << cellView.cell()->layout() << &cellView->layout();

  qDebug() << cellView->layout().cells();
  qDebug() << "current top cell's:" << cellView.cell()->layers()
           << ", all layers:" << cellView->layout().layers();

  {

    db::LayerProperties lp = cellView->layout().get_properties(0);
    qDebug() << lp.layer << lp.datatype << QString::fromStdString(lp.name);
    //  collect valid layers
    std::vector<lay::LayerPropertiesConstIterator> valid_sel;
    std::set<std::pair<db::Layout *, unsigned int>> valid_layers;
    //    for (std::vector<lay::LayerPropertiesConstIterator>::const_iterator si
    //    =
    //             sel.begin();
    //         si != sel.end(); ++si)
    {
      int cv_index = cellViewIndex;

      //      if (!(*si)->has_children() && cv_index >= 0 &&
      //          int(view()->cellviews()) > cv_index && (*si)->layer_index() >=
      //          0 && cv.is_valid()) {
      //        valid_sel.push_back(*si);
      //        valid_layers.insert(
      //            std::make_pair(&cv->layout(), (*si)->layer_index()));
      //      }
    }
  }
}
static tl::RegisteredClass<lay::PluginDeclaration>
    kapi(new KapiPluginDeclaration());
