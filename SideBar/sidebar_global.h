#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SIDEBAR_LIB)
#  define SIDEBAR_EXPORT Q_DECL_EXPORT
# else
#  define SIDEBAR_EXPORT Q_DECL_IMPORT
# endif
#else
# define SIDEBAR_EXPORT
#endif
