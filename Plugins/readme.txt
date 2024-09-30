2006-08-10 Kimmo
 Revert some DisplayXML plugin changes to get it compile in 2.4 branch.
  Plugins/DisplayXMLFiles: DisplayXMLFiles.dsp DisplayXMLFiles.dsw DisplayXMLFiles.rc WinMergeScript.cpp
 New compiled plugin DLLs
  Plugins/dlls: DisplayBinaryFiles.dll DisplayXMLFiles.dll 

2006-08-09 Galh
 Merged lots of plugin changes from CVS trunk (2.5.x)

2006-02-19 Perry
 PATCH: [ 1423780 ] Update 2.4 DisplayBinaryFiles plugin to cvs trunk
  Plugins\dlls: DisplayBinaryFiles.dll (v1.0.2.0)
   Copied from cvs trunk: (ANSI) (VC6sp6) Release MinDependency, v1.0.2.0
  Plugins\src_VCPP\DisplayBinaryFiles: 
   DisplayBinaryFiles.dsp DisplayBinaryFiles.rc
  
2006-02-03 Perry
 PATCH [ 1372575 ] Fix link for DisplayXmlFiles plugin
  Plugins\dlls: DisplayXMLFiles.dll (v1.0.1.0)
   Compiled from current CVS 2.4 branch (ANSI) (VC6sp6) Release MinDependency, v1.0.1.0
  Plugins\src_VCPP\DisplayXMLFiles: 
   DisplayXMLFiles.dsp DisplayXMLFiles.rc

2006-01-02 Perry
 BUG: [ 1394707 ] Copy&paste compilation error in IgnoreFieldsComma
  Fix include to say IgnoreFieldsComma.h (not IgnoreFieldsTab.h)
  Plugins\src_VCPP\IgnoreFieldsComma\WinMergeScript.cpp

2005-12-30 Perry
 BUG: [ 1372580 ] DisplayBinaryFiles.dll outdated in cvs tree
 Updated DisplayBinaryFiles.dll plugin
 Plugins\dlls:
  DisplayBinaryFiles.dll (v1.0.1.0)
   Compiled from current CVS 2.4 branch (ANSI) (VC6sp6) Release MinDependency, v1.0.1.0

2005-12-15 Kimmo
 Add DisplayMSExcelFiles to list_of_sources.txt
  Plugins/list_of_sources.txt

2005-09-21 Christian
 PATCH: [ 1252903 ] Plugin to display MS Word files
  Plugins/list_of_sources.txt
  New directory: Plugins\src_VB\CompareMSWordFiles
  New file: Plugins\dlls\CompareMSWordFiles.dll

2005-09-01 Kimmo
 PATCH: [ 1277316 ] New layout for list_of_sources.txt
  Submitted by Tim
  Plugins: list_of_sources.txt

2005-08-16 Tim
 PATCH: [ 1215964 ] Rename 'list.txt' to 'Plugins.txt'
  New file: Plugins\dlls\Plugins.txt
  Removed file: Plugins\dlls\list.txt

2005-08-06 Kimmo
 PATCH: [ 1150083 ] plugin to filter C-style comments CPP/JS/PHP
  Submitted by daemonui
  Plugins/list_of_sources.txt
  New directory: Plugins\src_VCPP\IgnoreCommentsC
  New file: Plugins\dlls\IgnoreCommentsC.dll

2005-07-25 Perry
 BUG: [ 1244540 ] DisplayXMLFiles doesn't compile
  src_VCPP\DisplayXMLFiles: WinMergeScript.cpp
 BUG: [ 1244546 ] DisplayXMLFiles linking looks wrong
  src_VCPP\DisplayXMLFiles: DisplayXMLFiles.dsp
 BUG: [ 1244536 ] DisplayXMLFiles missing from Plugins/dlls
  Plugins\dlls: new file DisplayXMLFiles.dll

2005-06-27 Christian
 PATCH: [ 1219818 ] Plugin to display XML files
  Two new dirs added:
  Src\ExpatLib - This is the expat xml parser version 1.95.8
  Plugins\src_VCPP\DisplayXMLFiles - A plugin which uses the expat parser

2005-06-02 Tim
 RFE: [ 1017179 ] Plugin readme's as HTML?
  Plugins: remove files readme_developpers.txt syntax.txt

