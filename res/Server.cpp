// Server.cpp : implementation file
//

#include "stdafx.h"
#include "program.h"
#include "Server.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CServer dialog


CServer::CServer(CWnd* pParent /*=NULL*/)
	: CDialog(CServer::IDD, pParent)
{
	//{{AFX_DATA_INIT(CServer)
	m_Port = _T("100");
	//}}AFX_DATA_INIT
}


void CServer::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CServer)
	DDX_Text(pDX, IDC_EDIT1, m_Port);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CServer, CDialog)
	//{{AFX_MSG_MAP(CServer)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CServer message handlers

void CServer::OnOK() 
{
	// TODO: Add extra validation here
	UINT port;
	port=atoi(m_Port);
	if(port<1 || port>60000)
	{
		MessageBox("设置无效,端口依然没改变","错误!");
		m_Port="100";
	}
		
	CDialog::OnOK();
}
