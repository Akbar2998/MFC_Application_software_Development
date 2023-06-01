
// SimpleDlgView.h : интерфейс класса CSimpleDlgView
//

#pragma once


class CSimpleDlgView : public CView
{
protected: // создать только из сериализации
	CSimpleDlgView();
	DECLARE_DYNCREATE(CSimpleDlgView)

// Атрибуты
public:
	CSimpleDlgDoc* GetDocument() const;

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Реализация
public:
	virtual ~CSimpleDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
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

#ifndef _DEBUG  // отладочная версия в SimpleDlgView.cpp
inline CSimpleDlgDoc* CSimpleDlgView::GetDocument() const
   { return reinterpret_cast<CSimpleDlgDoc*>(m_pDocument); }
#endif

