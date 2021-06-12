#ifndef SHOWDIFFFORM_H
#define SHOWDIFFFORM_H

#include <QWidget>
#include "WorkWithDate.h"

namespace Ui {
class ShowDiffForm;
}

class ShowDiffForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShowDiffForm(QWidget *parent = nullptr);
    ~ShowDiffForm();
    void SetCurrentTimeManagment(const TimeManagment& tmp);
    void change_info();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::ShowDiffForm *ui;
    TimeManagment current;

};

#endif // SHOWDIFFFORM_H
