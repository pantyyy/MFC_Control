
// 编辑框Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// C编辑框Dlg 对话框
class C编辑框Dlg : public CDialogEx
{
// 构造
public:
	C编辑框Dlg(CWnd* pParent = NULL);	// 标准构造函数

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
private:
	CEdit m_edit1;
	CEdit m_edit2;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual void OnOK();
	afx_msg void OnBnClickedButton3();
private:
	CString m_text;
public:
	afx_msg void OnBnClickedButton4();
};
