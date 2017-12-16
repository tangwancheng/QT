#include <QDebug>
#include <QCompleter>
#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QValidator* validator = new QIntValidator(100,999,this);
    ui->lineEdit3->setValidator(validator);

    QStringList wordList;
    wordList<<"Qt"<<"Qt Creator"<<tr("你好");
    QCompleter* completer = new QCompleter(wordList,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit4->setCompleter(completer);
    //设置时间为现在的系统时间
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    //设置时间的显示格式
    ui->dateTimeEdit->setDisplayFormat((tr("yyyy年MM月dd日ddd HH 时 mm 分 ss 秒 zz毫秒")));
}

MyWidget::~MyWidget()
{
    delete ui;

}

void MyWidget::on_lineEdit3_returnPressed()
{
    ui->lineEdit3->setFocus();
    qDebug()<<ui->lineEdit2->text();
    qDebug()<<ui->lineEdit2->displayText();
}
