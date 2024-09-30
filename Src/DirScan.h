/**
 *  @file DirScan.h
 *
 *  @brief Declaration of DirScan module (see DirScan function)
 */ 
// ID line follows -- this is updated by SVN
// $Id: DirScan.h 5646 2008-07-20 16:22:24Z jtuc $

#ifndef DirScan_h_included
#define DirScan_h_included

class CDiffContext;
class DiffItemList;
class PathContext;
class IAbortable;
struct DiffFuncStruct;

int DirScan_GetItems(const PathContext &paths, const String &leftsubdir, const String &rightsubdir, DiffFuncStruct *myStruct,
		bool casesensitive, int depth);

int DirScan_CompareItems(DiffFuncStruct *);
int DirScan_CompareRequestedItems(DiffFuncStruct *);

void DirScan_InitializeDefaultCodepage();

#endif // DirScan_h_included
