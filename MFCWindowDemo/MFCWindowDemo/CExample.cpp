#include "stdafx.h"
#include "CExample.h"
#include "CMyFrame.h"

BOOL CExample::InitInstance()
{
	auto *frame = new CMyFrame();
	m_pMainWnd = frame;

	frame->ShowWindow(SW_NORMAL);
	frame->UpdateWindow();

	return TRUE;
}

CExample theApp;
