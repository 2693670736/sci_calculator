#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QLineEdit" //���������
#include "calcu.h" //���������
#include "QPushButton"
#include "QLabel" //������ʾ��

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    calcu *mycalculator;
    QLineEdit *inputEdit;
    QPushButton *beginbutton;
    QLabel *basicinfo;
    QLabel *resultinfo;
    QLabel *messagebox;
    double result;

    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
