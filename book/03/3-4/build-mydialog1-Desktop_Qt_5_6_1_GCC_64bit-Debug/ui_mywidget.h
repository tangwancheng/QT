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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QLabel *label;
    QPushButton *showChildButton;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(629, 328);
        label = new QLabel(myWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 80, 151, 17));
        showChildButton = new QPushButton(myWidget);
        showChildButton->setObjectName(QStringLiteral("showChildButton"));
        showChildButton->setGeometry(QRect(270, 200, 221, 27));

        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", 0));
        label->setText(QApplication::translate("myWidget", "my is a zhujiemian", 0));
        showChildButton->setText(QApplication::translate("myWidget", "xian shi zi chuang kou", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
