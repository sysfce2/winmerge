/** 
 * @file  locality.h
 *
 * @brief Declaration of helper functions involving locale
 */
// RCS ID line follows -- this is updated by CVS
// $Id: locality.h,v 1.1 2003/08/30 01:33:36 puddle Exp $

#ifndef locality_h_included
#define locality_h_included

namespace locality {

CString NumToLocaleStr(UINT n);
CString GetLocaleStr(const CString & str);

};

#endif // locality_h_included
