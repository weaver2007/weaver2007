#include "stdafx.h"
#include "qt5app.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qt5app w;
	w.show();
	return a.exec();
}
