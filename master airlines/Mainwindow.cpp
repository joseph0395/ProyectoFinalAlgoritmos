#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include "AirLines.h"
#include "Travel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_selectAirLine_clicked(){
    AirLines airLines;
    airLines.setModal(true);
    airLines.exec();
}//on_selectAirLine_clicked

void MainWindow::on_pushButton_clicked(){
    Travel travel;
    travel.setModal(true);
    travel.exec();
}//on_pushButton_clicked
