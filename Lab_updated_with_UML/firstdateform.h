#ifndef FIRSTDATEFORM_H
#define FIRSTDATEFORM_H

#include <QDialog>

namespace Ui {
class FirstDateForm;
}

class FirstDateForm : public QDialog
{
    Q_OBJECT

public:
    explicit FirstDateForm(QWidget *parent = nullptr);
    ~FirstDateForm();

private:
    Ui::FirstDateForm *ui;
};

#endif // FIRSTDATEFORM_H
