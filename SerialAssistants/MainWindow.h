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
	void CreateActions();
	void SetStatusBar();
	void SetCurrent();
	void SetSerial();			//设置串口参数
	void SetSerialEnabled(bool);
	QTime currentTime;
	QTimer *sendTimer;
private slots:
	void on_aboutAction_triggered();	//显示about dialog
	void on_saveAction_triggered();
	void on_quitAction_triggered();		//关闭主窗口
	void on_action_triggered();		//寻找串口
	void ShowAlignment(QAction*);   //开始暂停or关闭
	void on_SendButton_clicked();
	void on_clearAction_triggered();
	void on_sendCheckBox_clicked(bool);
	void on_timespinBox_valueChanged(int);
	void on_comboBox_currentIndexChanged();


	void ShowData();
	void StringToHex(QString str, QByteArray &senddata);
	char ConvertHexChar(char ch);
};
