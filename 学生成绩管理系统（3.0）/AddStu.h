#if !defined(AFX_ADDSTU_H__233817F4_4ABA_4CAD_A7C3_A01D927C0827__INCLUDED_)
#define AFX_ADDSTU_H__233817F4_4ABA_4CAD_A7C3_A01D927C0827__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddStu.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAddStu dialog

class CAddStu : public CDialog
{
// Construction
public:
	CAddStu(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAddStu)
	enum { IDD = IDD_DIALOG_AddStu };
	CString	m_StudentName1;
	CString	m_StudentId;
	CString	m_StudentSex;
	CString	m_StudentClass;
	CString	m_StudentPhone;
	CString	m_StudentAddr;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddStu)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddStu)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDSTU_H__233817F4_4ABA_4CAD_A7C3_A01D927C0827__INCLUDED_)
