#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "AboutDialog.h"
#include "ui_ComDialog.h"
#include <qtoolbar.h>
#include <qactiongroup.h>
#include <qtoolbutton.h>
#include <qaction.h>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <qstyle.h>
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWindowClass ui;
	AboutDialog aboutDialog;
	Ui::Dialog dialog;
	QSerialPort *my_serial;
	QActionGroup *switchgroup;
	void CreateSignal();
	void CreateActions();
private slots:
	void ShowAboutDialog();	//显示about dialog
	void CloseWindow();		//关闭主窗口
	void SearchPort();		//寻找串口
	void SetSerial();			//设置串口参数
	void ShowAlignment(QAction*);   //开始暂停or关闭
	void SendData();
	void ShowData();
	void Clear();
};
