#pragma once


// ���������� ���� COptions

class COptions : public CDialog
{
	DECLARE_DYNAMIC(COptions)

public:
	COptions(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~COptions();

// ������ ����������� ����
	enum { IDD = IDD_DIALOG_OPTIONS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CString m_text;
	int m_bgColor;
	int m_x;
	int m_y;
};
