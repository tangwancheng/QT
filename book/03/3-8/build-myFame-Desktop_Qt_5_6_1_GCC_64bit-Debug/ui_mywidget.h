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
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QToolBox *ToolBpx;
    QWidget *widget;
    QWidget *page_5;
    QWidget *page_4;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(614, 300);
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(490, 80, 121, 191));
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(490, 0, 120, 80));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 67, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 67, 17));
        stackedWidget->addWidget(page_2);
        ToolBpx = new QToolBox(MyWidget);
        ToolBpx->setObjectName(QStringLiteral("ToolBpx"));
        ToolBpx->setGeometry(QRect(80, 50, 181, 211));
        ToolBpx->setFrameShape(QFrame::Box);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 179, 110));
        ToolBpx->addItem(widget, QStringLiteral("Page 1"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        ToolBpx->addItem(page_5, QString::fromUtf8("\351\241\265"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 179, 110));
        ToolBpx->addItem(page_4, QStringLiteral("Page 2"));

        retranslateUi(MyWidget);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(1);
        ToolBpx->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", 0));
        label_2->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", 0));
        ToolBpx->setItemText(ToolBpx->indexOf(widget), QApplication::translate("MyWidget", "Page 1", 0));
        ToolBpx->setItemText(ToolBpx->indexOf(page_5), QApplication::translate("MyWidget", "\351\241\265", 0));
        ToolBpx->setItemText(ToolBpx->indexOf(page_4), QApplication::translate("MyWidget", "Page 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
