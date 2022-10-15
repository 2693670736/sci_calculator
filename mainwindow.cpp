#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //��������򣬰�ť�����㵥Ԫ����ʾ�򣬴𰸿�Ķ���
    mycalculator=new calcu();
    inputEdit=new QLineEdit(this);
    beginbutton=new QPushButton(this);
    basicinfo=new QLabel(this);
    resultinfo=new QLabel(this);

    //���ô��ڴ�С
    this->resize(500,500);
    inputEdit->move(50,50);
    //������ʾ��Ϣ
    inputEdit->setPlaceholderText("please input formula...");
    //���������ʾ��һ���������ť
    inputEdit->setClearButtonEnabled(true);
    //����������С
    inputEdit->resize(400,30);

    //���ð�ť��С
    beginbutton->resize(70,30);
    //���ð�ť����
    beginbutton->setText("Begin");
    //���ð�ťλ��
    beginbutton->move(215,110);

    //���ô𰸿�λ��
    resultinfo->move(100,140);
    //���ô𰸿��С
    resultinfo->resize(300,30);

    //������ʾ��λ��
    basicinfo->move(50,190);
    //������ʾ���С
    basicinfo->resize(400,300);
    //������ʾ��Ϣ
    basicinfo->setText("Welcome to use Calculator Ver1.0 \n\n"
                       "Instructions for use\n expression contains: \n"
                       "1.plus(+),2.subtraction(-),3.multiplication(*),4.division(/)\n"
                       "5.modulo(%),6.square(&),7.power(^)\n\n"
                       "Expression ends with '=' \n"
                       "After typing, press Enter or Start to get the answer");
    //�����У��������ְ汾

    //ʵ�ְ�ȷ���õ���
    QObject::connect(beginbutton,&QPushButton::clicked,[=](){
        QString temp = inputEdit->text();
        mycalculator->ch=temp;
        qDebug()<<mycalculator->ch;
        result=mycalculator->getReult();
        resultinfo->setText(QString::number(result,'f',8));
    });
    //ʵ�ֻس��õ���
    QObject::connect(inputEdit,&QLineEdit::returnPressed,[=](){
        QString temp = inputEdit->text();
        mycalculator->ch=temp;
        qDebug()<<mycalculator->ch;
       result=mycalculator->getReult();
      resultinfo->setText(QString::number(result,'f',8));
    });

}

MainWindow::~MainWindow()
{
    delete ui;

}
