/*
	GUIDO Library
	Copyright (C) 2002  Holger Hoos, Juergen Kilian, Kai Renz

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/
#if !defined(AFX_VIRTUALPAGEDIALOG_H__0744CFE6_AF8F_11D2_AD0A_0080C75E70DF__INCLUDED_)
#define AFX_VIRTUALPAGEDIALOG_H__0744CFE6_AF8F_11D2_AD0A_0080C75E70DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

#include "GUIDOEngine.h"
#include "resource.h"

/////////////////////////////////////////////////////////////////////////////
// Dialogbox CVirtualPageDialog 

class CVirtualPageDialog : public CDialog
{
// construction
public:
	int startwithpage;
	bool getEditable(void);
	void setEditable(bool value);
	bool getOnlyDefault();
	void setOnlyDefault(bool value);
	void getMargins( bool def, GuidoPageFormat * outFormat );

	CVirtualPageDialog( CWnd * pParent,
		GuidoPageFormat * dfFormat,
		GuidoPageFormat * thFormat );

	CVirtualPageDialog(CWnd* pParent = NULL);   // Standardconstructor

// Dialogboxdata
	//{{AFX_DATA(CVirtualPageDialog)
	enum { IDD = IDD_VPAGEDIALOG };
	float	m_height;
	float	m_mbottom;
	float	m_mleft;
	float	m_mright;
	float	m_mtop;
	float	m_width;
	BOOL	m_ignorePF;
	//}}AFX_DATA


// overrides
	// virtual overrides generated by the class wizzar
	//{{AFX_VIRTUAL(CVirtualPageDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-support
	//}}AFX_VIRTUAL

// implementation
protected:
	float defsx; // defpage
	float defsy;
	float defml;
	float defmt;
	float defmr;
	float defmb;
	float tpsx; // thispage
	float tpsy;
	float tpml;
	float tpmt;
	float tpmr;
	float tpmb;
	bool onlydefault;
	bool editable;

	// generated message maps 	//{{AFX_MSG(CVirtualPageDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnDefpagesize();
	afx_msg void OnThispagesize();
	virtual void OnOK();
	afx_msg void OnIgnorepf();
	afx_msg void OnAsprint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// MS Visual C++ inserts directly before the previous line additional deklarations

#endif // AFX_VIRTUALPAGEDIALOG_H__0744CFE6_AF8F_11D2_AD0A_0080C75E70DF__INCLUDED_