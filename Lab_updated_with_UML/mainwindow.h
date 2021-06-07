#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "WorkWithDate.h"
#include "firstdateform.h"
#include "showdiffform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_formButton_clicked();

    void on_quitButton_clicked();

private:
    FirstDateForm firstdate;
    ShowDiffForm show_diff_form;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
