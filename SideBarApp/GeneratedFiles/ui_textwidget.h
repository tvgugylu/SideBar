/********************************************************************************
** Form generated from reading UI file 'textwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTWIDGET_H
#define UI_TEXTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextWidget
{
public:

    void setupUi(QWidget *TextWidget)
    {
        if (TextWidget->objectName().isEmpty())
            TextWidget->setObjectName(QString::fromUtf8("TextWidget"));
        TextWidget->resize(200, 576);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextWidget->sizePolicy().hasHeightForWidth());
        TextWidget->setSizePolicy(sizePolicy);
        TextWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        retranslateUi(TextWidget);

        QMetaObject::connectSlotsByName(TextWidget);
    } // setupUi

    void retranslateUi(QWidget *TextWidget)
    {
        TextWidget->setWindowTitle(QApplication::translate("TextWidget", "TextWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextWidget: public Ui_TextWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTWIDGET_H
