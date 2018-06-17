#include "stdafx.h"
#include "CExample.h"
#include "CExampleDlg.h"

CExample theApp;

BOOL CExample::InitInstance()
{
	CExampleDlg myDlg;
	m_pMainWnd = &myDlg;
	myDlg.DoModal();
	return TRUE;
}
