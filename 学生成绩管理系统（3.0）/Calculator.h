#if !defined(AFX_CALCULATOR_H__CBEB4082_144A_4744_946E_28B42011A687__INCLUDED_)
#define AFX_CALCULATOR_H__CBEB4082_144A_4744_946E_28B42011A687__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Calculator.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCalculator dialog

class CCalculator : public CDialog
{
// Construction
public:
	CCalculator(CWnd* pParent = NULL);   // standard constructor
	double m_num1;//当前操作数
	double m_num2;//前一操作数
	char m_p;//当前操作符

// Dialog Data
	//{{AFX_DATA(CCalculator)
	enum { IDD = IDD_DIALOG_Calculator };
	CEdit	m_display;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculator)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCalculator)
	afx_msg void OnButton0();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnBUTTONdot();
	afx_msg void OnBUTTONjia();
	afx_msg void OnBUTTONjian();
	afx_msg void OnBUTTONcheng();
	afx_msg void OnBUTTONchu();
	afx_msg void OnBUTTONResult();
	afx_msg void OnBUTTONDel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATOR_H__CBEB4082_144A_4744_946E_28B42011A687__INCLUDED_)
