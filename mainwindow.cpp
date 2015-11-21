#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "popupdialog.h"
#include <QTextStream>
#include <sstream>
#include <qfile.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pressTheRedButton_clicked()
{
    ui->textBrowser->setPlainText("Hello World");
    twoNumbers = "";
    float x = .2;
    otherNumber << x << 0;
    std::string output;
    otherNumber >> output;
    QString y = QString::fromStdString(output);
    ui->textBrowser->setPlainText(y);
    ui->textBrowser->setPlainText(QString::number((sX.b),10));

   // ui->textBrowser->setPlainText();
}

void MainWindow::on_plainTextEdit_textChanged()
{
    ui->textBrowser->setPlainText("You changed the text in the box");
}

void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
/*
    twoNumbers.append(arg1);
    twoNumbers.append(" ");
    twoNumbers.append(arg2);
  */
    QString one = QString::number(arg1,10);
    QString two = QString::number(arg2,10);
    one.append(" ");
    one.append(two);

    twoNumbers.append(" <|> ");
    twoNumbers.append(one);
  ui->textBrowser->setPlainText(twoNumbers);
}

void MainWindow::on_pushButton_clicked()
{

    test *y =&sX;
    popUpDialog *display = new popUpDialog(this, y);
    display->exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    using namespace std;
    QString filename = "test.txt";
    QFile file (filename);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream stream (&file);
        stream << ui->lineEdit->text() << endl;
    }

}
