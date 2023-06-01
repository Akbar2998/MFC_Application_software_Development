
// SimpleDlgView.cpp : реализаци€ класса CSimpleDlgView
//

#include "stdafx.h"
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позвол€ет совместно использовать код документа в данным проекте.
#ifndef SHARED_HANDLERS
#include "SimpleDlg.h"
#endif

#include "SimpleDlgDoc.h"
#include "SimpleDlgView.h"
#include "Options.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSimpleDlgView

IMPLEMENT_DYNCREATE(CSimpleDlgView, CView)

BEGIN_MESSAGE_MAP(CSimpleDlgView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_TOOLS_OPTIONS, &CSimpleDlgView::OnToolsOptions)
END_MESSAGE_MAP()

// создание/уничтожение CSimpleDlgView

CSimpleDlgView::CSimpleDlgView()
{
	// TODO: добавьте код создани€

}

CSimpleDlgView::~CSimpleDlgView()
{
}

BOOL CSimpleDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменени€
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// рисование CSimpleDlgView

void CSimpleDlgView::OnDraw(CDC* pDC)
{
	CSimpleDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки дл€ собственных данных

	CRect clientRect;
	GetClientRect(clientRect);
	if (m_bgColor == 0) {
		pDC->FillSolidRect(clientRect, RGB(255,0,0)); }
	else if (m_bgColor == 1) 
	{
		pDC->FillSolidRect(clientRect, RGB(0,0,255 ));
	}
	pDC->TextOutW(m_x,m_y, m_text);
}

void CSimpleDlgView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSimpleDlgView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// диагностика CSimpleDlgView

#ifdef _DEBUG
void CSimpleDlgView::AssertValid() const
{
	CView::AssertValid();
}

void CSimpleDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSimpleDlgDoc* CSimpleDlgView::GetDocument() const // встроена неотлаженна€ верси€
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSimpleDlgDoc)));
	return (CSimpleDlgDoc*)m_pDocument;
}
#endif //_DEBUG


// обработчики сообщений CSimpleDlgView


void CSimpleDlgView::OnToolsOptions()
{
	COptions dlgOptions;
	dlgOptions.m_text     = m_text;
		dlgOptions.m_bgColor    = m_bgColor;
		dlgOptions.m_x   = m_x;
		dlgOptions.m_y    = m_y;
	if (dlgOptions.DoModal() == IDOK) 
	{
		m_text = dlgOptions.m_text;
		m_bgColor = dlgOptions.m_bgColor;
		m_x = dlgOptions.m_x;
		m_y = dlgOptions.m_y;
	
	}
	Invalidate();
	UpdateWindow();
			
}
