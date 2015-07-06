#if !defined(AFX_GETIN_H__7B04FB23_7346_412E_B3B2_4C6C9627C876__INCLUDED_)
#define AFX_GETIN_H__7B04FB23_7346_412E_B3B2_4C6C9627C876__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Getin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Getin dialog

class Getin : public CDialog
{
// Construction
public:
	Getin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Getin)
	enum { IDD = IDD_DIALOG2 };
	CString	m_Port;
	CString	m_ip;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Getin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Getin)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GETIN_H__7B04FB23_7346_412E_B3B2_4C6C9627C876__INCLUDED_)
