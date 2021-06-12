/**
*	@file showdiffform.h
*	@author Kirill Kotsko
*	@version 1.2
*/
#ifndef SHOWDIFFFORM_H
#define SHOWDIFFFORM_H

#include <QWidget>
#include "WorkWithDate.h"

namespace Ui {
class ShowDiffForm;
}

/**
 * @brief Form for detail information about dates.
 */
class ShowDiffForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShowDiffForm(QWidget *parent = nullptr);
    ~ShowDiffForm();

    /**
     * @brief set TimeManagment current
     * @param tmp
     */
    void SetCurrentTimeManagment(const TimeManagment& tmp);

    /**
     * @brief fill the info of (TimeManagment current)
     */
    void change_info();

private slots:

    /**
     * @brief GMT to change
     * @param gmt value
     */
    void on_comboBox_currentTextChanged(const QString &arg1);

    /**
     * @brief change format output of difference between date
     * @param format(mode)
     */
    void on_comboBox_2_currentIndexChanged(int index);

private:

    // User interface
    Ui::ShowDiffForm *ui;

    // Information which consist in this form
    TimeManagment current;

};

#endif // SHOWDIFFFORM_H
