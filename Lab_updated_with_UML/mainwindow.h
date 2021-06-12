/**
*	@file mainwindow.h
*	@author Kirill Kotsko
*	@version 1.2
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "WorkWithDate.h"
#include "firstdateform.h"
#include "showdiffform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief Main window of the program
 *
 * Program is represent work with date.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    /**
     * @brief button to open form for working with to custom date
     */
    void on_formButton_clicked();

    /**
     * @brief button for quit from the program
     */
    void on_quitButton_clicked();

private:

    // Form to open
    FirstDateForm firstdate;

    //Detail information
    ShowDiffForm show_diff_form;

    // User interface of the main window
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
