#include <QDialog>
#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    connect(ui->showChildButton,&QPushButton::clicked,this,&myWidget::showChildDialog);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::showChildDialog()
{
    QDialog *dialog = new QDialog(this);
    dialog->show();
}
