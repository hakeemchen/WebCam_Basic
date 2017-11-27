
// TestCodeDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"

#include <fstream>
#include <Windows.h>
#include "opencv_header.h"
#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;

// CTestCodeDlg ��ȭ ����
class CTestCodeDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CTestCodeDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCODE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_picture;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();

	VideoCapture *capture;
	Mat mat_frame;
	Mat copy_mat_frame;
	CImage cimage_mfc;
	CStatic m_picture_2;
	afx_msg void OnBnClickedButtonCapture();
	afx_msg void OnBnClickedButtonSave();

	CEdit m_editID;
};
