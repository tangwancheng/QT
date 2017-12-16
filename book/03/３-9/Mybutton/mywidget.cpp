#include <QMenu>
#include <QDebug>
#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->pushBtn1->setText(tr("&nihao"));
    ui->pushBtn2->setText(tr("帮助(&H)"));
    ui->pushBtn2->setIcon(QIcon("../Mybutton/image/Bkangpingmajiang2.png"));
    ui->pushBtn3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("../Mybutton/image/y_quanbuanniu2.png"),tr("放大"));
    ui->pushBtn3->setMenu(menu);


}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushBtn1_toggled(bool checked)
{
    qDebug()<<tr("按钮是否按下:")<<checked;
}

void MyWidget::on_checkBox_clicked()
{
    bool state = ui->checkBox->isChecked();
    qDebug()<<tr("按钮状态")<<state;
}
