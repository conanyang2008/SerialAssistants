#include "ComAssistants.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ComAssistants w;
	w.show();
	return a.exec();
}
