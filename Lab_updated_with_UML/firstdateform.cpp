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

void FirstDateForm::on_buttonBox_accepted()
{
    TimeManagment a;
    a.set_date_with_time({ui->spinBoxDay->value(),ui->spinBoxMonth->value(),ui->spinBoxYear->value(),
                         ui->spinBoxHour->value(),ui->spinBoxMinute->value(),ui->spinBoxSeconds->value()},1);
    a.set_date_with_time({ui->spinBoxDay_2->value(),ui->spinBoxMonth_2->value(),ui->spinBoxYear_2->value(),
                         ui->spinBoxHour_2->value(),ui->spinBoxMinute_2->value(),ui->spinBoxSeconds_2->value()},2);
    emit accept(a);
}
