
// SimpleDlg.h : главный файл заголовка для приложения SimpleDlg
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// CSimpleDlgApp:
// О реализации данного класса см. SimpleDlg.cpp
//

class CSimpleDlgApp : public CWinAppEx
{
public:
	CSimpleDlgApp();


// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSimpleDlgApp theApp;
