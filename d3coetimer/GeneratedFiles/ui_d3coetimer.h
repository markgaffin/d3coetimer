/********************************************************************************
** Form generated from reading UI file 'd3coetimer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D3COETIMER_H
#define UI_D3COETIMER_H

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

class Ui_d3coetimerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *d3coetimerClass)
    {
        if (d3coetimerClass->objectName().isEmpty())
            d3coetimerClass->setObjectName(QStringLiteral("d3coetimerClass"));
        d3coetimerClass->resize(600, 400);
        menuBar = new QMenuBar(d3coetimerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        d3coetimerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(d3coetimerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        d3coetimerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(d3coetimerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        d3coetimerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(d3coetimerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        d3coetimerClass->setStatusBar(statusBar);

        retranslateUi(d3coetimerClass);

        QMetaObject::connectSlotsByName(d3coetimerClass);
    } // setupUi

    void retranslateUi(QMainWindow *d3coetimerClass)
    {
        d3coetimerClass->setWindowTitle(QApplication::translate("d3coetimerClass", "d3coetimer", 0));
    } // retranslateUi

};

namespace Ui {
    class d3coetimerClass: public Ui_d3coetimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3COETIMER_H
