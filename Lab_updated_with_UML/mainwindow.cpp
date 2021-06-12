#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <sstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_formButton_clicked()
{
    TimeManagment tmp;
    QObject::connect(&firstdate, &FirstDateForm::accept, [&tmp](const TimeManagment data){
        tmp = data;
    });
    if(firstdate.exec()){
        show_diff_form.SetCurrentTimeManagment(tmp);
        show_diff_form.change_info();
        show_diff_form.show();
    }
}

void MainWindow::on_quitButton_clicked()
{
    close();
}