2005-05-21 Perry
 PATCH [ 1206215 ] Fix DisplayBinaryFiles dll source to compile
 BUG [ 1206209 ] DisplayBinaryFiles.dll does not compile under MSVC7 (2003)
 BUG [ 1205960 ] DisplayBinaryFiles code does not compile in debug
  Fix compilation for DisplayBinaryFiles, for both MSVC6 (debug) and MSVC7
  DisplayBinaryFiles: DisplayBinaryFiles.dsp typeinfoex.h WinMergeScript.cpp
   new file ChangeLog.txt
 PATCH [ 1206256 ] Fix DisplayBinaryFiles plugin to handle unicode files
  DisplayBinaryFiles: ChangeLog.txt DisplayBinaryFiles.dsp DisplayBinaryFiles.rc
   WinMergeScript.cpp
   new files unicheck.cpp & unicheck.h

2005-01-27 Kimmo
 PATCH: [ 1109405 ] Binary diff is totally broken (buffer overwrite)
  Submitted by Jim Fougeron
  Plugins\src_VCPP\DisplayBinaryFiles: WinMergeScript.cpp
  Plugins\dlls: DisplayBinaryFiles.dll

2004-06-21 Laoran
 PATCH: [ 972299 ] Unpacker for comparing binary files
  Plugins: list of sources.txt
  Plugins\dlls add: DisplayBinaryFiles.dll
  Plugins\dlls: list.txt
  Plugins\src_VCPP\DisplayBinaryFiles add: all files

2004-06-13 Laoran
 plugins doc : new sections, how to write and debug plugins
  Plugins: readme_developpers.txt syntax.txt

2004-06-10 Laoran
 PATCH: [ 969667 ] Ignore positions/tabbed columns (plugins)
  Plugins: list of sources.txt
  Plugins\dlls add: IgnoreColumns.dll IgnoreFieldsComma.dll IgnoreFieldsTab.dll 
  Plugins\dlls: list.txt
  Plugins\src_VCPP\IgnoreColumns add: all files
  Plugins\src_VCPP\IgnoreFieldsComma add: all files
  Plugins\src_VCPP\IgnoreFieldsTab add: all files

2004-06-10 Laoran
 update plugins text doc :
  Plugins: readme_developpers.txt syntax.txt
  Plugins/dlls Add: readme_users.txt

2004-04-08 Laoran
 Creation of 'readme_developpers.txt' and of a 'readme.txt' to log patches
 Rename 'list of sources.txt' to 'list_of_sources.txt'
  Plugins: list_of_sources.txt readme.txt readme_developpers.txt

2004-04-03 Laoran
 PATCH: [ 923044 ] Partial compare large files
  Plugins: list of sources.txt
  Plugins\src_VCPP\WatchBeginningOfLog add: all files
  Plugins\src_VCPP\WatchEndOfLog add: all files

2004-04-02 Laoran
 Change plugins event title 'CONTEXT_MENU' -> 'EDITOR_SCRIPT'
  Src: FileTransform.cpp FileTransform.h MergeEditView.cpp Plugins.cpp Plugins.h
  Plugins/dlls: editor addin.sct insert datetime.sct list.txt
  Plugins: list of sources.txt readme.txt syntax.txt
  Plugins/src_VB/ToUpper: WinMergeScript.cls

2004-03-24 Laoran
 HideFirstLetter plugin : fix : open input and output file as binary 
  Plugins/HideFirstLetter: WinMergeScript.cpp

2004-01-18 Kimmo
 PATCH: [ 872413 ] UnpackDFM TestStreamFormat
  Submitted by Michael Richter
  Plugins/Delphi/UnpackFDM: UnpackFDM.dpr UnpackFDMLib_TLB.pas
   WinMergeUnit.pas
  Plugins/dlls: UnpackFDM.dll

2003-12-17 Laoran
 update plugin docs and examples, consequence of patch #853147 
  plugins: list of sources.txt readme.txt syntax.txt
  plugins\dlls: RCLocalizationHelper.dll list.txt
  plugins\src_VB\IgnoreTwoFirstCharsOrder: WinMergeScript.cls
  plugins\src_VCPP\RCLocalizationHelper: RCLocalizationHelper.idl WinMergeScript.cpp WinMergeScript.h

2003-11-10 Laoran
 PATCH: [ 834113 ] Plugin written in Delphi
 submitted by Bill Binder
  Plugins/Delphi/UnpackFDM add: readme.txt UnpackFDM.dof UnpackFDM.dpr UnpackFDM.tlb UnpackFDMLib_TLB.pas WinMergeUnit.pas
  Plugins/dlls add: UnpackFDM.dll

2003-11-04 Laoran
 adapt plugins filters to the syntax of regular expressions
  Plugins\dlls: RCLocalizationHelper.dll
  Plugins\src\HideFirstLetter: WinMergeScript.cpp
  Plugins\src\HideLastLetter: WinMergeScript.cls
  Plugins\src\IgnoreTwoFirstCharsOrder: WinMergeScript.cls
  Plugins\src\RCLocalizationHelper: WinMergeScript.cpp

