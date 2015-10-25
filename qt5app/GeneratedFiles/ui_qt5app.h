/********************************************************************************
** Form generated from reading UI file 'qt5app.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT5APP_H
#define UI_QT5APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt5appClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt5appClass)
    {
        if (qt5appClass->objectName().isEmpty())
            qt5appClass->setObjectName(QStringLiteral("qt5appClass"));
        qt5appClass->resize(600, 400);
        menuBar = new QMenuBar(qt5appClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        qt5appClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt5appClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qt5appClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(qt5appClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qt5appClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qt5appClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qt5appClass->setStatusBar(statusBar);

        retranslateUi(qt5appClass);

        QMetaObject::connectSlotsByName(qt5appClass);
    } // setupUi

    void retranslateUi(QMainWindow *qt5appClass)
    {
        qt5appClass->setWindowTitle(QApplication::translate("qt5appClass", "qt5app", 0));
    } // retranslateUi

};

namespace Ui {
    class qt5appClass: public Ui_qt5appClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT5APP_H
