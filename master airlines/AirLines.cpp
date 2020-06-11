#include "AirLines.h"
#include "ui_AirLines.h"
#include <QDebug>
#include <QLinkedList>
#include <QQueue>

AirLines::AirLines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AirLines)
{
    ui->setupUi(this);

}

AirLines::~AirLines()
{
    delete ui;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////
int i=0;
bool paso=false;
QList<QString>list;

QList<QString> AirLines::getListAirlines(){
    list<<"Avianca"<<"Copa Airlines"<<"Iberia"<<"Delta"<<"Latam"<<"American Airlines"<<"Lufthansa";
    return list;
}



void AirLines::on_jbtnUp_clicked(){
    list=getListAirlines();

    if(paso==false){
      i--;
      paso=true;
    }//bool

    if(i>=0 && i<=list.length()-1){
      i--;

    if(i<=-1)
          i=list.length()-1;

      ui->jlAirlines->setText(list.at(i));
    }



}//on_jbtnUp_clicked


void AirLines::on_jbtnDown_clicked(){
    list=getListAirlines();

        if(paso==true){
            i++;
            paso=false;
         }//bool

         if(i>=list.length() )
             i=0;

         if(i>=0 && i<=list.length()-1)
             ui->jlAirlines->setText(list.at(i));

        i++;

}//on_jbtnDown_clicked


void AirLines::on_jbtnSelecAirline_clicked(){
    if(ui->jlAirlines->text()=="Avianca"){
        AviancaCostaPana();
        AviancaCostaMexico();
    }

    if(ui->jlAirlines->text()=="Copa Airlines"){
        copaIrlinesFranciaUSA();
        copaIrlinesEuropaRusia();
    }

}//on_jbtnSelecAirline_clicked


void AirLines::AviancaCostaPana(){
    QString setLabel="Costa Rica->\nPanama";
    ui->jlbCountriesFirst->setText(setLabel);

    double OFirstHour=8.00;
    double IFirstHour=10.00;

    double OSecondHour=9.35;
    double ISecondour=11.35;

    QQueue<double> cola;
    cola.enqueue(ISecondour);
    cola.enqueue(OSecondHour);

    cola.enqueue(IFirstHour);
    cola.enqueue(OFirstHour);

    ui->jcbxCountriesFirst->clear();
    ui->jcbxCountriesFirst->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");
    ui->jcbxCountriesFirst->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");

}//Para agregar las horas y los destinos al primer Label y combo box


void AirLines::AviancaCostaMexico(){
    QString setLabel="Costa Rica->\nMexico";
    ui->jlbCountriesSecond->setText(setLabel);

    double OFirstHour=5.15;
    double IFirstHour=6.45;

    double OSecondHour=9.35;
    double ISecondour=10.55;

    QQueue<double> cola;
    cola.enqueue(ISecondour);
    cola.enqueue(OSecondHour);

    cola.enqueue(IFirstHour);
    cola.enqueue(OFirstHour);

    ui->jcbxCountriesSecond->clear();
    ui->jcbxCountriesSecond->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");
    ui->jcbxCountriesSecond->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" pm");

}//Para agregar las horas y los destinos al segundo Label y combo box


void AirLines::copaIrlinesEuropaRusia(){
    QString setLabel="Europa->\nRusia";
    ui->jlbCountriesFirst->setText(setLabel);

    double OFirstHour=6.35;
    double IFirstHour=11.45;

    double OSecondHour=7.15;
    double ISecondour=11.55;

    QQueue<double> cola;
    cola.enqueue(ISecondour);
    cola.enqueue(OSecondHour);

    cola.enqueue(IFirstHour);
    cola.enqueue(OFirstHour);

    ui->jcbxCountriesFirst->clear();
    ui->jcbxCountriesFirst->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");
    ui->jcbxCountriesFirst->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" pm");
}

void AirLines::copaIrlinesFranciaUSA(){
    QString setLabel="Francia->\nU.S.A";
    ui->jlbCountriesSecond->setText(setLabel);

    double OFirstHour=7.05;
    double IFirstHour=10.07;

    double OSecondHour=8.20;
    double ISecondour=11.35;

    QQueue<double> cola;
    cola.enqueue(ISecondour);
    cola.enqueue(OSecondHour);

    cola.enqueue(IFirstHour);
    cola.enqueue(OFirstHour);

    ui->jcbxCountriesSecond->clear();
    ui->jcbxCountriesSecond->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");
    ui->jcbxCountriesSecond->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" pm");

}

void AirLines::on_jbtnAddAirline_clicked(){


}
