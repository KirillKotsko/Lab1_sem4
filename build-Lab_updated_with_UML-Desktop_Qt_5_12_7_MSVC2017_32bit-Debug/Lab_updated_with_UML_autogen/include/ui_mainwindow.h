/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *formButton;
    QLabel *label;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formButton = new QPushButton(centralwidget);
        formButton->setObjectName(QString::fromUtf8("formButton"));
        formButton->setGeometry(QRect(90, 160, 341, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        formButton->setFont(font);
        formButton->setMouseTracking(true);
        formButton->setCheckable(false);
        formButton->setAutoDefault(false);
        formButton->setFlat(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 90, 371, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(90, 280, 341, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(20);
        quitButton->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        formButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        formButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\200\321\226\320\262\320\275\321\217\321\202\320\270 \320\264\320\262\321\226 \320\264\320\260\321\202\320\270", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\240\320\276\320\261\320\276\321\202\320\260 \320\267 \320\264\320\260\321\202\320\260\320\274\320\270", nullptr));
        quitButton->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\271\321\202\320\270 \320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
