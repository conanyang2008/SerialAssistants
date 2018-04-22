#include "ComAssistants.h"
#include <qdebug.h>
#include <qscrollbar.h>
#include <qfile.h>
#include <qmessagebox.h>
#include <qsettings.h>


ComAssistants::ComAssistants(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setUDP();
	setTCP();
	on_shuaxin_clicked();
	setWindowIcon(QIcon("./image/globe.png"));
	my_serial = new QSerialPort(this);
	currentTime = QTime::currentTime();				//��ǰʱ��
	sendTimer = new QTimer(this);					//������ʱ��
	connect(my_serial, SIGNAL(readyRead()), this, SLOT(showData()));
	connect(sendTimer, SIGNAL(timeout()), this, SLOT(on_sendButton1_clicked()));
}

void ComAssistants::setSerialEnabled(bool state)
{
	ui.SerialComboBox->setEnabled(state);
	ui.baudrateComboBox->setEnabled(state);
	ui.checkbitComboBox->setEnabled(state);
	ui.databitComboBox->setEnabled(state);
	ui.flowcontrolComboBox->setEnabled(state);
	ui.stopbitComboBox->setEnabled(state);
	ui.action->setEnabled(state);
}

//���ô�����Ϣ
void ComAssistants::setSerial()
{
	/*���ö˿ں�*/
	QString comname = ui.SerialComboBox->currentText();
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		if (info.description() + "(" + info.portName() + ")" == comname)
		{
			my_serial->setPort(info);
		}
	}
	/*���ò�����*/
	int baudrate_index = ui.baudrateComboBox->currentIndex();
	switch (baudrate_index)
	{
	case 0:
		my_serial->setBaudRate(QSerialPort::Baud1200, QSerialPort::AllDirections);
		break;
	case 1:
		my_serial->setBaudRate(QSerialPort::Baud2400, QSerialPort::AllDirections);
		break;
	case 2:
		my_serial->setBaudRate(QSerialPort::Baud4800, QSerialPort::AllDirections);
		break;
	case 3:
		my_serial->setBaudRate(QSerialPort::Baud9600, QSerialPort::AllDirections);
		break;
	case 4:
		my_serial->setBaudRate(QSerialPort::Baud19200, QSerialPort::AllDirections);
		break;
	case 5:
		my_serial->setBaudRate(QSerialPort::Baud38400, QSerialPort::AllDirections);
		break;
	case 6:
		my_serial->setBaudRate(QSerialPort::Baud57600, QSerialPort::AllDirections);
		break;
	case 7:
		my_serial->setBaudRate(QSerialPort::Baud115200, QSerialPort::AllDirections);
		break;
	default:
		my_serial->setBaudRate(QSerialPort::UnknownBaud, QSerialPort::AllDirections);
		break;
	}
	/*��������λ*/
	int databits_index = ui.databitComboBox->currentIndex();
	switch (databits_index) {
	case 0:
		my_serial->setDataBits(QSerialPort::Data8);
		break;
	case 1:
		my_serial->setDataBits(QSerialPort::Data7);
		break;
	case 2:
		my_serial->setDataBits(QSerialPort::Data6);
		break;
	case 3:
		my_serial->setDataBits(QSerialPort::Data5);
		break;
	default:
		my_serial->setDataBits(QSerialPort::UnknownDataBits);
		break;
	}
	/*����У��λ*/
	int parity_index = ui.checkbitComboBox->currentIndex();
	switch (parity_index) {
	case 0:
		my_serial->setParity(QSerialPort::NoParity);
		break;
	case 1:
		my_serial->setParity(QSerialPort::EvenParity);
		break;
	case 2:
		my_serial->setParity(QSerialPort::OddParity);
		break;
	case 3:
		my_serial->setParity(QSerialPort::MarkParity);
		break;
	case 4:
		my_serial->setParity(QSerialPort::SpaceParity);
		break;
	default:
		my_serial->setParity(QSerialPort::UnknownParity);
		break;
	}
	/*����ֹͣλ*/
	int stopbit_index = ui.stopbitComboBox->currentIndex();
	switch (stopbit_index) {
	case 0:
		my_serial->setStopBits(QSerialPort::OneStop);
		break;
	case 1:
		my_serial->setStopBits(QSerialPort::OneAndHalfStop);
		break;
	case 2:
		my_serial->setStopBits(QSerialPort::TwoStop);
		break;
	default:
		my_serial->setStopBits(QSerialPort::UnknownStopBits);
		break;
	}
	int flowcontrol_index = ui.flowcontrolComboBox->currentIndex();
	switch (flowcontrol_index)
	{
	case 0:
		my_serial->setFlowControl(QSerialPort::NoFlowControl);
		break;
	case 1:
		my_serial->setFlowControl(QSerialPort::HardwareControl);
		break;
	case 2:
		my_serial->setFlowControl(QSerialPort::SoftwareControl);
		break;
	}
	my_serial->clear();
}

