/**
 * @file  ClipBoard.h
 *
 * @brief ClipBoard helper functions definitions.
 */
// ID line follows -- this is updated by SVN
// $Id: ClipBoard.h 4500 2007-09-02 14:27:18Z kimmov $

#ifndef _CLIPBOARD_H_
#define _CLIPBOARD_H_

BOOL PutToClipboard(LPCTSTR pszText, HWND currentWindowHandle);
BOOL GetFromClipboard(CString & text, HWND currentWindowHandle);
BOOL TextInClipboard();

#endif // _CLIPBOARD_H_
