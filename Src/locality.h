/** 
 * @file  locality.h
 *
 * @brief Declaration of helper functions involving locale
 */
// RCS ID line follows -- this is updated by CVS
// $Id: locality.h 3571 2006-09-16 07:38:48Z kimmov $

#ifndef locality_h_included
#define locality_h_included

namespace locality {

CString NumToLocaleStr(int n);
CString NumToLocaleStr(__int64 n);
CString GetLocaleStr(const CString & str, int decimalDigits = 0);

};

#endif // locality_h_included
