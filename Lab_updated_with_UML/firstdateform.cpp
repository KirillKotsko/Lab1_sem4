#include "firstdateform.h"
#include "ui_firstdateform.h"

FirstDateForm::FirstDateForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstDateForm)
{
    ui->setupUi(this);
}

FirstDateForm::~FirstDateForm()
{
    delete ui;
}
