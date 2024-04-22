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
  lay::MainWindow::instance()->exit();
}
static tl::RegisteredClass<lay::PluginDeclaration>
    kapi(new KapiPluginDeclaration());
