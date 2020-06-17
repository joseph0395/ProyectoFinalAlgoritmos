#include "AirLines.h"
#include "ui_AirLines.h"
#include <QDebug>
#include <QLinkedList>
#include <QQueue>
#include <QVector>
#include "Travel.h"
#include "Editor.h"


AirLines::AirLines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AirLines)
{
    ui->setupUi(this);
    AirLines::list<<list<<"Avianca"<<"Copa Airlines"<<"Iberia"<<"Delta"<<"Latam"<<"American Airlines"<<"Lufthansa";

}

AirLines::~AirLines()
{
    delete ui;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////
int i=0;
bool paso=false;

void AirLines::UpdateList(){
    Editor ed;
    QVector<QString>vector=ed.sendNewAirline();
    for(int i=0; i<vector.length();i++){
        list<<vector[i];
    }
}//Actualiza las lista si en el editor se le aplica algun cambio

void AirLines::on_jbtnUpdateList_clicked(){
   UpdateList();
}//accede al UpdateList para que mi list sea actualizada


void AirLines::on_jbtnUp_clicked(){

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



}//retrocede en la lista


void AirLines::on_jbtnDown_clicked(){

        if(paso==true){
            i++;
            paso=false;
         }//bool

         if(i>=list.length() )
             i=0;

         if(i>=0 && i<=list.length()-1)
             ui->jlAirlines->setText(list.at(i));

        i++;

}//va hacia adelante (siguiente) en mi list


void AirLines::on_jbtnSelecAirline_clicked(){
    if(ui->jlAirlines->text()=="Avianca"){
        AviancaCostaPana();
        AviancaCostaMexico();

    }

    if(ui->jlAirlines->text()=="Copa Airlines"){
        copaIrlinesEuropaRusia();
        copaIrlinesFranciaUSA();
    }


}//detecta cual fue la aerolinea seleccionada  para cargar a los label los destinos


void AirLines::AviancaCostaPana(){
    ui->jlbCountriesOSecond->setText("Costa Rica->");
    ui->jlbCountriesISecond->setText("Panama");

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
    ui->jlbCountriesOFirst->setText("Costa Rica->");
    ui->jlbCountriesIFirst->setText("Mexico");

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
    ui->jlbCountriesOFirst->setText("Europa->");
    ui->jlbCountriesIFirst->setText("Rusia");


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
    ui->jlbCountriesOSecond->setText("Francia->");
    ui->jlbCountriesISecond->setText("U.S.A");

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


//--------------------------------------------------------------------------------------------------------------------------//
QVector<QString> vectorOutPut;//Vector para guardar los lugares de salida de los vuelos
QVector<QString> vectorInput;//Vector para guardar los lugares de llegadas de los vuelos

//Estos metodos seran llamados x el metodo addTravel para agregar el name que se pasara por parametro
void addOutPut(QString name){
   vectorOutPut<<name;
}
void addInPut(QString name){
   vectorInput<<name;
}

//Dependiendo del radio boton seleccionado sera el nombre que guarde en cada array de salida y llegada
void AirLines::addTravel(){
    if(ui->jrbtnFirstAirline->isChecked()==true){
        addOutPut(ui->jlbCountriesOFirst->text());
        addInPut(ui->jlbCountriesIFirst->text());
    }//El primer radio boton

    if(ui->jrbtnSecondAirline->isChecked()==true){
        addOutPut(ui->jlbCountriesOSecond->text());
        addInPut(ui->jlbCountriesISecond->text());
    }//El segundo radio boton

}//agrega los detinos de llegada y salida a sus respectivos array

//Llama al metodo addTravel pasandole por parametro los array con los detinos que lleve hasta ese momento para mostrar la ventana de vuelos
void AirLines::on_jbtnTravel_clicked(){
    /*Travel travel;
    addTravel();
    travel.setName(vectorInput,vectorOutPut);
    travel.setModal(true);
    travel.exec();
    */

    addTraveler();
   qDebug()<<namesTraveler;

}//muestra la ventana de vuelos con los vuelos hasta el momento



void AirLines::addTraveler(){
    QString traveler="";

    traveler+=ui->lnedTravelerAge->text()+"/";
    traveler+=ui->lnedTravelerName_2->text()+"/";
    traveler+=ui->lnedTravelerGender->text()+"/";
    traveler+=ui->lnedTravelerPassport->text()+"/";
    traveler+=ui->lnedTravelerNationality->text()+"#";
    namesTraveler<<traveler;

}



