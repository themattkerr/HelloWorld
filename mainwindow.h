#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sstream>

struct test{
    int a;
    int b;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
     QString twoNumbers;
    std::stringstream otherNumber;
     test sX;

    ~MainWindow();


private slots:
    void on_pressTheRedButton_clicked();

    void on_plainTextEdit_textChanged();

    void on_textInput_objectNameChanged(const QString &objectName);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
