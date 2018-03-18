#include "MainWindow.h"
#include <qdebug.h>
#include <qscrollbar.h>
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{	
	ui.setupUi(this);
	setWindowIcon(QIcon("./image/globe.png"));
	my_serial = new QSerialPort(this);
	CreateActions();
	SearchPort();//启动搜索端口号
	SetSerial();
	CreateSignal();

}

void MainWindow::CreateSignal()
{
	connect(ui.aboutAction, SIGNAL(triggered()), this, SLOT(ShowAboutDialog()));//显示相关信息Dialog 
	connect(ui.quitAction, SIGNAL(triggered()), this, SLOT(CloseWindow()));		//关闭窗口
	connect(ui.action, SIGNAL(triggered()), this, SLOT(SearchPort()));			//按下刷新按钮刷新端口

	connect(ui.baudrateComboBox, SIGNAL(activated(int)), this, SLOT(SetSerial()));
	connect(ui.checkbitComboBox, SIGNAL(activated(int)), this, SLOT(SetSerial()));
	connect(ui.databitComboBox, SIGNAL(activated(int)), this, SLOT(SetSerial()));
	connect(ui.flowcontrolComboBox, SIGNAL(activated(int)), this, SLOT(SetSerial()));
	connect(ui.stopbitComboBox, SIGNAL(activated(int)), this, SLOT(SetSerial()));
	connect(ui.SerialComboBox, SIGNAL(activated(int)), this, SLOT(SetSerial()));
	connect(ui.SendButton, SIGNAL(clicked()), this, SLOT(SendData()));
	connect(ui.clearAction, SIGNAL(triggered()), this, SLOT(Clear()));
	connect(my_serial, SIGNAL(readyRead()), this, SLOT(ShowData()));
}

void MainWindow::CreateActions()
{
	switchgroup = new QActionGroup(this);
	switchgroup->addAction(ui.startAction);
	switchgroup->addAction(ui.pauseAction);
	switchgroup->addAction(ui.stopAction);
	connect(switchgroup, SIGNAL(triggered(QAction*)), this, SLOT(ShowAlignment(QAction*)));
}

void MainWindow::ShowAboutDialog()
{
	aboutDialog.show();
}

void MainWindow::CloseWindow()
{
	this->close();
}

void MainWindow::SearchPort()
{
	ui.SerialComboBox->clear();
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		qDebug() << "Name        : " << info.portName();
		qDebug() << "Description : " << info.description();
		qDebug() << "Manufacturer: " << info.manufacturer();
		QSerialPort serial;
		serial.setPort(info);
		if(serial.open(QIODevice::ReadWrite))
		{
			ui.SerialComboBox->addItem(info.description() + "(" + info.portName() + ")");
		}
	}
}

void MainWindow::SetSerial()
{
	/*设置端口号*/
	QString comname = ui.SerialComboBox->currentText();
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		if (info.description() + "(" + info.portName() + ")" == comname)
		{
			my_serial->setPort(info);
		}
	}
	/*设置波特率*/
	int baudrate_index = ui.baudrateComboBox->currentIndex();
	switch (baudrate_index)
	{
	case 0 :
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
	/*设置数据位*/
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
	/*设置校验位*/
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
	/*设置停止位*/
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
	my_serial->clearError();
	my_serial->clear();
}

void MainWindow::ShowAlignment(QAction* act)
{
	if (act == ui.startAction)
	{
		if (!my_serial->isOpen())
		{
			ui.stopAction->setChecked(false);
			ui.pauseAction->setChecked(false);
			bool com = my_serial->open(QIODevice::ReadWrite);
			if (com)
			{
				SetSerial();
				//my_serial->setDataTerminalReady(true);
				//my_serial->setRequestToSend(true);
				ui.statusBar->setStyleSheet("color:green");
				ui.statusBar->showMessage(my_serial->portName() + " 打开成功");
			}
			else
			{
				ui.statusBar->setStyleSheet("color:red");
				ui.statusBar->showMessage(my_serial->portName() + " 打开失败", 3000);
			}
		}
	}
	else if (act == ui.pauseAction)
	{
		ui.startAction->setChecked(false);
		ui.stopAction->setChecked(false);
		if (my_serial->isOpen())
		{
			
		}
	}
	else if (act == ui.stopAction)
	{
		ui.startAction->setChecked(false);
		ui.pauseAction->setChecked(false);
		if (my_serial->isOpen())
		{
			my_serial->close();
			ui.statusBar->setStyleSheet("color:red");
			ui.statusBar->showMessage(my_serial->portName() + " 已关闭", 3000);
		}
	}
}

void MainWindow::SendData()
{
	if (my_serial->isOpen())
	{
		if (!ui.SendTextEdit->toPlainText().isEmpty())
		{
			QString sendstr = ui.SendTextEdit->toPlainText();
			QString show = "";
			QByteArray sdata;
			if (ui.HexButton_2->isChecked())
			{
				sdata.append(sendstr).toHex();
				if (ui.ShowsendcheckBox->isChecked())
				{
					for (int i = 0; i < sdata.length(); i++)
					{
						qint8 outChar = sdata[i];
						QString str = QString("%1").arg(outChar & 0xFF, 2, 16, QLatin1Char('0')) + " ";
						show += str.toUpper();
					}
					if (ui.AutocheckBox->isChecked())
						ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + sdata + "\n");
					else
						ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + sdata);
					ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
				}
			}
			else
			{
				sdata.append(sendstr);
				if (ui.ShowsendcheckBox->isChecked())
				{
					if (ui.AutocheckBox->isChecked())
						ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + "发送：" + sdata + "\n");
					else
						ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + "发送：" + sdata);
					ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
				}
			}
			my_serial->write(sdata, sdata.length());
		}
		else
		{
			qDebug() << "请输入要发送的值";
		}
	}
}

void MainWindow::ShowData()
{
	//qDebug() << "11111";
	QByteArray showdata = my_serial->readAll();
	qDebug() << "show data is " << showdata;
	QString show = "接收：";
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
	if(ui.AutocheckBox->isChecked())
		show += "\n";
	ui.ReceiveTextEdit->setText(ui.ReceiveTextEdit->toPlainText() + show);
	ui.ReceiveTextEdit->verticalScrollBar()->setValue(ui.ReceiveTextEdit->verticalScrollBar()->maximum());
}

void MainWindow::Clear()
{
	ui.ReceiveTextEdit->clear();
}
