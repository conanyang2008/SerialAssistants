#include "AboutDialog.h"

AboutDialog::AboutDialog(QWidget *parent)
{
	ui_aboutDialog.setupUi(this);
	connect(ui_aboutDialog.pushButton, SIGNAL(clicked()), this, SLOT(Close()));
}

void AboutDialog::Close()
{
	this->close();
}