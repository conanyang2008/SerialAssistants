#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include "ui_ComAssistants.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <qtimer.h>
#include <QTime>
#include <qpalette.h>
#include <QUdpSocket>
#include <qhostinfo.h>
#include <qtcpsocket.h>

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
	void setSerial();					//设置串口参数
	void setSerialEnabled(bool);		//串口打开后不可选
	void StringToHex(QString str, QByteArray &senddata);	//字符转换
	char ConvertHexChar(char ch);							//字符转换
	QTime currentTime;
	QTimer *sendTimer;
	QPalette pa;

	void setUDP();
	void setTCP();
	int udptotalSend, udptotalRev;
	int tcpCtotalSend, tcpCtotalRev;
	QString udpPort;
	QTimer *tcpClientTimer, *udpTimer;
	QUdpSocket *udpSocket;
	QHostAddress serverIP;
	QTcpSocket *tcpSocket;
private slots:
	void on_shuaxin_clicked();				//串口刷新
	void on_sendButton1_clicked();			//串口发送
	void on_openButton_clicked();			//打开串口
	void on_clear_clicked();				//清空串口
	void showData();						//显示串口接收信息
	void on_checkBoxDTR_clicked(bool);		//控制DTR使能与否
	void on_checkBoxRTS_clicked(bool);		//控制RTS使能与否
	void on_comboBox_currentIndexChanged();	//串口最近发送记录中选中的添加到发送栏
	void on_sendCheckBox_clicked(bool);		//串口自动发送勾选
	void on_timespinBox_valueChanged(int);	//走动发送时间

	void on_openUdp_clicked();
	void on_udpSendButton_clicked();
	void on_clearUdp_clicked();
	void on_checkBox_4_clicked(bool);
	void on_udpspinBox_valueChanged(int);
	void udpReceive();

	void on_openTcpClient_clicked();
	void slotConnected();
	void slotDisconnected();
	void on_tcpClientSendButton_clicked();
	void on_clearTcpClient_clicked();
	void on_checkBox_3_clicked(bool);
	void on_tcpClientspinBox_valueChanged(int);
	void clientRev();
};
