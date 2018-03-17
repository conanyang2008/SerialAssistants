#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "ui_AboutDIalog.h"
#include "ui_ComDialog.h"
#include <qtoolbar.h>
#include <qtoolbutton.h>
#include <qaction.h>

class AboutDialog : public QDialog
{
	Q_OBJECT
public:
	AboutDialog(QWidget *parent = Q_NULLPTR);
private:
	Ui::AboutDialog ui_aboutDialog;
private slots:
	void Close();
};
