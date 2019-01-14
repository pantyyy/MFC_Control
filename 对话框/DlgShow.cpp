// DlgShow.cpp : 实现文件
//

#include "stdafx.h"
#include "对话框.h"
#include "DlgShow.h"
#include "afxdialogex.h"


// CDlgShow 对话框

IMPLEMENT_DYNAMIC(CDlgShow, CDialogEx)

CDlgShow::CDlgShow(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgShow::IDD, pParent)
{

}

CDlgShow::~CDlgShow()
{
}

void CDlgShow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgShow, CDialogEx)
END_MESSAGE_MAP()


// CDlgShow 消息处理程序
