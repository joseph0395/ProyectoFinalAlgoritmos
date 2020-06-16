/********************************************************************************
** Form generated from reading UI file 'AirLines.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRLINES_H
#define UI_AIRLINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AirLines
{
public:
    QLabel *jlbImage;
    QPushButton *jbtnUp;
    QLabel *jlAirlines;
    QPushButton *jbtnDown;
    QPushButton *jbtnAddAirline;
    QLineEdit *lEAddAirline;
    QPushButton *jbtnSelecAirline;
    QLabel *jlbCountriesFirst;
    QComboBox *jcbxCountriesFirst;
    QComboBox *jcbxCountriesSecond;
    QLabel *jlbCountriesSecond;
    QLabel *jlbOutputHourFirts;
    QLineEdit *lEOutputHourFirts;
    QLabel *jlbInputHourFirts;
    QLineEdit *lEInputHourFirts;
    QPushButton *jbtnAddHoursFirst;
    QLabel *jlbOutputHourSecond;
    QLineEdit *lEOutputHourSecond;
    QLabel *jlbInputHourSecond;
    QLineEdit *lEInputHourSecond;
    QPushButton *jbtnAddHoursSecond;

    void setupUi(QDialog *AirLines)
    {
        if (AirLines->objectName().isEmpty())
            AirLines->setObjectName(QString::fromUtf8("AirLines"));
        AirLines->resize(870, 375);
        jlbImage = new QLabel(AirLines);
        jlbImage->setObjectName(QString::fromUtf8("jlbImage"));
        jlbImage->setGeometry(QRect(0, 0, 871, 381));
        jlbImage->setPixmap(QPixmap(QString::fromUtf8(":/imagenes qt/dragon  lich volteado.jpeg")));
        jlbImage->setScaledContents(true);
        jbtnUp = new QPushButton(AirLines);
        jbtnUp->setObjectName(QString::fromUtf8("jbtnUp"));
        jbtnUp->setGeometry(QRect(20, 20, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Gabriola"));
        font.setPointSize(16);
        font.setUnderline(true);
        jbtnUp->setFont(font);
        jbtnUp->setCursor(QCursor(Qt::PointingHandCursor));
        jlAirlines = new QLabel(AirLines);
        jlAirlines->setObjectName(QString::fromUtf8("jlAirlines"));
        jlAirlines->setGeometry(QRect(70, 70, 221, 61));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlAirlines->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        jlAirlines->setFont(font1);
        jbtnDown = new QPushButton(AirLines);
        jbtnDown->setObjectName(QString::fromUtf8("jbtnDown"));
        jbtnDown->setGeometry(QRect(190, 20, 141, 41));
        jbtnDown->setFont(font);
        jbtnDown->setCursor(QCursor(Qt::PointingHandCursor));
        jbtnAddAirline = new QPushButton(AirLines);
        jbtnAddAirline->setObjectName(QString::fromUtf8("jbtnAddAirline"));
        jbtnAddAirline->setGeometry(QRect(10, 320, 141, 41));
        jbtnAddAirline->setFont(font);
        jbtnAddAirline->setCursor(QCursor(Qt::PointingHandCursor));
        lEAddAirline = new QLineEdit(AirLines);
        lEAddAirline->setObjectName(QString::fromUtf8("lEAddAirline"));
        lEAddAirline->setGeometry(QRect(160, 320, 161, 41));
        lEAddAirline->setFont(font1);
        jbtnSelecAirline = new QPushButton(AirLines);
        jbtnSelecAirline->setObjectName(QString::fromUtf8("jbtnSelecAirline"));
        jbtnSelecAirline->setGeometry(QRect(100, 150, 141, 41));
        jbtnSelecAirline->setFont(font);
        jbtnSelecAirline->setCursor(QCursor(Qt::PointingHandCursor));
        jlbCountriesFirst = new QLabel(AirLines);
        jlbCountriesFirst->setObjectName(QString::fromUtf8("jlbCountriesFirst"));
        jlbCountriesFirst->setGeometry(QRect(380, 30, 131, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlbCountriesFirst->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        jlbCountriesFirst->setFont(font2);
        jcbxCountriesFirst = new QComboBox(AirLines);
        jcbxCountriesFirst->setObjectName(QString::fromUtf8("jcbxCountriesFirst"));
        jcbxCountriesFirst->setGeometry(QRect(512, 20, 181, 41));
        jcbxCountriesSecond = new QComboBox(AirLines);
        jcbxCountriesSecond->setObjectName(QString::fromUtf8("jcbxCountriesSecond"));
        jcbxCountriesSecond->setGeometry(QRect(520, 240, 181, 41));
        jlbCountriesSecond = new QLabel(AirLines);
        jlbCountriesSecond->setObjectName(QString::fromUtf8("jlbCountriesSecond"));
        jlbCountriesSecond->setGeometry(QRect(370, 240, 131, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlbCountriesSecond->setPalette(palette2);
        jlbCountriesSecond->setFont(font2);
        jlbOutputHourFirts = new QLabel(AirLines);
        jlbOutputHourFirts->setObjectName(QString::fromUtf8("jlbOutputHourFirts"));
        jlbOutputHourFirts->setGeometry(QRect(730, 10, 121, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlbOutputHourFirts->setPalette(palette3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier New"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        jlbOutputHourFirts->setFont(font3);
        lEOutputHourFirts = new QLineEdit(AirLines);
        lEOutputHourFirts->setObjectName(QString::fromUtf8("lEOutputHourFirts"));
        lEOutputHourFirts->setGeometry(QRect(730, 30, 113, 22));
        jlbInputHourFirts = new QLabel(AirLines);
        jlbInputHourFirts->setObjectName(QString::fromUtf8("jlbInputHourFirts"));
        jlbInputHourFirts->setGeometry(QRect(730, 70, 121, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlbInputHourFirts->setPalette(palette4);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier New"));
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        jlbInputHourFirts->setFont(font4);
        lEInputHourFirts = new QLineEdit(AirLines);
        lEInputHourFirts->setObjectName(QString::fromUtf8("lEInputHourFirts"));
        lEInputHourFirts->setGeometry(QRect(730, 90, 113, 22));
        jbtnAddHoursFirst = new QPushButton(AirLines);
        jbtnAddHoursFirst->setObjectName(QString::fromUtf8("jbtnAddHoursFirst"));
        jbtnAddHoursFirst->setGeometry(QRect(740, 120, 93, 28));
        jlbOutputHourSecond = new QLabel(AirLines);
        jlbOutputHourSecond->setObjectName(QString::fromUtf8("jlbOutputHourSecond"));
        jlbOutputHourSecond->setGeometry(QRect(730, 230, 121, 21));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlbOutputHourSecond->setPalette(palette5);
        jlbOutputHourSecond->setFont(font4);
        lEOutputHourSecond = new QLineEdit(AirLines);
        lEOutputHourSecond->setObjectName(QString::fromUtf8("lEOutputHourSecond"));
        lEOutputHourSecond->setGeometry(QRect(730, 250, 113, 22));
        jlbInputHourSecond = new QLabel(AirLines);
        jlbInputHourSecond->setObjectName(QString::fromUtf8("jlbInputHourSecond"));
        jlbInputHourSecond->setGeometry(QRect(730, 290, 121, 21));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        jlbInputHourSecond->setPalette(palette6);
        jlbInputHourSecond->setFont(font4);
        lEInputHourSecond = new QLineEdit(AirLines);
        lEInputHourSecond->setObjectName(QString::fromUtf8("lEInputHourSecond"));
        lEInputHourSecond->setGeometry(QRect(730, 310, 113, 22));
        jbtnAddHoursSecond = new QPushButton(AirLines);
        jbtnAddHoursSecond->setObjectName(QString::fromUtf8("jbtnAddHoursSecond"));
        jbtnAddHoursSecond->setGeometry(QRect(740, 340, 93, 28));

        retranslateUi(AirLines);

        QMetaObject::connectSlotsByName(AirLines);
    } // setupUi

    void retranslateUi(QDialog *AirLines)
    {
        AirLines->setWindowTitle(QCoreApplication::translate("AirLines", "Seleccion de viajes", nullptr));
        jlbImage->setText(QString());
        jbtnUp->setText(QCoreApplication::translate("AirLines", "Atras", nullptr));
        jlAirlines->setText(QCoreApplication::translate("AirLines", "AirLines", nullptr));
        jbtnDown->setText(QCoreApplication::translate("AirLines", "Siguiente", nullptr));
        jbtnAddAirline->setText(QCoreApplication::translate("AirLines", "A\303\261adir", nullptr));
        lEAddAirline->setText(QString());
        jbtnSelecAirline->setText(QCoreApplication::translate("AirLines", "Seleccionar", nullptr));
        jlbCountriesFirst->setText(QCoreApplication::translate("AirLines", "Destinos", nullptr));
        jlbCountriesSecond->setText(QCoreApplication::translate("AirLines", "Destinos", nullptr));
        jlbOutputHourFirts->setText(QCoreApplication::translate("AirLines", "Hora de salida", nullptr));
        lEOutputHourFirts->setText(QString());
        jlbInputHourFirts->setText(QCoreApplication::translate("AirLines", "Hora de llegada", nullptr));
        jbtnAddHoursFirst->setText(QCoreApplication::translate("AirLines", "Agregar", nullptr));
        jlbOutputHourSecond->setText(QCoreApplication::translate("AirLines", "Hora de salida", nullptr));
        jlbInputHourSecond->setText(QCoreApplication::translate("AirLines", "Hora de llegada", nullptr));
        jbtnAddHoursSecond->setText(QCoreApplication::translate("AirLines", "agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AirLines: public Ui_AirLines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRLINES_H
