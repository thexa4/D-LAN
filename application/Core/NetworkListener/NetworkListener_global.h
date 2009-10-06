#ifndef NETWORKLISTENER_GLOBAL_H
#define NETWORKLISTENER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NETWORKLISTENER_LIBRARY)
#  define NETWORKLISTENERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NETWORKLISTENERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NETWORKLISTENER_GLOBAL_H