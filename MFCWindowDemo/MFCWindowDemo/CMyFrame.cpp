#include "stdafx.h"
#include "CMyFrame.h"

CMyFrame::CMyFrame()
{
	LPCTSTR lpszClassName = NULL;
	auto lpszWindowName = L"MFC Application Tutorial";
	auto dwStyle = WS_SYSMENU;
	auto rectDefault = CRect(90, 120, 550, 480);
	Create(lpszClassName, lpszWindowName, dwStyle, rectDefault);
}
