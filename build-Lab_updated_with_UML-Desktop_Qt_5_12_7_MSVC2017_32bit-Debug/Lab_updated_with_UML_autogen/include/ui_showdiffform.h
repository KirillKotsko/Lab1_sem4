/********************************************************************************
** Form generated from reading UI file 'showdiffform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDIFFFORM_H
#define UI_SHOWDIFFFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowDiffForm
{
public:

    void setupUi(QWidget *ShowDiffForm)
    {
        if (ShowDiffForm->objectName().isEmpty())
            ShowDiffForm->setObjectName(QString::fromUtf8("ShowDiffForm"));
        ShowDiffForm->resize(400, 300);

        retranslateUi(ShowDiffForm);

        QMetaObject::connectSlotsByName(ShowDiffForm);
    } // setupUi

    void retranslateUi(QWidget *ShowDiffForm)
    {
        ShowDiffForm->setWindowTitle(QApplication::translate("ShowDiffForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowDiffForm: public Ui_ShowDiffForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDIFFFORM_H
