/** 
 * @file  Environment.h
 *
 * @brief Declaration file for Environment-related routines.
 */
// ID line follows -- this is updated by SVN
// $Id: Environment.h 4855 2008-01-04 15:55:30Z kimmov $

#ifndef _ENVIRONMENT_H_
#define _ENVIRONMENT_H_

LPCTSTR env_GetTempPath(int * pnerr = NULL);
String env_GetTempFileName(LPCTSTR lpPathName, LPCTSTR lpPrefixString,
		int * pnerr = NULL);


#endif // _ENVIRONMENT_H_