void ComAssistants::on_checkBoxDTR_clicked(bool state)
{
	if (state)
	{
		my_serial->setDataTerminalReady(true);
	}
	else
	{
		my_serial->setDataTerminalReady(false);
	}
}

void ComAssistants::on_checkBoxRTS_clicked(bool state)
{
	if (state)
	{
		my_serial->requestToSendChanged(true);
	}
	else
	{
		my_serial->requestToSendChanged(false);
	}
}

//ѡ����ʷ���ͼ�¼������䵽����TextEdit��
void ComAssistants::on_comboBox_currentIndexChanged()
{
	ui.SendTextEdit->setText(ui.comboBox->currentText());
}

void ComAssistants::on_shuaxin_clicked()
{
	if (ui.SerialComboBox->isEnabled() == true)
	{
		ui.SerialComboBox->clear();
		foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
		{
			qDebug() << "Name        : " << info.portName();
			qDebug() << "Description : " << info.description();
			qDebug() << "Manufacturer: " << info.manufacturer();
			QSerialPort serial;
			serial.setPort(info);
			if (serial.open(QIODevice::ReadWrite))
			{
				ui.SerialComboBox->addItem(info.description() + "(" + info.portName() + ")");
			}
		}
	}
}

void ComAssistants::on_openButton_clicked()
{
	if (ui.openButton->text() == "�򿪴���")
	{
		setSerial();
		if (!my_serial->isOpen())
		{
			bool com = my_serial->open(QIODevice::ReadWrite);
			if (com)
			{
				setSerialEnabled(false);
				ui.statusBar->setStyleSheet("QStatusBar{ color:green }");
				ui.statusBar->showMessage(my_serial->portName() + " �򿪳ɹ�", 3000);
				pa.setColor(QPalette::WindowText, Qt::darkGreen);
				ui.label->setPalette(pa);
				ui.label->setText(my_serial->portName() + "�Ѵ�");
				ui.openButton->setText("�رմ���");
			}
			else
			{
				ui.statusBar->setStyleSheet("QStatusBar{ color:red }");
				ui.statusBar->showMessage(my_serial->portName() + " ��ʧ��", 3000);
			}
		}
	}
	else if (ui.openButton->text() == "�رմ���")
	{
		if (my_serial->isOpen())
		{
			my_serial->close();
			setSerialEnabled(true);
			ui.statusBar->setStyleSheet("QStatusBar{ color:red }");
			ui.statusBar->showMessage(my_serial->portName() + " �ѹر�", 3000);
			pa.setColor(QPalette::WindowText, Qt::red);
			ui.label->setPalette(pa);
			ui.label->setText("�ѹر�");
			ui.openButton->setText("�򿪴���");
			on_shuaxin_clicked();
		}
	}

}

