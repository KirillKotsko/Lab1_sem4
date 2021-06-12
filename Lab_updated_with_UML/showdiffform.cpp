#include "showdiffform.h"
#include "ui_showdiffform.h"

ShowDiffForm::ShowDiffForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowDiffForm)
{
    ui->setupUi(this);
}

ShowDiffForm::~ShowDiffForm()
{
    delete ui;
}

void ShowDiffForm::SetCurrentTimeManagment(const TimeManagment& tmp){
    current = tmp;
}

void ShowDiffForm::change_info(){
    ui->todayDate->setText(QString::fromStdString(current.show_current_date_with_time().str()));
    ui->firstDate->setText(QString::fromStdString(current.show_date_with_time(1).str()));
    ui->secondDate->setText(QString::fromStdString(current.show_date_with_time(2).str()));
    ui->todayDate_alt->setText(QString::fromStdString(current.alternative_insert_of_date_with_time(0).str()));
    ui->firstDate_alt->setText(QString::fromStdString(current.alternative_insert_of_date_with_time(1).str()));
    ui->secondDate_alt->setText(QString::fromStdString(current.alternative_insert_of_date_with_time(2).str()));
    ui->dayOfWeek1->setText(QString::fromStdString(current.day_of_the_week(0).str()));
    ui->dayOfWeek2->setText(QString::fromStdString(current.day_of_the_week(1).str()));
    ui->dayOfWeek3->setText(QString::fromStdString(current.day_of_the_week(2).str()));
    ui->wMounth1->setText(QString::number(current.week_in_month(0)));
    ui->wMounth2->setText(QString::number(current.week_in_month(1)));
    ui->wMounth3->setText(QString::number(current.week_in_month(2)));
    ui->wYear1->setText(QString::number(current.week_in_year(0)));
    ui->wYear2->setText(QString::number(current.week_in_year(1)));
    ui->wYear3->setText(QString::number(current.week_in_year(2)));
    ui->difference->setText(QString::fromStdString(current.show_difference(ui->comboBox_2->currentIndex()).str()));
    ui->textBrowser->setText(QString::fromStdString(current.show_julian_calendar().str()));
}


void ShowDiffForm::on_comboBox_currentTextChanged(const QString &arg1)
{
    current.change_GMT(arg1.toInt());
    ui->todayDate->setText(QString::fromStdString(current.show_current_date_with_time().str()));
    ui->todayDate_alt->setText(QString::fromStdString(current.alternative_insert_of_date_with_time(0).str()));
    ui->dayOfWeek1->setText(QString::fromStdString(current.day_of_the_week(0).str()));
    ui->wMounth1->setText(QString::number(current.week_in_month(0)));
    ui->wYear1->setText(QString::number(current.week_in_year(0)));
    ui->textBrowser->setText(QString::fromStdString(current.show_julian_calendar().str()));
}

void ShowDiffForm::on_comboBox_2_currentIndexChanged(int index)
{
    ui->difference->setText(QString::fromStdString(current.show_difference(index).str()));
}
