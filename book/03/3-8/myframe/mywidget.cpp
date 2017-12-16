#include "mywidget.h"
#include "ui_mywidget.h"
#include "mywidget.h"
#include <QApplication>
#include <QPixmap>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QFont font;
    font.setFamily("华文行楷");
    font.setPointSize(20);
    font.setBold(true);
    font.setItalic(true);
    ui->label->setFont(font);
    ui->label->setPixmap(QPixmap("/home/tangwch/tangwch/timg.jpeg"));
    QString str = "888.1234";
    ui->lcdNumber->display(str);

}

MyWidget::~MyWidget()
{
    delete ui;
}