void ComAssistants::on_sendButton1_clicked()
{
	if (my_serial->isOpen())
	{
		if (!ui.SendTextEdit->toPlainText().isEmpty())
		{
			QString sendstr = ui.SendTextEdit->toPlainText();
			int j = 0;
			for (int i = 0; i < ui.comboBox->count(); i++)
			{
				if (ui.comboBox->itemText(i) == sendstr)
				{
					break;
				}
				else
					++j;
			}
			if (j == ui.comboBox->count())
			{
				ui.comboBox->insertItem(0, sendstr);
				ui.comboBox->setCurrentIndex(0);
			}
			QString show;
			QByteArray sdata;
			if (ui.HexButton_2->isChecked())
			{
				int len = sendstr.length();
				if (len % 2 == 1)   //������͵����ݸ���Ϊ�����ģ�����ǰ������䵥���ַ�ǰ���һ���ַ�0
				{
					sendstr = sendstr.insert(len - 1, '0'); //insert(int position, const QString & str)
				}
				StringToHex(sendstr, sdata);//��str�ַ���ת��Ϊ16���Ƶ���ʽ

				for (int i = 0; i < sdata.length(); i++)
				{
					qint8 outChar = sdata[i];
					QString str = QString("%1").arg(outChar & 0xFF, 2, 16, QLatin1Char('0')) + " ";
					show += str.toUpper();
				}
			}
			else 
			{
				sdata.append(sendstr).toHex();
				show += sendstr;
			}	
			if (ui.ShowsendcheckBox->isChecked())
			{
				show = "����:" + show;
				if (ui.ShowtimecheckBox->isChecked())
				{
					QString strTime = "[" + currentTime.toString("hh:mm:ss:zzz") + "] ";
					show = strTime + show;
				}
				if (ui.AutocheckBox->isChecked())
					ui.ReceiveTextEdit->append(show);
				else
				{
					ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + show);
					ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
				}
			}
			my_serial->write(sdata, sdata.length());
			totalSend += sdata.length();
			ui.labelSend->setText("���ͣ�" + QString::number(totalSend, 10) + " Bytes");
		}
		else
		{
			qDebug() << "������Ҫ���͵�ֵ";
		}
	}
}

void ComAssistants::showData()
{
	QByteArray showdata = my_serial->readAll();
	//qDebug() << "show data is " << showdata;
	QString show;
	if (ui.ShowtimecheckBox->isChecked())
	{
		QString strTime = "[" + currentTime.currentTime().toString("hh:mm:ss:zzz") + "] ";
		show += strTime;
	}
	show += "����:";
	if (ui.HexButton_1->isChecked())
	{
		for (int i = 0; i < showdata.length(); i++)
		{
			qint8 outChar = showdata[i];
			QString str = QString("%1").arg(outChar & 0xFF, 2, 16, QLatin1Char('0')) + " ";
			show += str.toUpper();
		}
	}
	else
	{
		show += QString(showdata);
	}
	if (ui.AutocheckBox->isChecked())
		ui.ReceiveTextEdit->append(show);
	else
	{
		ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + show);
		ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
	}
	totalReceive += showdata.length();
	ui.labelRev->setText("Rx��" + QString::number(totalReceive, 10) + " Bytes");
	//if (log.IsLog())
	//{
	//	qDebug() << "isopen";
	//	QFile file(log.getFileName());//�ļ�����  
	//	if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Append))     //����ļ��Ƿ��  
	//	{
	//		QMessageBox::information(this, "Error Message", "Please Select a Text File!");
	//		return;
	//	}
	//	QTextStream out(&file);
	//	out << strTime + show;
	//	file.close();
	//}
}

void ComAssistants::on_clear_clicked()
{
	ui.ReceiveTextEdit->clear();
	totalSend = 0;
	totalReceive = 0;
	ui.labelSend->setText("���գ�0 Bytes");
	ui.labelRev->setText("���ͣ�0 Bytes");
}

//��ʱ�ط�ON/OFF
void ComAssistants::on_sendCheckBox_clicked(bool state)
{
	qDebug() << "111";
	if (state)
	{
		sendTimer->start(ui.timespinBox->value());
	}
	else
	{
		sendTimer->stop();
	}
}

