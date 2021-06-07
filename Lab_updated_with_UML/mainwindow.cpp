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
        stringstream s1;
        s1 = tmp.alternative_insert_of_date_with_time(0);
        QMessageBox md;
        md.setText(QString::fromStdString(s1.str()));
        md.exec();
        show_diff_form.SetCurrentTimeManagment(tmp);
        show_diff_form.show();
    }
}

void MainWindow::on_quitButton_clicked()
{
    close();
}
