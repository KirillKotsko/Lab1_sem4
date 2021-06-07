#include "mainwindow.h"
#include "WorkWithDate.h"
#include "Test.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    {
        TestRunner tr;
        RUN_TEST(tr, TestDateWithTimeMinusDateWithTime);
        RUN_TEST(tr, TestDateWithTimeAddDifference);
        RUN_TEST(tr, TestDateWithTimeMinusDifference);
        RUN_TEST(tr, TestWeekDay);
        RUN_TEST(tr, TestWeekInMonth);
        RUN_TEST(tr, TestWeekInYear);
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
