
// gitTest02.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CgitTest02App:
// �йش����ʵ�֣������ gitTest02.cpp
//

class CgitTest02App : public CWinApp
{
public:
	CgitTest02App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CgitTest02App theApp;