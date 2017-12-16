#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    errordlg = new QErrorMessage(this);
    ui->setupUi(this);
}

QWizardPage *MyWidget::createPage1()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("介绍"));
    return page;
}

QWizardPage *MyWidget::createPage2()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("用户选择信息"));
    return page;
}

QWizardPage *MyWidget::createPage3()
{
    QWizardPage *page = new QWizardPage;
     page->setTitle(tr("结束"));
     return page;
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    //QColor color = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    QColorDialog dialog(Qt::red,this);
    dialog.setOption(QColorDialog::ShowAlphaChannel);
    dialog.exec();
    QColor color = dialog.currentColor();
    qDebug()<<"color:"<<color;
}

void MyWidget::on_pushButton_2_clicked()
{
    QStringList fileName = QFileDialog::getOpenFileNames(this,tr("文件对话框"),"/home",tr("图片文件(*)"));
    qDebug()<<"fileName:"<<fileName;
}


void MyWidget::on_pushButton_3_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    if(ok)
        ui->pushButton_3->setFont(font);
    else
        qDebug()<<tr("没有选择字体");
}

void MyWidget::on_pushButton_4_clicked()
{
    bool ok;
    //获取字符串
    QString string = QInputDialog::getText(this,tr("输入字符串对话框"),tr("请输入用户名"),
                                           QLineEdit::Normal,tr("admin"),&ok);
    if(ok)qDebug()<<"string:"<<string;
    //获取整数
    int value = QInputDialog::getInt(this,tr("输入整数对话框"),tr("请输入-1000到1000之间的数值"),
                                     100,-1000,1000,10,&ok);
    if(ok)qDebug()<<"value"<<value;
    //获取浮点数
    double value2 = QInputDialog::getDouble(this,tr("输入浮点数对话框"),tr("请输入-1000到1000之间的数值"),
                                             0.00,-1000,1000,2,&ok);
    if(ok)qDebug()<<"value2"<<value2;
    QStringList items;
    items<<tr("条目１")<<tr("条目２");
    //获取条目
    QString item = QInputDialog::getItem(this,tr("输入条目对话框"),tr("请选择或输入一个条目"),items,0,true,&ok);
    if(ok)qDebug()<<"item:"<<item;
}

void MyWidget::on_pushButton_5_clicked()
{
    int ret1 = QMessageBox::question(this,tr("问题对话框"),tr("你了解QT吗"),
                                     QMessageBox::Yes,QMessageBox::No);
    if(ret1 == QMessageBox::Yes)
        qDebug()<<tr("问题!");
    int ret2 = QMessageBox::information(this,tr("提示对话框"),
                                        tr("这是QT书籍"),QMessageBox::Ok);
    if(ret2 == QMessageBox::Ok)
        qDebug()<<tr("提示!");
    int ret3 = QMessageBox::warning(this,tr("警告对话框"),tr("不能提前结束!"),
                                    QMessageBox::Abort);
    if(ret3 == QMessageBox::Abort)
        qDebug()<<tr("警告");
    int ret4 = QMessageBox::critical(this,tr("严重错误对话框"),tr("发现一个严重错误!,现在要关闭所有文件"),
                                     QMessageBox::YesAll);
    if(ret4 == QMessageBox::YesAll)
        qDebug()<<tr("错误");
    QMessageBox::about(this,tr("关于对话框"),tr("yafeilinux致力于qt及　Qtcreator的普及工作"));
    QMessageBox::aboutQt(this,tr("关于对话框"));
}
void MyWidget::on_pushButton_6_clicked()
{
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,500000,this);
    dialog.setWindowTitle(tr("进度对话框"));
    dialog.setWindowModality(Qt::WindowModal);
    dialog.show();
    for(int i = 0; i < 500000; i++)
    {
     dialog.setValue(i);
     QCoreApplication::processEvents();
     if(dialog.wasCanceled())break;
    }
    dialog.setValue(50000);
    qDebug()<<tr("文件复制结束");
}

void MyWidget::on_pushButton_7_clicked()
{
    errordlg->setWindowTitle(tr("错误信息对话框"));
    errordlg->showMessage(tr("这里是出错信息"));
}

void MyWidget::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("向导对话框"));
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.exec();
}













