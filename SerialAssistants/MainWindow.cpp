#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{	
	ui.setupUi(this);
	setWindowIcon(QIcon("./image/globe.png"));
	connect(ui.aboutAction, SIGNAL(triggered()), this, SLOT(ShowAboutDialog()));   //连接上相应的槽  
	connect(ui.quitAction, SIGNAL(triggered()), this, SLOT(CloseWindow()));   //连接上相应的槽 
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