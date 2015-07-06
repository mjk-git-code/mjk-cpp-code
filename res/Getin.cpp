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

/////////////////////////////////////////////////////////////////////////////
// Getin dialog


Getin::Getin(CWnd* pParent /*=NULL*/)
	: CDialog(Getin::IDD, pParent)
{
	//{{AFX_DATA_INIT(Getin)
	m_Port = _T("");
	m_ip = _T("");
	//}}AFX_DATA_INIT
}


void Getin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Getin)
	DDX_Text(pDX, PORT, m_Port);
	DDX_Text(pDX, IP, m_ip);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Getin, CDialog)
	//{{AFX_MSG_MAP(Getin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Getin message handlers

void Getin::OnOK() 
{
	UINT k;
	k=atoi(m_Port);
	if(k<1 || k>60000)
	{
		MessageBox("输入端口无效，采用默认端口","错误");
		m_Port="100";
	}
	CDialog::OnOK();
}
