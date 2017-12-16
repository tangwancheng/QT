#include <QDialog>
#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QDialog* dialog = new QDialog(this);
    dialog->setModal(true);
    dialog->show();
  //  QDialog dialog(this);
  //dialog.exec();
}

MyWidget::~MyWidget()
{
    delete ui;
}
