/**
*	@file firstdateform.h
*	@author Kirill Kotsko
*	@version 1.2
*/
#ifndef FIRSTDATEFORM_H
#define FIRSTDATEFORM_H

#include <QDialog>
#include "WorkWithDate.h"

namespace Ui {
class FirstDateForm;
}

/**
 * @brief Form to fill two custom dates
 */
class FirstDateForm : public QDialog
{
    Q_OBJECT

public:
    explicit FirstDateForm(QWidget *parent = nullptr);
    ~FirstDateForm();

private slots:

    /**
     * @brief button accept
     */
    void on_buttonBox_accepted();

signals:
    /**
     * @brief two date info to transfer
     * @param info
     */
    void accept(const TimeManagment& data);

private:

    // User interface
    Ui::FirstDateForm *ui;
};

#endif // FIRSTDATEFORM_H
