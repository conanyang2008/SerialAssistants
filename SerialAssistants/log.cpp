#include "Log.h"
#include <QTextEdit>
#include <qfiledialog.h>
#include <qtextdocumentwriter.h>
#include <qfile.h>
#include <qdatetime.h>
#include <qdebug.h>
#include <qsettings.h>

Log::Log(QWidget *parent)
{
	ui_log.setupUi(this);
	SetCurrent();
	connect(ui_log.pushButton, SIGNAL(clicked()), this, SLOT(Close()));
	connect(ui_log.openButton, SIGNAL(clicked()), this, SLOT(OpenPath()));
}

Log::~Log()
{
	QString iniFilePath = "./ini/self.ini";
	QSettings settings(iniFilePath, QSettings::IniFormat);

	settings.setValue("Log/Save", ui_log.checkBox->isChecked());
	settings.setValue("Log/Time", ui_log.checkBox_2->isChecked());
	settings.setValue("Log/Filename", ui_log.lineEdit->text());
}

void Log::SetCurrent()
{
	QString iniFilePath = "./ini/self.ini";
	QSettings settings(iniFilePath, QSettings::IniFormat);

	ui_log.checkBox->setChecked(settings.value("Log/Save").toBool());
	ui_log.checkBox_2->setChecked(settings.value("Log/Time").toBool());
	ui_log.lineEdit->setText(settings.value("Log/Filename").toString());
}

void Log::Close()
{
	this->close();
}

bool Log::IsLog()
{
	if (ui_log.checkBox->isChecked())
		return true;
	else
		return false;
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