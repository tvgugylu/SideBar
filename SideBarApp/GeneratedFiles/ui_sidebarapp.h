/********************************************************************************
** Form generated from reading UI file 'sidebarapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEBARAPP_H
#define UI_SIDEBARAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideBarAppClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_popupUp;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_popupLeft;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_popupRight;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_popupDown;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SideBarAppClass)
    {
        if (SideBarAppClass->objectName().isEmpty())
            SideBarAppClass->setObjectName(QString::fromUtf8("SideBarAppClass"));
        SideBarAppClass->resize(600, 400);
        centralWidget = new QWidget(SideBarAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 113, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        btn_popupUp = new QPushButton(centralWidget);
        btn_popupUp->setObjectName(QString::fromUtf8("btn_popupUp"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_popupUp->sizePolicy().hasHeightForWidth());
        btn_popupUp->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_popupUp, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(164, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        btn_popupLeft = new QPushButton(centralWidget);
        btn_popupLeft->setObjectName(QString::fromUtf8("btn_popupLeft"));
        sizePolicy.setHeightForWidth(btn_popupLeft->sizePolicy().hasHeightForWidth());
        btn_popupLeft->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_popupLeft, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        btn_popupRight = new QPushButton(centralWidget);
        btn_popupRight->setObjectName(QString::fromUtf8("btn_popupRight"));
        sizePolicy.setHeightForWidth(btn_popupRight->sizePolicy().hasHeightForWidth());
        btn_popupRight->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_popupRight, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(163, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        btn_popupDown = new QPushButton(centralWidget);
        btn_popupDown->setObjectName(QString::fromUtf8("btn_popupDown"));
        sizePolicy.setHeightForWidth(btn_popupDown->sizePolicy().hasHeightForWidth());
        btn_popupDown->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_popupDown, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 113, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

        SideBarAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SideBarAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        SideBarAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SideBarAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SideBarAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SideBarAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SideBarAppClass->setStatusBar(statusBar);

        retranslateUi(SideBarAppClass);

        QMetaObject::connectSlotsByName(SideBarAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *SideBarAppClass)
    {
        SideBarAppClass->setWindowTitle(QApplication::translate("SideBarAppClass", "SideBarApp", nullptr));
        btn_popupUp->setText(QApplication::translate("SideBarAppClass", "\351\241\266\351\203\250\351\235\242\346\235\277", nullptr));
        btn_popupLeft->setText(QApplication::translate("SideBarAppClass", "\345\267\246\344\276\247\351\235\242\346\235\277", nullptr));
        btn_popupRight->setText(QApplication::translate("SideBarAppClass", "\345\217\263\344\276\247\351\235\242\346\235\277", nullptr));
        btn_popupDown->setText(QApplication::translate("SideBarAppClass", "\345\272\225\351\203\250\351\235\242\346\235\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SideBarAppClass: public Ui_SideBarAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBARAPP_H
