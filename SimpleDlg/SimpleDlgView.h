
// SimpleDlgView.h : ��������� ������ CSimpleDlgView
//

#pragma once


class CSimpleDlgView : public CView
{
protected: // ������� ������ �� ������������
	CSimpleDlgView();
	DECLARE_DYNCREATE(CSimpleDlgView)

// ��������
public:
	CSimpleDlgDoc* GetDocument() const;

// ��������
public:

// ���������������
public:
	virtual void OnDraw(CDC* pDC);  // �������������� ��� ��������� ����� �������������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ����������
public:
	virtual ~CSimpleDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnToolsOptions();
private:
	CString m_text;
	int m_bgColor;
	int m_x;
	int m_y;

};

#ifndef _DEBUG  // ���������� ������ � SimpleDlgView.cpp
inline CSimpleDlgDoc* CSimpleDlgView::GetDocument() const
   { return reinterpret_cast<CSimpleDlgDoc*>(m_pDocument); }
#endif

