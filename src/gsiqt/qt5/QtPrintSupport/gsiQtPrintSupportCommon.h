/**
 *  Common header for Qt binding definition library
 *
 *  DO NOT EDIT THIS FILE. 
 *  This file has been created automatically
 */

#include "tlDefs.h"

#if !defined(HDR_gsiQtPrintSupportCommon_h)
# define HDR_gsiQtPrintSupportCommon_h

# ifdef MAKE_GSI_QTPRINTSUPPORT_LIBRARY
#   define GSI_QTPRINTSUPPORT_PUBLIC           DEF_INSIDE_PUBLIC
#   define GSI_QTPRINTSUPPORT_PUBLIC_TEMPLATE  DEF_INSIDE_PUBLIC_TEMPLATE
#   define GSI_QTPRINTSUPPORT_LOCAL            DEF_INSIDE_LOCAL
# else
#   define GSI_QTPRINTSUPPORT_PUBLIC           DEF_OUTSIDE_PUBLIC
#   define GSI_QTPRINTSUPPORT_PUBLIC_TEMPLATE  DEF_OUTSIDE_PUBLIC_TEMPLATE
#   define GSI_QTPRINTSUPPORT_LOCAL            DEF_OUTSIDE_LOCAL
# endif

#define FORCE_LINK_GSI_QTPRINTSUPPORT GSI_QTPRINTSUPPORT_PUBLIC int _force_link_gsiQtPrintSupport_f (); int _force_link_gsiQtPrintSupport = _force_link_gsiQtPrintSupport_f ();

#endif