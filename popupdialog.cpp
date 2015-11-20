#include "popupdialog.h"
#include "ui_popupdialog.h"
#include "mainwindow.h"

popUpDialog::popUpDialog(QWidget *parent, test *x) :
    QDialog(parent),
    ui(new Ui::popUpDialog)
{
    ui->setupUi(this);
    x->b = 100;
    x->a = 10;
    QStringList qslLables;
    qslLables << "This" << "thing"<<"rocks";
    ui->textBrowser->setText(QString::number(x->b,10));
    ui->tableWidget->setRowCount(x->a);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(qslLables);
}


popUpDialog::~popUpDialog()
{

    delete ui;
}

void popUpDialog::on_tableWidget_cellDoubleClicked(int row, int column)
{
    QString CellLocation;
    CellLocation.append(QString::number(row,10));
    CellLocation.append(" ");
    CellLocation.append (QString::number(column, 10));
    CellLocation.append(" | ");

    ui->textBrowser->setText(CellLocation);
}

void popUpDialog::on_pushButton_clicked()
{
    QString strthing = "ello";
    ui->tableWidget->setItem(2,2,new QTableWidgetItem (strthing));
}

/*void popUpDialog::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    item->setBackgroundColor(100);

}
*/
