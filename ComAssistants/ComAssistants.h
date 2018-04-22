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
	void setSerial();					//���ô��ڲ���
	void setSerialEnabled(bool);		//���ڴ򿪺󲻿�ѡ
	void StringToHex(QString str, QByteArray &senddata);	//�ַ�ת��
	char ConvertHexChar(char ch);							//�ַ�ת��
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
	void on_shuaxin_clicked();				//����ˢ��
	void on_sendButton1_clicked();			//���ڷ���
	void on_openButton_clicked();			//�򿪴���
	void on_clear_clicked();				//��մ���
	void showData();						//��ʾ���ڽ�����Ϣ
	void on_checkBoxDTR_clicked(bool);		//����DTRʹ�����
	void on_checkBoxRTS_clicked(bool);		//����RTSʹ�����
	void on_comboBox_currentIndexChanged();	//����������ͼ�¼��ѡ�е���ӵ�������
	void on_sendCheckBox_clicked(bool);		//�����Զ����͹�ѡ
	void on_timespinBox_valueChanged(int);	//�߶�����ʱ��

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
