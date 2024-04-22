#ifndef KAPI_GLOBAL_H
#define KAPI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(KAPI_LIBRARY)
#define KAPI_EXPORT Q_DECL_EXPORT
#else
#define KAPI_EXPORT Q_DECL_IMPORT
#endif

#endif // KAPI_GLOBAL_H
