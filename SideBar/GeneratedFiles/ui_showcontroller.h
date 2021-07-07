/********************************************************************************
** Form generated from reading UI file 'showcontroller.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCONTROLLER_H
#define UI_SHOWCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ShowController
{
public:
    QGridLayout *gridLayout;
    QToolButton *btnShowCtrl;

    void setupUi(QDialog *ShowController)
    {
        if (ShowController->objectName().isEmpty())
            ShowController->setObjectName(QString::fromUtf8("ShowController"));
        ShowController->resize(92, 22);
        gridLayout = new QGridLayout(ShowController);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnShowCtrl = new QToolButton(ShowController);
        btnShowCtrl->setObjectName(QString::fromUtf8("btnShowCtrl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnShowCtrl->sizePolicy().hasHeightForWidth());
        btnShowCtrl->setSizePolicy(sizePolicy);
        btnShowCtrl->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btnShowCtrl->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btnShowCtrl, 0, 0, 1, 1);


        retranslateUi(ShowController);

        QMetaObject::connectSlotsByName(ShowController);
    } // setupUi

    void retranslateUi(QDialog *ShowController)
    {
        ShowController->setWindowTitle(QApplication::translate("ShowController", "ShowController", nullptr));
        btnShowCtrl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowController: public Ui_ShowController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCONTROLLER_H
