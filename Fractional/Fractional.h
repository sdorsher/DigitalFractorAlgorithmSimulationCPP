// Fractional.h : main header file for the FRACTIONAL application
//

#if !defined(AFX_FRACTIONAL_H__4CE2D144_F9E0_11D3_99CA_DFBA240B2162__INCLUDED_)
#define AFX_FRACTIONAL_H__4CE2D144_F9E0_11D3_99CA_DFBA240B2162__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFracApp:
// See Fractional.cpp for the implementation of this class
//

class CFracApp : public CWinApp
{
public:
	CFracApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFracApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFracApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRACTIONAL_H__4CE2D144_F9E0_11D3_99CA_DFBA240B2162__INCLUDED_)
