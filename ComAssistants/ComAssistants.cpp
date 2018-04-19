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
			QString show = "";
			QByteArray sdata;
			if (ui.HexButton_2->isChecked())
			{
				int len = sendstr.length();
				if (len % 2 == 1)   //������͵����ݸ���Ϊ�����ģ�����ǰ������䵥���ַ�ǰ���һ���ַ�0
				{
					sendstr = sendstr.insert(len - 1, '0'); //insert(int position, const QString & str)
				}
				StringToHex(sendstr, sdata);//��str�ַ���ת��Ϊ16���Ƶ���ʽ
				if (ui.ShowsendcheckBox->isChecked())
				{
					for (int i = 0; i < sdata.length(); i++)
					{
						qint8 outChar = sdata[i];
						QString str = QString("%1").arg(outChar & 0xFF, 2, 16, QLatin1Char('0')) + " ";
						show += str.toUpper();
					}
					if (ui.ShowtimecheckBox->isChecked())
					{
						QString strTime = "[" + currentTime.toString("hh:mm:ss:zzz") + "] ";
						if (ui.AutocheckBox->isChecked())
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + strTime + "���ͣ�" + show + "\n");
						else
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + strTime + "���ͣ�" + show);
					}
					else
					{
						if (ui.AutocheckBox->isChecked())
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + "���ͣ�" + show + "\n");
						else
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + "���ͣ�" + show);
					}
					ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
				}
			}
			else
			{
				//sdata.append(sendstr);
				sdata.append(sendstr).toHex();
				if (ui.ShowsendcheckBox->isChecked())
				{
					if (ui.ShowtimecheckBox->isChecked())
					{
						QString strTime = "[" + currentTime.toString("hh:mm:ss:zzz") + "] ";
						if (ui.AutocheckBox->isChecked())
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + strTime + "���ͣ�" + sendstr + "\n");
						else
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + strTime + "���ͣ�" + sendstr);
					}
					else
					{
						if (ui.AutocheckBox->isChecked())
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + "���ͣ�" + sendstr + "\n");
						else
							ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + "���ͣ�" + sendstr);
					}
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
	QString strTime = "[" + currentTime.currentTime().toString("hh:mm:ss:zzz") + "] ";
	QByteArray showdata = my_serial->readAll();
	qDebug() << "show data is " << showdata;
	QString show = "���գ�";
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
		show += "\n";
	if (ui.ShowtimecheckBox->isChecked())
	{

		ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + strTime + show);
	}
	else
		ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + show);
	ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
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
