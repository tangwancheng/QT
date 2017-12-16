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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QWidget *page_2;
    QLabel *label_3;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(621, 322);
        frame = new QFrame(MyWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(490, 50, 120, 80));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 10, 161, 41));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(500, 150, 101, 23));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(7);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber->setProperty("value", QVariant(456.123));
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 40, 256, 192));
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(310, 40, 120, 80));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 67, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 10, 67, 17));
        stackedWidget->addWidget(page_2);

        retranslateUi(MyWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        label->setText(QApplication::translate("MyWidget", "TextLabel", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", 0));
        label_3->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
