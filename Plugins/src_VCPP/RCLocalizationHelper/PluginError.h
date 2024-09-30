/** 
 * @file  PluginError.h
 *
 * @brief Declaration of global Plugin Error functions
 *
 * These display a string (either specified or from string resouce)
 * via a MessageBox.
 * @todo These need to be altered to store error in property,
 * when Plugin Errors are implemented.
 *
 */
// RCS ID line follows -- this is updated by CVS
// $Id: PluginError.h,v 1.2.2.2 2006/08/08 14:01:21 galh Exp $

#ifndef PluginError_h_included
#define PluginError_h_included

void PluginError(int id);
void PluginErrorFmt(int idfmt, ...);


#endif // PluginError_h_included
