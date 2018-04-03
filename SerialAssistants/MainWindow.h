#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "AboutDialog.h"
#include "ui_ComDialog.h"
#include "Log.h"
#include <qtoolbar.h>
#include <qactiongroup.h>
#include <qtoolbutton.h>
#include <qaction.h>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <qstyle.h>
#include <qtimer.h>
#include <QTime>
#include <qpalette.h>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();
private:
	Ui::MainWindowClass ui;
	AboutDialog aboutDialog;
	Log log;
	QSerialPort *my_serial;
	QActionGroup *switchgroup;
	QLabel *sendLabel, *receiveLabel;
	QPalette pa1, pa2;
	int totalSend, totalReceive;
	void CreateSignal();
	void CreateActions();
	void SetStatusBar();
	void SetCurrent();
	QTime currentTime;
	QTimer *sendTimer;
private slots:
	void ShowAboutDialog();	//显示about dialog
	void ShowLogDialog();
	void CloseWindow();		//关闭主窗口
	void SearchPort();		//寻找串口
	void SetSerial();			//设置串口参数
	void ShowAlignment(QAction*);   //开始暂停or关闭
	void SendData();
	void ShowData();
	void Clear();
	void StringToHex(QString str, QByteArray &senddata);
	char ConvertHexChar(char ch);
	void AutoSend(bool);
	void ChangeSendTime(int);
	void SendTextChange();
};