//��ʱ�ط����ʱ��ı�ʱ���ı䶨ʱ����ʱ����
void ComAssistants::on_timespinBox_valueChanged(int value)
{
	qDebug() << "2212";
	if (ui.sendCheckBox->isChecked())
	{
		sendTimer->start(value);
	}

}

void ComAssistants::StringToHex(QString str, QByteArray &senddata) //�ַ���ת��Ϊʮ����������0-F
{
	int hexdata, lowhexdata;
	int hexdatalen = 0;
	int len = str.length();
	senddata.resize(len / 2);
	char lstr, hstr;

	for (int i = 0; i<len; )
	{
		//char lstr,
		hstr = str[i].toLatin1();
		if (hstr == ' ')
		{
			i++;
			continue;
		}
		i++;
		if (i >= len)
			break;
		lstr = str[i].toLatin1();
		hexdata = ConvertHexChar(hstr);
		lowhexdata = ConvertHexChar(lstr);
		if ((hexdata == 16) || (lowhexdata == 16))
			break;
		else
			hexdata = hexdata * 16 + lowhexdata;
		i++;
		senddata[hexdatalen] = (char)hexdata;
		hexdatalen++;
	}
	senddata.resize(hexdatalen);
}

char ComAssistants::ConvertHexChar(char ch)
{
	if ((ch >= '0') && (ch <= '9'))
		return ch - 0x30;
	else if ((ch >= 'A') && (ch <= 'F'))
		return ch - 'A' + 10;
	else if ((ch >= 'a') && (ch <= 'f'))
		return ch - 'a' + 10;
	else return ch - ch;//����0-f��Χ�ڵĻᷢ�ͳ�0
}



void ComAssistants::setUDP()
{
	udpSocket = new QUdpSocket(this);
	udpPort = ui.udpPort1->text();
	udpTimer = new QTimer(this);
	udptotalRev = 0;
	udptotalSend = 0;
	connect(udpTimer, SIGNAL(timeout()), this, SLOT(on_udpSendButton_clicked()));
	connect(udpSocket, SIGNAL(readyRead()), this, SLOT(udpReceive()));
}

void ComAssistants::on_openUdp_clicked()
{
	if (ui.openUdp->text() == "��UDP")
	{
		if (ui.lineEdit->text() != NULL && ui.udpPort2->text() != NULL)
		{
			
			QString IP = ui.lineEdit->text();
			if (!serverIP.setAddress(IP))
			{
				QMessageBox::information(this, tr("error"), tr("UDP server ip address error!"));
				return;
			}		
			QString udpPort = ui.udpPort2->text();
			if (udpSocket->bind(serverIP, udpPort.toInt()) == false)
			{
				QMessageBox::information(this, tr("error"), tr("udp socket create error!"));
				return;
			}
			ui.openUdp->setText(tr("�ر�UDP"));
			pa.setColor(QPalette::WindowText, Qt::darkGreen);
			ui.udpStatus->setPalette(pa);
			ui.udpStatus->setText(tr("Opened"));
			ui.udpPort1->setEnabled(false);
			ui.udpPort2->setEnabled(false);
		}		
	}
	else if(ui.openUdp->text() == "�ر�UDP")
	{
		udpSocket->close();
		ui.openUdp->setText(tr("��UDP"));
		pa.setColor(QPalette::WindowText, Qt::red);
		ui.udpStatus->setPalette(pa);
		ui.udpStatus->setText(tr("Closed"));
		ui.udpPort1->setEnabled(true);
		ui.udpPort2->setEnabled(true);
	}

}

