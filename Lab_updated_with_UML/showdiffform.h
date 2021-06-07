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

private:
    Ui::ShowDiffForm *ui;
    TimeManagment current;

};

#endif // SHOWDIFFFORM_H
