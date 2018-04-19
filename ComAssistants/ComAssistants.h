#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include "ui_ComAssistants.h"
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
class ComAssistants : public QMainWindow
{
	Q_OBJECT

public:
	ComAssistants(QWidget *parent = Q_NULLPTR);

private:
	Ui::ComAssistantsClass ui;
	QSerialPort *my_serial;
	int totalSend, totalReceive;
	void setCurrent();
	void setSerial();			//设置串口参数
	void setSerialEnabled(bool);
	void StringToHex(QString str, QByteArray &senddata);
	char ConvertHexChar(char ch);
	QTime currentTime;
	QTimer *sendTimer;
	QPalette pa;
private slots:
	void on_shuaxin_clicked();
	void on_sendButton1_clicked();
	void on_openButton_clicked();
	void on_clear_clicked();
	void showData();
	void on_checkBoxDTR_clicked(bool);
	void on_checkBoxRTS_clicked(bool);
	void on_comboBox_currentIndexChanged();
	void on_sendCheckBox_clicked(bool);
	void on_timespinBox_valueChanged(int);
	//void ShowData();
	//void StringToHex(QString str, QByteArray &senddata);
	//char ConvertHexChar(char ch);
};
