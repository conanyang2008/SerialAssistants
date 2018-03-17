#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "AboutDialog.h"
#include "ui_ComDialog.h"
#include <qtoolbar.h>
#include <qtoolbutton.h>
#include <qaction.h>
#include <QSerialPort>
#include <QSerialPortInfo>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWindowClass ui;
	AboutDialog aboutDialog;
	Ui::Dialog dialog;
	QSerialPort *serial;
	void SearchPort();
private slots:
	void ShowAboutDialog();
	void CloseWindow();
};
