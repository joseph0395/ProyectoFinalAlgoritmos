#include "AirLines.h"
#include "ui_AirLines.h"
#include <QDebug>
#include <QLinkedList>

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
}//on_jbtnSelecAirline_clicked


void AirLines::AviancaCostaPana(){
    QString setLabel="Costa Rica->\nPanama";
    ui->jlbCountriesFirst->setText(setLabel);

    double OFirstHour=8.00;
    double IFirstHour=10.00;

    double OSecondHour=9.30;
    double ISecondour=11.30;

    double OThirdHour=13.00;
    double IThirdHour=15.00;

    double OFourthHour=16.00;
    double IFourthHour=18.00;

    ui->jcbxCountriesFirst->addItem(QString::number(OFirstHour)+"-"+QString::number(IFirstHour)+" am");
    ui->jcbxCountriesFirst->addItem(QString::number(OSecondHour)+"-"+QString::number(ISecondour)+" am");
    ui->jcbxCountriesFirst->addItem(QString::number(OThirdHour)+"-"+QString::number(IThirdHour)+" pm");
    ui->jcbxCountriesFirst->addItem(QString::number(OFourthHour)+"-"+QString::number(IFourthHour)+" pm");
}//Para agregar las horas y los destinos al primer Label y combo box


void AirLines::AviancaCostaMexico(){
    QString setLabel="Costa Rica->\nMexico";
    ui->jlbCountriesSecond->setText(setLabel);

    double OFirstHour=5.15;
    double IFirstHour=6.45;

    double OSecondHour=9.35;
    double ISecondour=10.55;

    double OThirdHour=4.35;
    double IThirdHour=5.45;

    double OFourthHour=7.25;
    double IFourthHour=8.45;

    ui->jcbxCountriesSecond->addItem(QString::number(OFirstHour)+"-"+QString::number(IFirstHour)+" am");
    ui->jcbxCountriesSecond->addItem(QString::number(OSecondHour)+"-"+QString::number(ISecondour)+" am");
    ui->jcbxCountriesSecond->addItem(QString::number(OThirdHour)+"-"+QString::number(IThirdHour)+" pm");
    ui->jcbxCountriesSecond->addItem(QString::number(OFourthHour)+"-"+QString::number(IFourthHour)+" pm");
}//Para agregar las horas y los destinos al segundo Label y combo box



void AirLines::on_jbtnAddAirline_clicked(){


}
