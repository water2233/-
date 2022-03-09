// DataModify.cpp : implementation file
//

#include "stdafx.h"
#include "OverStudentManage.h"
#include "DataModify.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDataModify dialog


CDataModify::CDataModify(CWnd* pParent /*=NULL*/)
	: CDialog(CDataModify::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDataModify)
	m_ScoreChinese = _T("");
	m_ScoreEnglish = _T("");
	m_StudentId = _T("");
	m_ScoreMath = _T("");
	m_StudentName = _T("");
	//}}AFX_DATA_INIT
}


void CDataModify::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDataModify)
	DDX_Text(pDX, IDC_CHINESE, m_ScoreChinese);
	DDX_Text(pDX, IDC_ENGLISH, m_ScoreEnglish);
	DDX_Text(pDX, IDC_ID, m_StudentId);
	DDX_Text(pDX, IDC_MATH, m_ScoreMath);
	DDX_Text(pDX, IDC_NAME, m_StudentName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDataModify, CDialog)
	//{{AFX_MSG_MAP(CDataModify)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDataModify message handlers

void CDataModify::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
