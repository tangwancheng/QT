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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QPushButton *pushBtn1;
    QPushButton *pushBtn2;
    QPushButton *pushBtn3;
    QGroupBox *groupBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(624, 300);
        pushBtn1 = new QPushButton(MyWidget);
        pushBtn1->setObjectName(QStringLiteral("pushBtn1"));
        pushBtn1->setGeometry(QRect(110, 90, 99, 27));
        pushBtn1->setCheckable(true);
        pushBtn2 = new QPushButton(MyWidget);
        pushBtn2->setObjectName(QStringLiteral("pushBtn2"));
        pushBtn2->setGeometry(QRect(110, 150, 99, 27));
        pushBtn2->setFlat(true);
        pushBtn3 = new QPushButton(MyWidget);
        pushBtn3->setObjectName(QStringLiteral("pushBtn3"));
        pushBtn3->setGeometry(QRect(110, 200, 99, 27));
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(500, 10, 120, 80));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 60, 97, 22));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(0, 20, 97, 22));
        checkBox->setTristate(true);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(0, 40, 97, 22));
        groupBox_2 = new QGroupBox(MyWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(510, 160, 120, 80));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 20, 117, 22));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 40, 117, 22));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 60, 117, 22));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        pushBtn1->setText(QApplication::translate("MyWidget", "PushButton", 0));
        pushBtn2->setText(QApplication::translate("MyWidget", "PushButton", 0));
        pushBtn3->setText(QApplication::translate("MyWidget", "PushButton", 0));
        groupBox->setTitle(QApplication::translate("MyWidget", "\345\244\215\351\200\211\346\241\206", 0));
        checkBox_2->setText(QApplication::translate("MyWidget", "\346\270\270\346\263\263", 0));
        checkBox->setText(QApplication::translate("MyWidget", "\350\267\221\346\255\245", 0));
        checkBox_3->setText(QApplication::translate("MyWidget", "\350\270\242\347\220\203", 0));
        groupBox_2->setTitle(QApplication::translate("MyWidget", "\345\215\225\351\200\211\346\241\206", 0));
        radioButton->setText(QApplication::translate("MyWidget", "\345\276\210\345\245\275", 0));
        radioButton_2->setText(QApplication::translate("MyWidget", "\344\270\200\350\210\254", 0));
        radioButton_3->setText(QApplication::translate("MyWidget", "\344\270\215\345\245\275", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
