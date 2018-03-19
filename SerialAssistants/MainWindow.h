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
#include <qtimer.h>
#include <QTime>
#include <qpalette.h>

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
	QLabel *sendLabel, *receiveLabel, *messageLabel;
	QPalette pa1, pa2;
	int totalSend, totalReceive;
	void CreateSignal();
	void CreateActions();
	void SetStatusBar();
	QTime currentTime;
	QTimer *sendTimer;
private slots:
	void ShowAboutDialog();	//��ʾabout dialog
	void CloseWindow();		//�ر�������
	void SearchPort();		//Ѱ�Ҵ���
	void SetSerial();			//���ô��ڲ���
	void ShowAlignment(QAction*);   //��ʼ��ͣor�ر�
	void SendData();
	void ShowData();
	void Clear();
	void StringToHex(QString str, QByteArray &senddata);
	char ConvertHexChar(char ch);
	void AutoSend(bool);
	void ChangeSendTime(int);
};
