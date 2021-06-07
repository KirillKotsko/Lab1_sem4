#ifndef FIRSTDATEFORM_H
#define FIRSTDATEFORM_H

#include <QDialog>
#include "WorkWithDate.h"

namespace Ui {
class FirstDateForm;
}

class FirstDateForm : public QDialog
{
    Q_OBJECT

public:
    explicit FirstDateForm(QWidget *parent = nullptr);
    ~FirstDateForm();

private slots:

    void on_buttonBox_accepted();

signals:
    void accept(const TimeManagment& data);

private:
    Ui::FirstDateForm *ui;
};

#endif // FIRSTDATEFORM_H
