#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include "AirLines.h"
#include "Editor.h"
#include "FlightWindow.h"

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



void MainWindow::on_jbtnEditor_clicked(){
    Editor editor;
    editor.setModal(true);
    editor.exec();

}

void MainWindow::on_jbtnFligtWindow_clicked(){
    FlightWindow fligthWindos;
    fligthWindos.setModal(true);
    fligthWindos.exec();

}
