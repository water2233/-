#if !defined(AFX_DATAMODIFY_H__4348037C_3B50_4DD2_B2CD_51E075DF6DDB__INCLUDED_)
#define AFX_DATAMODIFY_H__4348037C_3B50_4DD2_B2CD_51E075DF6DDB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DataModify.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDataModify dialog

class CDataModify : public CDialog
{
// Construction
public:
	CDataModify(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDataModify)
	enum { IDD = IDDATA };
	CString	m_ScoreChinese;
	CString	m_ScoreEnglish;
	CString	m_StudentId;
	CString	m_ScoreMath;
	CString	m_StudentName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDataModify)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDataModify)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATAMODIFY_H__4348037C_3B50_4DD2_B2CD_51E075DF6DDB__INCLUDED_)
