/********************************************************************************
** Form generated from reading UI file 'Travel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVEL_H
#define UI_TRAVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Travel
{
public:

    void setupUi(QDialog *Travel)
    {
        if (Travel->objectName().isEmpty())
            Travel->setObjectName(QString::fromUtf8("Travel"));
        Travel->resize(804, 450);

        retranslateUi(Travel);

        QMetaObject::connectSlotsByName(Travel);
    } // setupUi

    void retranslateUi(QDialog *Travel)
    {
        Travel->setWindowTitle(QCoreApplication::translate("Travel", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Travel: public Ui_Travel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVEL_H
