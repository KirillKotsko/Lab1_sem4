/********************************************************************************
** Form generated from reading UI file 'firstdateform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTDATEFORM_H
#define UI_FIRSTDATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_FirstDateForm
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBoxHour;
    QSpinBox *spinBoxMinute;
    QSpinBox *spinBoxSeconds;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinBoxDay;
    QSpinBox *spinBoxMonth;
    QSpinBox *spinBoxYear;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBoxDay_2;
    QSpinBox *spinBoxMinute_2;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *spinBoxHour_2;
    QSpinBox *spinBoxMonth_2;
    QSpinBox *spinBoxYear_2;
    QLabel *label_10;
    QSpinBox *spinBoxSeconds_2;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *FirstDateForm)
    {
        if (FirstDateForm->objectName().isEmpty())
            FirstDateForm->setObjectName(QString::fromUtf8("FirstDateForm"));
        FirstDateForm->resize(572, 328);
        FirstDateForm->setMinimumSize(QSize(572, 328));
        FirstDateForm->setMaximumSize(QSize(572, 328));
        buttonBox = new QDialogButtonBox(FirstDateForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBoxHour = new QSpinBox(FirstDateForm);
        spinBoxHour->setObjectName(QString::fromUtf8("spinBoxHour"));
        spinBoxHour->setGeometry(QRect(80, 100, 51, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        spinBoxHour->setFont(font);
        spinBoxHour->setMaximum(23);
        spinBoxMinute = new QSpinBox(FirstDateForm);
        spinBoxMinute->setObjectName(QString::fromUtf8("spinBoxMinute"));
        spinBoxMinute->setGeometry(QRect(210, 100, 51, 31));
        spinBoxMinute->setFont(font);
        spinBoxMinute->setMaximum(59);
        spinBoxSeconds = new QSpinBox(FirstDateForm);
        spinBoxSeconds->setObjectName(QString::fromUtf8("spinBoxSeconds"));
        spinBoxSeconds->setGeometry(QRect(350, 100, 51, 31));
        spinBoxSeconds->setFont(font);
        spinBoxSeconds->setMaximum(59);
        label = new QLabel(FirstDateForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 271, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(16);
        label->setFont(font1);
        label_2 = new QLabel(FirstDateForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 51, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_3 = new QLabel(FirstDateForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 100, 81, 31));
        label_3->setFont(font2);
        label_4 = new QLabel(FirstDateForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 100, 91, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(FirstDateForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(410, 100, 91, 31));
        label_5->setFont(font2);
        spinBoxDay = new QSpinBox(FirstDateForm);
        spinBoxDay->setObjectName(QString::fromUtf8("spinBoxDay"));
        spinBoxDay->setGeometry(QRect(80, 60, 51, 31));
        spinBoxDay->setFont(font);
        spinBoxDay->setMinimum(1);
        spinBoxDay->setMaximum(31);
        spinBoxMonth = new QSpinBox(FirstDateForm);
        spinBoxMonth->setObjectName(QString::fromUtf8("spinBoxMonth"));
        spinBoxMonth->setGeometry(QRect(140, 60, 51, 31));
        spinBoxMonth->setFont(font);
        spinBoxMonth->setMinimum(1);
        spinBoxMonth->setMaximum(12);
        spinBoxYear = new QSpinBox(FirstDateForm);
        spinBoxYear->setObjectName(QString::fromUtf8("spinBoxYear"));
        spinBoxYear->setGeometry(QRect(200, 60, 61, 31));
        spinBoxYear->setFont(font);
        spinBoxYear->setMinimum(1);
        spinBoxYear->setMaximum(4000);
        spinBoxYear->setValue(2000);
        label_6 = new QLabel(FirstDateForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 51, 31));
        label_6->setFont(font2);
        label_7 = new QLabel(FirstDateForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 230, 81, 31));
        label_7->setFont(font2);
        spinBoxDay_2 = new QSpinBox(FirstDateForm);
        spinBoxDay_2->setObjectName(QString::fromUtf8("spinBoxDay_2"));
        spinBoxDay_2->setGeometry(QRect(80, 190, 51, 31));
        spinBoxDay_2->setFont(font);
        spinBoxDay_2->setMinimum(1);
        spinBoxDay_2->setMaximum(31);
        spinBoxMinute_2 = new QSpinBox(FirstDateForm);
        spinBoxMinute_2->setObjectName(QString::fromUtf8("spinBoxMinute_2"));
        spinBoxMinute_2->setGeometry(QRect(210, 230, 51, 31));
        spinBoxMinute_2->setFont(font);
        spinBoxMinute_2->setMaximum(59);
        label_8 = new QLabel(FirstDateForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 230, 91, 31));
        label_8->setFont(font2);
        label_9 = new QLabel(FirstDateForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 190, 51, 31));
        label_9->setFont(font2);
        spinBoxHour_2 = new QSpinBox(FirstDateForm);
        spinBoxHour_2->setObjectName(QString::fromUtf8("spinBoxHour_2"));
        spinBoxHour_2->setGeometry(QRect(80, 230, 51, 31));
        spinBoxHour_2->setFont(font);
        spinBoxHour_2->setMaximum(23);
        spinBoxMonth_2 = new QSpinBox(FirstDateForm);
        spinBoxMonth_2->setObjectName(QString::fromUtf8("spinBoxMonth_2"));
        spinBoxMonth_2->setGeometry(QRect(140, 190, 51, 31));
        spinBoxMonth_2->setFont(font);
        spinBoxMonth_2->setMinimum(1);
        spinBoxMonth_2->setMaximum(12);
        spinBoxYear_2 = new QSpinBox(FirstDateForm);
        spinBoxYear_2->setObjectName(QString::fromUtf8("spinBoxYear_2"));
        spinBoxYear_2->setGeometry(QRect(200, 190, 61, 31));
        spinBoxYear_2->setFont(font);
        spinBoxYear_2->setMinimum(1);
        spinBoxYear_2->setMaximum(4000);
        spinBoxYear_2->setValue(2000);
        label_10 = new QLabel(FirstDateForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(410, 230, 91, 31));
        label_10->setFont(font2);
        spinBoxSeconds_2 = new QSpinBox(FirstDateForm);
        spinBoxSeconds_2->setObjectName(QString::fromUtf8("spinBoxSeconds_2"));
        spinBoxSeconds_2->setGeometry(QRect(350, 230, 51, 31));
        spinBoxSeconds_2->setFont(font);
        spinBoxSeconds_2->setMaximum(59);
        label_11 = new QLabel(FirstDateForm);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 150, 271, 31));
        label_11->setFont(font1);
        label_12 = new QLabel(FirstDateForm);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 230, 51, 31));
        label_12->setFont(font2);

        retranslateUi(FirstDateForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), FirstDateForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FirstDateForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(FirstDateForm);
    } // setupUi

    void retranslateUi(QDialog *FirstDateForm)
    {
        FirstDateForm->setWindowTitle(QApplication::translate("FirstDateForm", "Dialog", nullptr));
        label->setText(QApplication::translate("FirstDateForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\277\320\265\321\200\321\210\321\203 \320\264\320\260\321\202\321\203:", nullptr));
        label_2->setText(QApplication::translate("FirstDateForm", "\320\247\320\260\321\201:", nullptr));
        label_3->setText(QApplication::translate("FirstDateForm", "\320\263\320\276\320\264\320\270\320\275,", nullptr));
        label_4->setText(QApplication::translate("FirstDateForm", "\321\205\320\262\320\270\320\273\320\270\320\275,", nullptr));
        label_5->setText(QApplication::translate("FirstDateForm", "\321\201\320\265\320\272\321\203\320\275\320\264.", nullptr));
        label_6->setText(QApplication::translate("FirstDateForm", "\320\224\320\260\321\202\320\260:", nullptr));
        label_7->setText(QApplication::translate("FirstDateForm", "\320\263\320\276\320\264\320\270\320\275,", nullptr));
        label_8->setText(QApplication::translate("FirstDateForm", "\321\205\320\262\320\270\320\273\320\270\320\275,", nullptr));
        label_9->setText(QApplication::translate("FirstDateForm", "\320\224\320\260\321\202\320\260:", nullptr));
        label_10->setText(QApplication::translate("FirstDateForm", "\321\201\320\265\320\272\321\203\320\275\320\264.", nullptr));
        label_11->setText(QApplication::translate("FirstDateForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\264\321\200\321\203\320\263\321\203 \320\264\320\260\321\202\321\203:", nullptr));
        label_12->setText(QApplication::translate("FirstDateForm", "\320\247\320\260\321\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstDateForm: public Ui_FirstDateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTDATEFORM_H