void ComAssistants::udpReceive()
{
	while (udpSocket->hasPendingDatagrams())
	{
		QByteArray datagram;
		datagram.resize(udpSocket->pendingDatagramSize());

		udpSocket->readDatagram(datagram.data(), datagram.size());
		QString msg;
		if (ui.checkBox_6->isChecked())
		{
			QString strTime = "[" + currentTime.currentTime().toString("hh:mm:ss:zzz") + "] ";
			msg += strTime;
		}
		if (ui.clientHexRev->isChecked())
		{
			for (int i = 0; i < datagram.length(); i++)
			{
				qint8 outChar = datagram[i];
				QString str = QString("%1").arg(outChar & 0xFF, 2, 16, QLatin1Char('0')) + " ";
				msg += str.toUpper();
			}
		}
		else
			msg += datagram.data();
		if (ui.checkBox_5->isChecked())
		{
			ui.udpRevtextEdit->append(msg);
		}
		else
		{
			ui.udpRevtextEdit->setText(ui.udpRevtextEdit->toPlainText() + msg);
			ui.udpRevtextEdit->verticalScrollBar()->setValue(ui.udpRevtextEdit->verticalScrollBar()->maximum());
		}
		udptotalRev += datagram.length();
		ui.udpRevLabel->setText("UDP���գ�" + QString::number(udptotalRev, 10) + " Bytes");
	}
}

void ComAssistants::on_udpSendButton_clicked()
{
	if (!ui.tcpClientSendtextEdit->toPlainText().isEmpty() && ui.openUdp->text() == "�ر�UDP")
	{
		QByteArray dataSend;
		QString msg = ui.tcpClientSendtextEdit->toPlainText();
		if (ui.clientHexSend->isChecked())
		{
			
			int len = msg.length();
			if (len % 2 == 1)   //������͵����ݸ���Ϊ�����ģ�����ǰ������䵥���ַ�ǰ���һ���ַ�0
			{
				msg = msg.insert(len - 1, '0'); //insert(int position, const QString & str)
			}
			StringToHex(msg, dataSend);//��str�ַ���ת��Ϊ16���Ƶ���ʽ
		}
		else
			dataSend = msg.toLatin1();
		udpSocket->writeDatagram(dataSend, dataSend.length(), QHostAddress::Broadcast, udpPort.toInt());
		udptotalSend += dataSend.length();
		ui.udpSendLabel->setText("UDP���ͣ�" + QString::number(udptotalSend, 10) + " Bytes");
	}
}

void ComAssistants::on_clearUdp_clicked()
{
	ui.udpRevtextEdit->clear();
	udptotalRev = 0;
	udptotalSend = 0;
	ui.udpRevLabel->setText("UDP���գ�");
	ui.udpSendLabel->setText("UDP���ͣ�");
}

void ComAssistants::on_checkBox_4_clicked(bool state)
{
	if (state)
	{
		udpTimer->start(ui.udpspinBox->value());
	}
	else
		udpTimer->stop();
}

void ComAssistants::on_udpspinBox_valueChanged(int value)
{
	if (ui.checkBox_4->isChecked())
	{
		udpTimer->start(value);
	}
}


void ComAssistants::setTCP()
{
	tcpSocket = new QTcpSocket(this);
	connect(tcpSocket, SIGNAL(connected()), this, SLOT(slotConnected()));
	connect(tcpSocket, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));
	connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(clientRev()));
	tcpClientTimer = new QTimer(this);
	connect(tcpClientTimer, SIGNAL(timeout()), this, SLOT(on_tcpClientSendButton_clicked()));
	tcpCtotalRev = 0;
	tcpCtotalSend = 0;
}

void ComAssistants::on_openTcpClient_clicked()
{
	if (ui.openTcpClient->text() == "��TCP")
	{
		if (ui.lineEdit->text() != NULL && ui.tcpPort1->text() != NULL && ui.tcpPort2->text() != NULL)
		{

			QString IP = ui.lineEdit->text();
			if (!serverIP.setAddress(IP))
			{
				QMessageBox::information(this, tr("error"), tr("TCP server ip address error!"));
				return;
			}
			QString tcpServerPort = ui.tcpPort2->text();
			tcpSocket->connectToHost(serverIP, tcpServerPort.toInt());
		}
	}
	else if(ui.openTcpClient->text() == "�ر�TCP")
	{
		tcpSocket->disconnectFromHost();
	}
}

