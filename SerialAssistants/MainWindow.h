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
	void ShowAboutDialog();	//��ʾabout dialog
	void CloseWindow();		//�ر�������
	void SearchPort();		//Ѱ�Ҵ���
	void SetSerial();			//���ô��ڲ���
	void ShowAlignment(QAction*);   //��ʼ��ͣor�ر�
	void SendData();
	void ShowData();
	void Clear();
};
