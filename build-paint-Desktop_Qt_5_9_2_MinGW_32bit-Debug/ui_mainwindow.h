/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "drawing.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBlack;
    QAction *actionWhite;
    QAction *actionRed;
    QAction *actionYellow;
    QAction *actionBlue;
    QAction *actionGreen;
    QAction *actionOrange;
    QAction *actionPixelpenna;
    QAction *actionFill;
    QAction *actionErase;
    QAction *actionFillNRFifo;
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionsFast;
    QAction *actionUltraFast;
    QAction *actionFillNRStack;
    Drawing *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QMenu *menuFil;
    QMenu *menuHastighet;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(612, 364);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QStringLiteral("actionBlack"));
        actionBlack->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlack->setIcon(icon);
        actionWhite = new QAction(MainWindow);
        actionWhite->setObjectName(QStringLiteral("actionWhite"));
        actionWhite->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWhite->setIcon(icon1);
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName(QStringLiteral("actionRed"));
        actionRed->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRed->setIcon(icon2);
        actionYellow = new QAction(MainWindow);
        actionYellow->setObjectName(QStringLiteral("actionYellow"));
        actionYellow->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYellow->setIcon(icon3);
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName(QStringLiteral("actionBlue"));
        actionBlue->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlue->setIcon(icon4);
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName(QStringLiteral("actionGreen"));
        actionGreen->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/green.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGreen->setIcon(icon5);
        actionOrange = new QAction(MainWindow);
        actionOrange->setObjectName(QStringLiteral("actionOrange"));
        actionOrange->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOrange->setIcon(icon6);
        actionPixelpenna = new QAction(MainWindow);
        actionPixelpenna->setObjectName(QStringLiteral("actionPixelpenna"));
        actionPixelpenna->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPixelpenna->setIcon(icon7);
        actionFill = new QAction(MainWindow);
        actionFill->setObjectName(QStringLiteral("actionFill"));
        actionFill->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/fill1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFill->setIcon(icon8);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QStringLiteral("actionErase"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon9);
        actionFillNRFifo = new QAction(MainWindow);
        actionFillNRFifo->setObjectName(QStringLiteral("actionFillNRFifo"));
        actionFillNRFifo->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/fill2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFillNRFifo->setIcon(icon10);
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QStringLiteral("actionSlow"));
        actionSlow->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon11);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon12);
        actionsFast = new QAction(MainWindow);
        actionsFast->setObjectName(QStringLiteral("actionsFast"));
        actionsFast->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsFast->setIcon(icon13);
        actionUltraFast = new QAction(MainWindow);
        actionUltraFast->setObjectName(QStringLiteral("actionUltraFast"));
        actionUltraFast->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/cspeed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUltraFast->setIcon(icon14);
        actionFillNRStack = new QAction(MainWindow);
        actionFillNRStack->setObjectName(QStringLiteral("actionFillNRStack"));
        actionFillNRStack->setCheckable(true);
        actionFillNRStack->setIcon(icon10);
        centralWidget = new Drawing(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 22));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy1);
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuFil = new QMenu(menuBar);
        menuFil->setObjectName(QStringLiteral("menuFil"));
        menuHastighet = new QMenu(menuBar);
        menuHastighet->setObjectName(QStringLiteral("menuHastighet"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFil->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHastighet->menuAction());
        menuTools->addAction(actionBlack);
        menuTools->addAction(actionWhite);
        menuTools->addAction(actionRed);
        menuTools->addAction(actionYellow);
        menuTools->addAction(actionBlue);
        menuTools->addAction(actionGreen);
        menuTools->addAction(actionOrange);
        menuTools->addSeparator();
        menuTools->addAction(actionPixelpenna);
        menuTools->addAction(actionFill);
        menuTools->addAction(actionFillNRStack);
        menuTools->addAction(actionFillNRFifo);
        menuTools->addSeparator();
        menuFil->addAction(actionErase);
        menuHastighet->addAction(actionSlow);
        menuHastighet->addAction(actionNormal);
        menuHastighet->addAction(actionsFast);
        menuHastighet->addAction(actionUltraFast);
        mainToolBar->addAction(actionErase);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBlack);
        mainToolBar->addAction(actionWhite);
        mainToolBar->addAction(actionRed);
        mainToolBar->addAction(actionYellow);
        mainToolBar->addAction(actionBlue);
        mainToolBar->addAction(actionGreen);
        mainToolBar->addAction(actionOrange);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPixelpenna);
        mainToolBar->addAction(actionFill);
        mainToolBar->addAction(actionFillNRStack);
        mainToolBar->addAction(actionFillNRFifo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionsFast);
        mainToolBar->addAction(actionUltraFast);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DALGO Paint", Q_NULLPTR));
        actionBlack->setText(QApplication::translate("MainWindow", "Svart", Q_NULLPTR));
        actionWhite->setText(QApplication::translate("MainWindow", "Vit", Q_NULLPTR));
        actionRed->setText(QApplication::translate("MainWindow", "R\303\266d", Q_NULLPTR));
        actionYellow->setText(QApplication::translate("MainWindow", "Gul", Q_NULLPTR));
        actionBlue->setText(QApplication::translate("MainWindow", "Bl\303\245", Q_NULLPTR));
        actionGreen->setText(QApplication::translate("MainWindow", "Gr\303\266n", Q_NULLPTR));
        actionOrange->setText(QApplication::translate("MainWindow", "Orange", Q_NULLPTR));
        actionPixelpenna->setText(QApplication::translate("MainWindow", "Pixelpenna", Q_NULLPTR));
        actionFill->setText(QApplication::translate("MainWindow", "Fyll", Q_NULLPTR));
        actionErase->setText(QApplication::translate("MainWindow", "Radera allt!", Q_NULLPTR));
        actionFillNRFifo->setText(QApplication::translate("MainWindow", "Fyll NR FIFO", Q_NULLPTR));
        actionSlow->setText(QApplication::translate("MainWindow", "l\303\245ngsam", Q_NULLPTR));
        actionNormal->setText(QApplication::translate("MainWindow", "lagom", Q_NULLPTR));
        actionsFast->setText(QApplication::translate("MainWindow", "snabb", Q_NULLPTR));
        actionUltraFast->setText(QApplication::translate("MainWindow", "c-speed", Q_NULLPTR));
        actionFillNRStack->setText(QApplication::translate("MainWindow", "Fyll NR Stack", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Verktyg", Q_NULLPTR));
        menuFil->setTitle(QApplication::translate("MainWindow", "Fil", Q_NULLPTR));
        menuHastighet->setTitle(QApplication::translate("MainWindow", "Hastighet", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
