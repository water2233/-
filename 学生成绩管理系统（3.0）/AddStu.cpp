// AddStu.cpp : implementation file
//

#include "stdafx.h"
#include "OverStudentManage.h"
#include "AddStu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddStu dialog


CAddStu::CAddStu(CWnd* pParent /*=NULL*/)
	: CDialog(CAddStu::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddStu)
	m_StudentName1 = _T("");
	m_StudentId = _T("");
	m_StudentSex = _T("");
	m_StudentClass = _T("");
	m_StudentPhone = _T("");
	m_StudentAddr = _T("");
	//}}AFX_DATA_INIT
}


void CAddStu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddStu)
	DDX_Text(pDX, IDC_EDIT1, m_StudentName1);
	DDX_Text(pDX, IDC_EDIT2, m_StudentId);
	DDX_Text(pDX, IDC_EDIT3, m_StudentSex);
	DDX_Text(pDX, IDC_EDIT4, m_StudentClass);
	DDX_Text(pDX, IDC_EDIT5, m_StudentPhone);
	DDX_Text(pDX, IDC_EDIT7, m_StudentAddr);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddStu, CDialog)
	//{{AFX_MSG_MAP(CAddStu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddStu message handlers

void CAddStu::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
