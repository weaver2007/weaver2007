#ifndef QT5APP_H
#define QT5APP_H

#include <QtWidgets/QMainWindow>
#include "ui_qt5app.h"

class qt5app : public QMainWindow
{
	Q_OBJECT

public:
	qt5app(QWidget *parent = 0);
	~qt5app();

private:
	Ui::qt5appClass ui;
};

#endif // QT5APP_H
