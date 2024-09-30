/////////////////////////////////////////////////////////////////////////////
//
//    WinMerge: An interactive diff/merge utility
//    Copyright (C) 1997 Dean P. Grimm
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
/////////////////////////////////////////////////////////////////////////////

#ifndef _CLEAR_CASE_CMD_LINE_PARSER_INCLUDED_
#define _CLEAR_CASE_CMD_LINE_PARSER_INCLUDED_

/** 
 * @file  ClearCaseCmdLineParser.h
 *
 * @brief ClearCaseCmdLineParser class decleration.
 *
 */

// ID line follows -- this is updated by SVN
// $Id: ClearCaseCmdLineParser.h 5297 2008-04-14 20:39:12Z kimmov $

#include "CmdLineParser.h"
#include "UnicodeString.h"

/**
 * @brief Rational ClearCase's command line parser.
 *
 * This parser is able to parse ClearCase external tools' command line, both
 * compare and merge.
 */
class ClearCaseCmdLineParser : public CmdLineParser
{
public:
	ClearCaseCmdLineParser(MergeCmdLineInfo& CmdLineInfo, const TCHAR *szExeName);
	virtual ~ClearCaseCmdLineParser() { }

	virtual void ParseParam(const TCHAR* pszParam, BOOL bFlag, BOOL bLast);

private:
	bool m_bDesc;     /**< File's description text given? */
	bool m_bBaseFile; /**< Files' common ancestor. Used till we'll have a 3-ways merge. */
	bool m_bOutFile;  /**< Out file given? */

	String m_sBaseFile;  /**< Base file path. */
	String m_sBaseDesc;  /**< Base file description. */
	String m_sOutFile;   /**< Out file path. */
};

#endif // _CLEAR_CASE_CMD_LINE_PARSER_INCLUDED_
