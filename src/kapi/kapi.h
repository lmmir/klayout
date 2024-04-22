#ifndef KAPI_H
#define KAPI_H
#include "kapi_global.h"
#include "layPlugin.h"
#include <QScopedPointer>
#include <QtWebSockets/QWebSocketServer>
class KAPI_EXPORT KapiPluginDeclaration : public lay::PluginDeclaration {

  // PluginDeclaration interface
public:
  static void declaration();
  KapiPluginDeclaration();
  ~KapiPluginDeclaration();
  lay::Plugin *create_plugin(db::Manager *, lay::Dispatcher *,
                             lay::LayoutViewBase *) const;

  void initialize(lay::Dispatcher *);
  void initialized(lay::Dispatcher *);
  void uninitialize(lay::Dispatcher *);
protected slots:
  void slotNewConnection();
  void slotTextMessageReceived(const QString &message);

private:
  struct Private;
  QScopedPointer<Private> d;
};

#endif // KAPI_H
