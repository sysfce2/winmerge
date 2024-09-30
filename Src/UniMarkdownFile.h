/**
 *  @file TempFile.h
 *
 *  @brief Declaration of UniMarkdownFile class.
 */
// ID line follows -- this is updated by SVN
// $Id: UniMarkdownFile.h 5406 2008-06-01 09:28:58Z kimmov $

#include "Common/UniFile.h"

class CMarkdown;

/**
 * @brief XML file reader class.
 */
class UniMarkdownFile : public UniMemFile
{
public:
	UniMarkdownFile();
	virtual BOOL ReadString(CString & line, CString & eol, bool * lossy);
	virtual void Close();
	virtual bool ReadBom();

protected:
	virtual bool DoOpen(LPCTSTR filename, DWORD dwOpenAccess,
		DWORD dwOpenShareMode, DWORD dwOpenCreationDispostion,
		DWORD dwMappingProtect, DWORD dwMapViewAccess);

private:
	void Move();

	int m_depth;
	bool m_bMove;
	LPBYTE m_transparent;
	CMarkdown *m_pMarkdown;
};
