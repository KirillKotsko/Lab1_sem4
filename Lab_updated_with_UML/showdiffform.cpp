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
