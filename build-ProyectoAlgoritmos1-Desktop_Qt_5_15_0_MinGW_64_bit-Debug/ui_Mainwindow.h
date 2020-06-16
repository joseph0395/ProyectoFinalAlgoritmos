/********************************************************************************
** Form generated from reading UI file 'Mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *jlImage;
    QPushButton *selectAirLine;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 601);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        jlImage = new QLabel(centralwidget);
        jlImage->setObjectName(QString::fromUtf8("jlImage"));
        jlImage->setGeometry(QRect(0, 0, 801, 571));
        jlImage->setFrameShape(QFrame::NoFrame);
        jlImage->setPixmap(QPixmap(QString::fromUtf8(":/imagenes qt/dragon lich 2.jpg")));
        jlImage->setScaledContents(true);
        jlImage->setWordWrap(false);
        selectAirLine = new QPushButton(centralwidget);
        selectAirLine->setObjectName(QString::fromUtf8("selectAirLine"));
        selectAirLine->setGeometry(QRect(600, 20, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Gabriola"));
        font.setPointSize(16);
        font.setUnderline(true);
        selectAirLine->setFont(font);
        selectAirLine->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 80, 151, 41));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AeroDragons ;D", nullptr));
        jlImage->setText(QString());
        selectAirLine->setText(QCoreApplication::translate("MainWindow", "Aerolineas", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Viajes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
