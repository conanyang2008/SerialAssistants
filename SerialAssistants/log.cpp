#include "Log.h"
#include <QTextEdit>
#include <qfiledialog.h>
#include <qtextdocumentwriter.h>
#include <qfile.h>
#include <qdatetime.h>
#include <qdebug.h>

Log::Log(QWidget *parent): isLog(false)
{
	ui_log.setupUi(this);
	connect(ui_log.pushButton, SIGNAL(clicked()), this, SLOT(Close()));
	connect(ui_log.openButton, SIGNAL(clicked()), this, SLOT(OpenPath()));
	connect(ui_log.checkBox, SIGNAL(stateChanged(int)), this, SLOT(IsLog()));
}

void Log::Close()
{
	this->close();
}

void Log::IsLog()
{
	qDebug() << "trtrtrtrt";
	if (ui_log.checkBox->isChecked())
		isLog = true;
	else
		isLog = false;
}

QString Log::getFileName()
{
	QString filename = ui_log.lineEdit->text();
	return filename;
}

bool Log::OpenPath()
{
	QString fileName;
	if (ui_log.checkBox_2->isChecked())
	{
		QDateTime time;
		time = QDateTime::currentDateTime();
		QString timebuf = time.toString("yyyyMMddhhmmss");
		fileName = QFileDialog::getSaveFileName(this, tr("SerialAssistant Log"), "../"+timebuf, tr("Txt 文档 (*.txt);;所有文件 (*.*)"));
	}
	else
		fileName = QFileDialog::getSaveFileName(this, tr("SerialAssistant Log"), "../log", tr("Txt 文档 (*.txt);;所有文件 (*.*)"));
	if (fileName.isEmpty())
	{
		return false;

	}
	ui_log.lineEdit->setText(fileName);
	QFile file(fileName);
	if (!file.open(QIODevice::Append | QIODevice::Text)) //以追加方式打开文件
	{
	}
	return true;
}