// Getin.cpp : implementation file
//

#include "stdafx.h"
#include "program.h"
#include "Getin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


void CGetin::OnOK() 
{
	UINT k;
	k=atoi(m_Port);
	if(k<1 || k>60000)
	{
		MessageBox("����˿���Ч������Ĭ�϶˿�","����");
		m_Port="100";
	}
	CDialog::OnOK();
}
/////////////////////////////////////////////////////////////////////////////
// CGetin dialog


CGetin::CGetin(CWnd* pParent /*=NULL*/)
	: CDialog(CGetin::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGetin)
	m_IP = _T("");
	m_Port = _T("100");
	//}}AFX_DATA_INIT
}


void CGetin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGetin)
	DDX_Text(pDX, IDC_EDIT1, m_IP);
	DDX_Text(pDX, IDC_EDIT2, m_Port);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGetin, CDialog)
	//{{AFX_MSG_MAP(CGetin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGetin message handlers