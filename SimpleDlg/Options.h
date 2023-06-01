#pragma once


// диалоговое окно COptions

class COptions : public CDialog
{
	DECLARE_DYNAMIC(COptions)

public:
	COptions(CWnd* pParent = NULL);   // стандартный конструктор
	virtual ~COptions();

// Данные диалогового окна
	enum { IDD = IDD_DIALOG_OPTIONS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CString m_text;
	int m_bgColor;
	int m_x;
	int m_y;
};
