#ifndef SINGLEINSTANCE_GLOBAL_H
#define SINGLEINSTANCE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SINGLEINSTANCE_LIBRARY)
#  define SINGLEINSTANCESHARED_EXPORT Q_DECL_EXPORT
#else
#  define SINGLEINSTANCESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SINGLEINSTANCE_GLOBAL_H
