//Próba gita !!

#ifndef CRUD_LIBRARY_GLOBAL_H
#define CRUD_LIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CRUD_LIBRARY_LIBRARY)
#  define CRUD_LIBRARY_EXPORT Q_DECL_EXPORT
#else
#  define CRUD_LIBRARY_EXPORT Q_DECL_IMPORT
#endif

#endif // CRUD_LIBRARY_GLOBAL_H
