#ifndef POPUPDIALOG_H
#define POPUPDIALOG_H
#include "mainwindow.h"

#include <QDialog>

namespace Ui {
class popUpDialog;
}

class popUpDialog : public QDialog
{
    Q_OBJECT

public:
    //explicit
   // popUpDialog(QWidget *parent = 0);
    popUpDialog(QWidget *parent = 0, test *x = 0);
    ~popUpDialog();

private slots:
    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_pushButton_clicked();

   // void on_tableWidget_itemChanged(QTableWidgetItem *item);

private:
    Ui::popUpDialog *ui;
};

#endif // POPUPDIALOG_H
