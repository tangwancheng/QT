/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTimeEdit *timeEdit;
    QDateTimeEdit *dateTimeEdit;
    QDateEdit *dateEdit;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(621, 345);
        lineEdit1 = new QLineEdit(MyWidget);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(480, 60, 113, 25));
        lineEdit1->setEchoMode(QLineEdit::Password);
        lineEdit2 = new QLineEdit(MyWidget);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(470, 110, 113, 25));
        lineEdit3 = new QLineEdit(MyWidget);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));
        lineEdit3->setGeometry(QRect(470, 180, 113, 25));
        lineEdit4 = new QLineEdit(MyWidget);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));
        lineEdit4->setGeometry(QRect(470, 250, 142, 25));
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 50, 67, 17));
        label_2 = new QLabel(MyWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 110, 67, 17));
        label_3 = new QLabel(MyWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 180, 67, 17));
        label_4 = new QLabel(MyWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 250, 67, 17));
        timeEdit = new QTimeEdit(MyWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(70, 90, 118, 26));
        dateTimeEdit = new QDateTimeEdit(MyWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(40, 210, 531, 26));
        dateEdit = new QDateEdit(MyWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(70, 140, 110, 26));
        dateEdit->setCalendarPopup(true);
        QWidget::setTabOrder(lineEdit1, lineEdit2);
        QWidget::setTabOrder(lineEdit2, lineEdit3);
        QWidget::setTabOrder(lineEdit3, lineEdit4);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        lineEdit2->setInputMask(QApplication::translate("MyWidget", ">AA-90_bb-! aa\\#H;*", 0));
        label->setText(QApplication::translate("MyWidget", "\346\230\276\347\244\272\346\250\241\345\274\217:", 0));
        label_2->setText(QApplication::translate("MyWidget", "\350\276\223\345\205\245\346\216\251\347\240\201:", 0));
        label_3->setText(QApplication::translate("MyWidget", "\350\276\223\345\205\245\351\252\214\350\257\201:", 0));
        label_4->setText(QApplication::translate("MyWidget", "\350\207\252\345\212\250\345\256\214\346\210\220:", 0));
        timeEdit->setDisplayFormat(QApplication::translate("MyWidget", "h:mm:ssA", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
