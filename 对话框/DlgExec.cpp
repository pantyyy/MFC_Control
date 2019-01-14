// DlgExec.cpp : 实现文件
//

#include "stdafx.h"
#include "对话框.h"
#include "DlgExec.h"
#include "afxdialogex.h"


// CDlgExec 对话框

IMPLEMENT_DYNAMIC(CDlgExec, CDialogEx)

CDlgExec::CDlgExec(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgExec::IDD, pParent)
{

}

CDlgExec::~CDlgExec()
{
}

void CDlgExec::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgExec, CDialogEx)
END_MESSAGE_MAP()


// CDlgExec 消息处理程序
