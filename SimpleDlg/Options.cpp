// Options.cpp: файл реализации
//

#include "stdafx.h"
#include "SimpleDlg.h"
#include "Options.h"
#include "afxdialogex.h"


// диалоговое окно COptions

IMPLEMENT_DYNAMIC(COptions, CDialog)

COptions::COptions(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG_OPTIONS, pParent)
	, m_text(_T("Enter text"))
	, m_bgColor(1)
	, m_x(0)
	, m_y(0)
{

}

COptions::~COptions()
{
}

void COptions::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TEXT, m_text);
	DDX_Radio(pDX, IDC_RADIO_RED, m_bgColor);
	DDX_Text(pDX, IDC_EDIT_POS_X, m_x);
	DDV_MinMaxInt(pDX, m_x, 0, 999999);
	DDX_Text(pDX, IDC_EDIT_POS_Y, m_y);
	DDV_MinMaxInt(pDX, m_y, 0, 999999);
}


BEGIN_MESSAGE_MAP(COptions, CDialog)
END_MESSAGE_MAP()


// обработчики сообщений COptions
