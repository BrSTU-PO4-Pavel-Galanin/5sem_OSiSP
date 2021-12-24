#ifndef GPI_HELPER_CLASS_GLOBAL_H
#define GPI_HELPER_CLASS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GPI_HELPER_CLASS_LIBRARY)
#  define GPI_HELPER_CLASS_EXPORT Q_DECL_EXPORT
#else
#  define GPI_HELPER_CLASS_EXPORT Q_DECL_IMPORT
#endif

#endif // GPI_HELPER_CLASS_GLOBAL_H