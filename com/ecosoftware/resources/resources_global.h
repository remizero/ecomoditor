#ifndef RESOURCES_GLOBAL_H
#define RESOURCES_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESOURCES_LIBRARY)
#  define RESOURCESSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RESOURCESSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RESOURCES_GLOBAL_H
