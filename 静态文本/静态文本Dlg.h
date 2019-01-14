
// 静态文本Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// C静态文本Dlg 对话框
class C静态文本Dlg : public CDialogEx
{
// 构造
public:
	C静态文本Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
private:
	CStatic m_test;
public:
	afx_msg void OnBnClickedButton2();
private:
	CStatic m_pic;
	CButton m_btn;
public:
	afx_msg void OnBnClickedButton3();
};