void ComAssistants::slotConnected()
{
	ui.openTcpClient->setText(tr("�ر�TCP"));
	pa.setColor(QPalette::WindowText, Qt::darkGreen);
	ui.tcpStatus->setPalette(pa);
	ui.tcpStatus->setText(tr("Opened"));
	ui.tcpPort1->setEnabled(false);
	ui.tcpPort2->setEnabled(false);
}

void ComAssistants::slotDisconnected()
{
	ui.openTcpClient->setText(tr("��TCP"));
	pa.setColor(QPalette::WindowText, Qt::red);
	ui.tcpStatus->setPalette(pa);
	ui.tcpStatus->setText(tr("Closed"));
	ui.tcpPort1->setEnabled(true);
	ui.tcpPort2->setEnabled(true);
}

void ComAssistants::on_tcpClientSendButton_clicked()
{
	if (!ui.tcpClientSendtextEdit->toPlainText().isEmpty() && ui.openTcpClient->text() == "�ر�TCP")
	{
		QByteArray dataSend;
		QString msg = ui.tcpClientSendtextEdit->toPlainText();
		if (ui.clientHexSend->isChecked())
		{

			int len = msg.length();
			if (len % 2 == 1)   //������͵����ݸ���Ϊ�����ģ�����ǰ������䵥���ַ�ǰ���һ���ַ�0
			{
				msg = msg.insert(len - 1, '0'); //insert(int position, const QString & str)
			}
			StringToHex(msg, dataSend);//��str�ַ���ת��Ϊ16���Ƶ���ʽ
		}
		else
			dataSend = msg.toLatin1();
		tcpSocket->write(dataSend, dataSend.length());
		tcpCtotalSend += dataSend.length();
		ui.tcpCSendLabel->setText("TCP���ͣ�" + QString::number(tcpCtotalSend, 10) + " Bytes");
	}
}

void ComAssistants::clientRev()
{
	while (tcpSocket->bytesAvailable()>0)
	{
		QByteArray datagram;
		datagram.resize(tcpSocket->bytesAvailable());

		tcpSocket->read(datagram.data(), datagram.size());

		QString msg;
		if (ui.checkBox_6->isChecked())
		{
			QString strTime = "[" + currentTime.currentTime().toString("hh:mm:ss:zzz") + "] ";
			msg += strTime;
		}
		if (ui.clientHexRev->isChecked())
		{
			for (int i = 0; i < datagram.length(); i++)
			{
				qint8 outChar = datagram[i];
				QString str = QString("%1").arg(outChar & 0xFF, 2, 16, QLatin1Char('0')) + " ";
				msg += str.toUpper();
			}
		}
		else
			msg += datagram.data();
		if (ui.checkBox_5->isChecked())
		{
			ui.tcpClientRevtextEdit->append(msg);
		}
		else
		{
			ui.tcpClientRevtextEdit->setText(ui.tcpClientRevtextEdit->toPlainText() + msg);
			ui.tcpClientRevtextEdit->verticalScrollBar()->setValue(ui.udpRevtextEdit->verticalScrollBar()->maximum());
		}
		tcpCtotalRev += datagram.length();
		ui.tcpCRevLabel->setText("TCP���գ�" + QString::number(tcpCtotalRev, 10) + " Bytes");
	}
}

void ComAssistants::on_clearTcpClient_clicked()
{
	ui.tcpClientRevtextEdit->clear();
	tcpCtotalRev = 0;
	tcpCtotalSend = 0;
	ui.tcpCRevLabel->setText("TCP���գ�");
	ui.tcpCSendLabel->setText("TCP���ͣ�");
}

void ComAssistants::on_checkBox_3_clicked(bool state)
{
	if (state)
	{
		tcpClientTimer->start(ui.udpspinBox->value());
	}
	else
		tcpClientTimer->stop();
}

void ComAssistants::on_tcpClientspinBox_valueChanged(int value)
{
	if (ui.checkBox_3->isChecked())
	{
		tcpClientTimer->start(value);
	}
}