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

QT_BEGIN_NAMESPACE

class Ui_FirstDateForm
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FirstDateForm)
    {
        if (FirstDateForm->objectName().isEmpty())
            FirstDateForm->setObjectName(QString::fromUtf8("FirstDateForm"));
        FirstDateForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(FirstDateForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(FirstDateForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), FirstDateForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FirstDateForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(FirstDateForm);
    } // setupUi

    void retranslateUi(QDialog *FirstDateForm)
    {
        FirstDateForm->setWindowTitle(QApplication::translate("FirstDateForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstDateForm: public Ui_FirstDateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTDATEFORM_H
