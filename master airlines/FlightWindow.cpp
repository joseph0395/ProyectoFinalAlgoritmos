#include "FlightWindow.h"
#include "ui_FlightWindow.h"
#include <time.h>
#include <QDebug>
#include "AirLines.h"


FlightWindow::FlightWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FlightWindow)
{
    ui->setupUi(this);

   // offLabels();

}

FlightWindow::~FlightWindow()
{
    delete ui;
}


///////////////////////////////////////////////////////////////////////////////////

void FlightWindow::offLabels(){
    ui->jlbTime1->setVisible(false);
    ui->jlbTime2->setVisible(false);
    ui->jlbTime3->setVisible(false);

    ui->jlbFligth1->setVisible(false);
    ui->jlbFligth2->setVisible(false);
    ui->jlbFligth3->setVisible(false);

    ui->jlbDestination1->setVisible(false);
    ui->jlbDestination2->setVisible(false);
    ui->jlbDestination3->setVisible(false);

}//offLabels


void FlightWindow::addDatesFlight(QList<QString>time,QList<QString>vertix){

    if(time.length()>=1){
        ui->jlbTime1->setText(time.at(0));
        ui->jlbDestination1->setText(vertix.at(0));
        ui->jlbFligth1->setText(createRandomLetter()+createRandomNumber());
    }//Lavel 1

    if(time.length()>=2){
        ui->jlbTime2->setText(time.at(1));
        ui->jlbDestination2->setText(vertix.at(1));
        ui->jlbFligth2->setText(createRandomLetter()+createRandomNumber());
    }//Label 2

    if(time.length()>=3){
        ui->jlbTime3->setText(time.at(2));
        ui->jlbDestination3->setText(vertix.at(2));
        ui->jlbFligth3->setText(createRandomLetter()+createRandomNumber());
    }//Label 3

    if(time.length()>=4){
        ui->jlbTime4->setText(time.at(3));
        ui->jlbDestination4->setText(vertix.at(3));
        ui->jlbFligth4->setText(createRandomLetter()+createRandomNumber());
    }//Label 4


    if(time.length()>=5){
        ui->jlbTime5->setText(time.at(4));
        ui->jlbDestination5->setText(vertix.at(4));
        ui->jlbFligth5->setText(createRandomLetter()+createRandomNumber());
    }//Label 5

    if(time.length()>=6){
        ui->jlbTime6->setText(time.at(5));
        ui->jlbDestination6->setText(vertix.at(5));
        ui->jlbFligth6->setText(createRandomLetter()+createRandomNumber());
    }//Label 6


}//addDatesFlight


QString FlightWindow::createRandomLetter(){
    QString random;

    for(int i=0;i<2;i++){
        random+='a'+rand()%10;
    }


    return random;
}//createRandomLetter


QString FlightWindow::createRandomNumber(){
    QString random;

    for(int i=0;i<3;i++){
        random+='0'+rand()%10;
    }

    return random;
}//createRandomLetter


void FlightWindow::ejecutar(){

}














