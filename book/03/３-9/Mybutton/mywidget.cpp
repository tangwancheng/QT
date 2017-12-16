#include <QDebug>
#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushBtn1_toggled(bool checked)
{
    qDebug()<<tr("按钮是否按下:")<<checked
}
