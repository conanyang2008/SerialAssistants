#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{	
	ui.setupUi(this);
	setWindowIcon(QIcon("./image/globe.png"));
	connect(ui.aboutAction, SIGNAL(triggered()), this, SLOT(ShowAboutDialog()));   //��������Ӧ�Ĳ�  
	connect(ui.quitAction, SIGNAL(triggered()), this, SLOT(CloseWindow()));   //��������Ӧ�Ĳ� 
	SearchPort();

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
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		ui.SerialComboBox->addItem(info.portName());
	}
}