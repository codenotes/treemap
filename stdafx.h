// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__4E806421_95F5_437C_97F1_05C6A5875425__INCLUDED_)
#define AFX_STDAFX_H__4E806421_95F5_437C_97F1_05C6A5875425__INCLUDED_

#define WINVER            0x0501
#define _WIN32_WINNT      0x0501
#define _WIN32_IE         0x0600
#define _RICHEDIT_VER     0x0200

#define _CRT_SECURE_NO_WARNINGS

#ifdef _DEBUG
   #define NEW_INLINE_WORKAROUND new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
   #define new NEW_INLINE_WORKAROUND
#endif // _DEBUG



//#define WINVER 0x0602
//#define _WIN32_WINNT 0x0602

#define _WIN32_WINNT 0x0A00
#define _USING_V110_SDK71_
#define _ATL_XP_TARGETING


//#define NTDDI_VERSION NTDDI_VISTA
//#define _WIN32_WINNT _WIN32_WINNT_VISTA
//#include "Shobjidl.h"


#include <atlbase.h>
#include <atlapp.h>

#include "atlshellextbase.h"
class CMyAppModule : public CAppModule
{
public:
   CShellMalloc m_Allocator;
};
extern CMyAppModule _Module;
#include "atlshellext.h"

#include <atlwin.h>

#include <atlframe.h>
#include <atlmisc.h>
#include <atlctrls.h>
#include <atlctrlx.h>
#include <atldlgs.h>
#include <atlsplit.h>
#include <atlctrlw.h>

#include <math.h>
#include "C:\Users\gbrill\Dropbox\usr\include\GregUtils\OutputDebugTuple.h"
//greg
//#define WINVER 0x0602
//#define _WIN32_WINNT 0x0602

//#define _WIN32_WINNT 0x0A00
//#define _USING_V110_SDK71_
//#define _ATL_XP_TARGETING


//greg
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__4E806421_95F5_437C_97F1_05C6A5875425__INCLUDED_)
