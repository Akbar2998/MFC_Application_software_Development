
// SimpleDlg.h : ������� ���� ��������� ��� ���������� SimpleDlg
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// CSimpleDlgApp:
// � ���������� ������� ������ ��. SimpleDlg.cpp
//

class CSimpleDlgApp : public CWinAppEx
{
public:
	CSimpleDlgApp();


// ���������������
public:
	virtual BOOL InitInstance();

// ����������
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSimpleDlgApp theApp;
