#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include "ui_ComDialog.h"
#include <qstring.h>

class Log : public QDialog
{
	Q_OBJECT
public:
	Log(QWidget *parent = Q_NULLPTR);
	bool isLog;
	QString getFileName();
private:
	Ui::Dialog ui_log;

	private slots:
	void Close();
	bool OpenPath();
	void IsLog();
};