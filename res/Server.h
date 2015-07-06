#if !defined(AFX_SERVER_H__8457F962_E568_472B_9F6C_9105561FD267__INCLUDED_)
#define AFX_SERVER_H__8457F962_E568_472B_9F6C_9105561FD267__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Server.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CServer dialog

class CServer : public CDialog
{
// Construction
public:
	CServer(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CServer)
	enum { IDD = IDD_DIALOG1 };
	CString	m_Port;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServer)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CServer)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVER_H__8457F962_E568_472B_9F6C_9105561FD267__INCLUDED_)
