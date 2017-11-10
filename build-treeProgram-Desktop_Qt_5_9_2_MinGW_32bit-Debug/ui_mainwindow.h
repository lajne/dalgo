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
#include "treeviewwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionrandom_tree;
    QAction *actioninsert;
    QAction *actiondelete;
    QAction *insert100Random;
    QAction *remove100Random;
    QAction *insertRemove1000RandomKeys;
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionFast;
    QAction *actionUltrafast;
    QAction *actionPreOrder;
    QAction *actionInOrder;
    QAction *actionPostOrder;
    QAction *actionheight;
    QAction *actionnumberOfNodes;
    QAction *actionsave;
    QAction *actionread;
    QAction *actionflashNodesAtIncreasingDepth;
    QAction *actioncreate_random_search_tree;
    TreeViewWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menustd;
    QMenu *menuvisual;
    QMenu *menuUppdrag;
    QMenu *menutr_dkl_ttring;
    QMenu *menuS_ktr_d_2;
    QMenu *menuSerialisering_2;
    QMenu *menu_vrigt_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(573, 385);
        actionrandom_tree = new QAction(MainWindow);
        actionrandom_tree->setObjectName(QStringLiteral("actionrandom_tree"));
        actioninsert = new QAction(MainWindow);
        actioninsert->setObjectName(QStringLiteral("actioninsert"));
        actiondelete = new QAction(MainWindow);
        actiondelete->setObjectName(QStringLiteral("actiondelete"));
        insert100Random = new QAction(MainWindow);
        insert100Random->setObjectName(QStringLiteral("insert100Random"));
        remove100Random = new QAction(MainWindow);
        remove100Random->setObjectName(QStringLiteral("remove100Random"));
        insertRemove1000RandomKeys = new QAction(MainWindow);
        insertRemove1000RandomKeys->setObjectName(QStringLiteral("insertRemove1000RandomKeys"));
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName(QStringLiteral("actionSlow"));
        actionSlow->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon1);
        actionFast = new QAction(MainWindow);
        actionFast->setObjectName(QStringLiteral("actionFast"));
        actionFast->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFast->setIcon(icon2);
        actionUltrafast = new QAction(MainWindow);
        actionUltrafast->setObjectName(QStringLiteral("actionUltrafast"));
        actionUltrafast->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/cspeed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUltrafast->setIcon(icon3);
        actionPreOrder = new QAction(MainWindow);
        actionPreOrder->setObjectName(QStringLiteral("actionPreOrder"));
        actionInOrder = new QAction(MainWindow);
        actionInOrder->setObjectName(QStringLiteral("actionInOrder"));
        actionPostOrder = new QAction(MainWindow);
        actionPostOrder->setObjectName(QStringLiteral("actionPostOrder"));
        actionheight = new QAction(MainWindow);
        actionheight->setObjectName(QStringLiteral("actionheight"));
        actionnumberOfNodes = new QAction(MainWindow);
        actionnumberOfNodes->setObjectName(QStringLiteral("actionnumberOfNodes"));
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        actionread = new QAction(MainWindow);
        actionread->setObjectName(QStringLiteral("actionread"));
        actionflashNodesAtIncreasingDepth = new QAction(MainWindow);
        actionflashNodesAtIncreasingDepth->setObjectName(QStringLiteral("actionflashNodesAtIncreasingDepth"));
        actioncreate_random_search_tree = new QAction(MainWindow);
        actioncreate_random_search_tree->setObjectName(QStringLiteral("actioncreate_random_search_tree"));
        centralWidget = new TreeViewWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 573, 22));
        menustd = new QMenu(menuBar);
        menustd->setObjectName(QStringLiteral("menustd"));
        menuvisual = new QMenu(menuBar);
        menuvisual->setObjectName(QStringLiteral("menuvisual"));
        menuUppdrag = new QMenu(menuBar);
        menuUppdrag->setObjectName(QStringLiteral("menuUppdrag"));
        menutr_dkl_ttring = new QMenu(menuUppdrag);
        menutr_dkl_ttring->setObjectName(QStringLiteral("menutr_dkl_ttring"));
        menuS_ktr_d_2 = new QMenu(menuUppdrag);
        menuS_ktr_d_2->setObjectName(QStringLiteral("menuS_ktr_d_2"));
        menuSerialisering_2 = new QMenu(menuUppdrag);
        menuSerialisering_2->setObjectName(QStringLiteral("menuSerialisering_2"));
        menu_vrigt_2 = new QMenu(menuUppdrag);
        menu_vrigt_2->setObjectName(QStringLiteral("menu_vrigt_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menustd->menuAction());
        menuBar->addAction(menuvisual->menuAction());
        menuBar->addAction(menuUppdrag->menuAction());
        menustd->addAction(actionrandom_tree);
        menuvisual->addAction(actionSlow);
        menuvisual->addAction(actionNormal);
        menuvisual->addAction(actionFast);
        menuvisual->addAction(actionUltrafast);
        menuUppdrag->addAction(menutr_dkl_ttring->menuAction());
        menuUppdrag->addAction(menuS_ktr_d_2->menuAction());
        menuUppdrag->addAction(menuSerialisering_2->menuAction());
        menuUppdrag->addAction(menu_vrigt_2->menuAction());
        menutr_dkl_ttring->addAction(actionPreOrder);
        menutr_dkl_ttring->addAction(actionInOrder);
        menutr_dkl_ttring->addAction(actionPostOrder);
        menutr_dkl_ttring->addSeparator();
        menutr_dkl_ttring->addAction(actionheight);
        menutr_dkl_ttring->addAction(actionnumberOfNodes);
        menuS_ktr_d_2->addAction(actioninsert);
        menuS_ktr_d_2->addAction(actiondelete);
        menuS_ktr_d_2->addSeparator();
        menuS_ktr_d_2->addAction(actioncreate_random_search_tree);
        menuS_ktr_d_2->addSeparator();
        menuS_ktr_d_2->addAction(insert100Random);
        menuS_ktr_d_2->addAction(remove100Random);
        menuS_ktr_d_2->addAction(insertRemove1000RandomKeys);
        menuSerialisering_2->addAction(actionsave);
        menuSerialisering_2->addAction(actionread);
        menu_vrigt_2->addAction(actionflashNodesAtIncreasingDepth);
        mainToolBar->addAction(actionrandom_tree);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionFast);
        mainToolBar->addAction(actionUltrafast);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tr\303\244dprogrammet", Q_NULLPTR));
        actionrandom_tree->setText(QApplication::translate("MainWindow", "create random tree", Q_NULLPTR));
        actioninsert->setText(QApplication::translate("MainWindow", "insert...", Q_NULLPTR));
        actiondelete->setText(QApplication::translate("MainWindow", "delete ...", Q_NULLPTR));
        insert100Random->setText(QApplication::translate("MainWindow", "insert 100 random keys", Q_NULLPTR));
        remove100Random->setText(QApplication::translate("MainWindow", "remove 100 random keys", Q_NULLPTR));
        insertRemove1000RandomKeys->setText(QApplication::translate("MainWindow", "insert/remove 1000 random keys", Q_NULLPTR));
        actionSlow->setText(QApplication::translate("MainWindow", "l\303\245ngsam", Q_NULLPTR));
        actionNormal->setText(QApplication::translate("MainWindow", "lagom", Q_NULLPTR));
        actionFast->setText(QApplication::translate("MainWindow", "snabb", Q_NULLPTR));
        actionUltrafast->setText(QApplication::translate("MainWindow", "supersnabb", Q_NULLPTR));
        actionPreOrder->setText(QApplication::translate("MainWindow", "flashPreOrder", Q_NULLPTR));
        actionInOrder->setText(QApplication::translate("MainWindow", "flashInOrder", Q_NULLPTR));
        actionPostOrder->setText(QApplication::translate("MainWindow", "flashPostOrder", Q_NULLPTR));
        actionheight->setText(QApplication::translate("MainWindow", "height", Q_NULLPTR));
        actionnumberOfNodes->setText(QApplication::translate("MainWindow", "numberOfNodes", Q_NULLPTR));
        actionsave->setText(QApplication::translate("MainWindow", "save...", Q_NULLPTR));
        actionread->setText(QApplication::translate("MainWindow", "read...", Q_NULLPTR));
        actionflashNodesAtIncreasingDepth->setText(QApplication::translate("MainWindow", "flashNodesAtIncreasingDepth", Q_NULLPTR));
        actioncreate_random_search_tree->setText(QApplication::translate("MainWindow", "create random search tree", Q_NULLPTR));
        menustd->setTitle(QApplication::translate("MainWindow", "std", Q_NULLPTR));
        menuvisual->setTitle(QApplication::translate("MainWindow", "visual", Q_NULLPTR));
        menuUppdrag->setTitle(QApplication::translate("MainWindow", "Uppdrag", Q_NULLPTR));
        menutr_dkl_ttring->setTitle(QApplication::translate("MainWindow", "tr\303\244dkl\303\244ttring", Q_NULLPTR));
        menuS_ktr_d_2->setTitle(QApplication::translate("MainWindow", "S\303\266ktr\303\244d", Q_NULLPTR));
        menuSerialisering_2->setTitle(QApplication::translate("MainWindow", "Serialisering", Q_NULLPTR));
        menu_vrigt_2->setTitle(QApplication::translate("MainWindow", "\303\226vrigt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
