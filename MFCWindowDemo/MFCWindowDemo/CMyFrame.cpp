#include "stdafx.h"
#include "CMyFrame.h"

CMyFrame::CMyFrame()
{
	auto lpszClassName = nullptr;
	auto lpszWindowName = L"MFC Application Tutorial";
	auto dwStyle = WS_SYSMENU;
	auto rectDefault = CRect(90, 120, 550, 480);
	auto pParentWnd = nullptr;
	Create(lpszClassName, lpszWindowName, dwStyle, rectDefault, pParentWnd);
}
