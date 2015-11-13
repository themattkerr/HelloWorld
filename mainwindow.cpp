#include "mainwindow.h"
#include "ui_mainwindow.h"

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

   // ui->textBrowser->setPlainText();
}

void MainWindow::on_plainTextEdit_textChanged()
{
    ui->textBrowser->setPlainText("You changed the text in the box");
}
