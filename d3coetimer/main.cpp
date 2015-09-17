#include "d3coetimer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	d3coetimer w;
	w.show();
	return a.exec();
}
