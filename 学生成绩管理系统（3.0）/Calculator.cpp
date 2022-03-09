// Calculator.cpp : implementation file
//

#include "stdafx.h"
#include "OverStudentManage.h"
#include "Calculator.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalculator dialog


CCalculator::CCalculator(CWnd* pParent /*=NULL*/)
	: CDialog(CCalculator::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalculator)
	//}}AFX_DATA_INIT
}


void CCalculator::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalculator)
	DDX_Control(pDX, IDC_EDIT1, m_display);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCalculator, CDialog)
	//{{AFX_MSG_MAP(CCalculator)
	ON_BN_CLICKED(IDC_BUTTON_0, OnButton0)
	ON_BN_CLICKED(IDC_BUTTON_1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON_3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON_4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON_5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON_6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON_7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON_8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON_9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON_dot, OnBUTTONdot)
	ON_BN_CLICKED(IDC_BUTTON_jia, OnBUTTONjia)
	ON_BN_CLICKED(IDC_BUTTON_jian, OnBUTTONjian)
	ON_BN_CLICKED(IDC_BUTTON_cheng, OnBUTTONcheng)
	ON_BN_CLICKED(IDC_BUTTON_chu, OnBUTTONchu)
	ON_BN_CLICKED(IDC_BUTTON_Result, OnBUTTONResult)
	ON_BN_CLICKED(IDC_BUTTON_Del, OnBUTTONDel)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculator message handlers

void CCalculator::OnButton0() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+0;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton1() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+1;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton2() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+2;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton3() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+3;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton4() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+4;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton5() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+5;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton6() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+6;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton7() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+7;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton8() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+8;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnButton9() 
{
	// TODO: Add your control notification handler code here
	m_num1=m_num1*10+9;
	CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONdot() 
{
	// TODO: Add your control notification handler code here
	m_p='.';
    CString str;
	str.Format(_T("%f"),m_p);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONjia() 
{
	// TODO: Add your control notification handler code here
	m_num2=m_num1;
	m_num1=0;
	m_p='+';
    CString str;
	str.Format(_T("%f"),m_p);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONjian() 
{
	// TODO: Add your control notification handler code here
	m_num2=m_num1;
	m_num1=0;
	m_p='-';
    CString str;
	str.Format(_T("%f"),m_p);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONcheng() 
{
	// TODO: Add your control notification handler code here
	m_num2=m_num1;
	m_num1=0;
	m_p='*';
    CString str;
	str.Format(_T("%f"),m_p);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONchu() 
{
	// TODO: Add your control notification handler code here
	m_num2=m_num1;
	m_num1=0;
	m_p='/';
    CString str;
	str.Format(_T("%f"),m_p);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONResult() 
{
	// TODO: Add your control notification handler code here
	double m_result=0;
	switch(m_p)
	{
	case '+':m_result=m_num2+m_num1;break;
	case '-':m_result=m_num2-m_num1;break;
	case '*':m_result=m_num2*m_num1;break;
	case '/':m_result=m_num2/m_num1;break;
	case '.':m_result=m_num1/10.0;break;
	}
	CString str;
	str.Format(_T("%f"),m_result);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}

void CCalculator::OnBUTTONDel() 
{
	// TODO: Add your control notification handler code here
	m_num1=0;
	m_num2=0;
    CString str;
	str.Format(_T("%f"),m_num1);
	m_display.SetWindowText(str);
	UpdateData(FALSE);
}
