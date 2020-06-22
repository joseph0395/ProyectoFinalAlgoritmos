#include "AirLines.h"
#include "ui_AirLines.h"
#include <QDebug>
#include <QLinkedList>
#include <QQueue>
#include <QVector>
#include <ctime>
#include "Travel.h"
#include "Editor.h"
#include "FlightWindow.h"



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

    double OFirstHour=8.12;
    double IFirstHour=13.15;

    double OSecondHour=9.15;
    double ISecondour=13.12;

    QQueue<double> cola;

    cola.enqueue(IFirstHour);
    cola.enqueue(OFirstHour);

    cola.enqueue(ISecondour);
    cola.enqueue(OSecondHour);

    ui->jcbxCountriesFirst->clear();
    ui->jcbxCountriesFirst->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");
    ui->jcbxCountriesFirst->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");

}//Para agregar las horas y los destinos al primer Label y combo box


void AirLines::AviancaCostaMexico(){
    ui->jlbCountriesOFirst->setText("Costa Rica->");
    ui->jlbCountriesIFirst->setText("Mexico");

    double OFirstHour=18.15;
    double IFirstHour=19.45;

    double OSecondHour=6.35;
    double ISecondour=11.45;

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
    ui->jlbCountriesOFirst->setText("Francia->");
    ui->jlbCountriesIFirst->setText("Rusia");


    double OFirstHour=6.35;
    double IFirstHour=15.45;

    double OSecondHour=14.15;
    double ISecondour=19.55;

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

    double OFirstHour=18.55;
    double IFirstHour=22.47;

    double OSecondHour=8.20;
    double ISecondour=15.59;

    QQueue<double> cola;
    cola.enqueue(ISecondour);
    cola.enqueue(OSecondHour);

    cola.enqueue(IFirstHour);
    cola.enqueue(OFirstHour);

    ui->jcbxCountriesSecond->clear();
    ui->jcbxCountriesSecond->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" am");
    ui->jcbxCountriesSecond->addItem(QString::number(cola.dequeue())+"-"+QString::number(cola.dequeue())+" pm");

}


//---------------------------------------------------------1-----------------------------------------------------------------//
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
    if(showFlights1()==true){
        if(ui->jrbtnFirstAirline->isChecked()==true){
            addOutPut(ui->jlbCountriesOFirst->text());
            addInPut(ui->jlbCountriesIFirst->text());
        }//El primer radio boton
    }//codicional para que no muestre vuelos en las horas que no son

    if(showFlights2()==true){
        if(ui->jrbtnSecondAirline->isChecked()==true){
            addOutPut(ui->jlbCountriesOSecond->text());
            addInPut(ui->jlbCountriesISecond->text());
        }//El segundo radio boton
    }//condicional para que no muestre vuelos en horas que no son
}//agrega los detinos de llegada y salida a sus respectivos array

//Llama al metodo addTravel pasandole por parametro los array con los detinos que lleve hasta ese momento para mostrar la ventana de vuelos
void AirLines::on_jbtnTravel_clicked(){
    /*Travel travel;
    addTravel();
    travel.setName(vectorInput,vectorOutPut);
    travel.setModal(true);
    travel.exec();
*/



setUpFlightWindow();

}//muestra la ventana de vuelos con los vuelos hasta el momento



void AirLines::addTraveler(){
    QString traveler="";

    traveler+=ui->lnedTravelerAge->text()+"/";
    traveler+=ui->lnedTravelerName_2->text()+"/";
    traveler+=ui->lnedTravelerGender->text()+"/";
    traveler+=ui->lnedTravelerPassport->text()+"/";
    traveler+=ui->lnedTravelerNationality->text()+"#";
    namesTraveler<<traveler;

}//Crea un String que sera el que se agregara a un vector con los datos del pasajero

int AirLines::getSystemHour(){
    int hour=0;

    /*para obtener toda la fecha con mes dia anio hora etc
    time_t tiempoAhora;
    time(&tiempoAhora);
    char* strDechaHora=ctime(&tiempoAhora);
    qDebug()<<strDechaHora;
    */

    //para obtener solo la hora hare lo siguiente
    time_t tiempoAhora;
    time(&tiempoAhora);
    struct tm *miTiempo=localtime(&tiempoAhora);
    hour=miTiempo->tm_hour;

    return hour;
}//obtengo la hora actual del systema


bool AirLines::showFlights1(){
   QString hour=ui->jcbxCountriesFirst->currentText().split(".")[0];

   if(getSystemHour()<hour.toInt())
        return true;

    return false;
}


bool AirLines::showFlights2(){
   QString hour=ui->jcbxCountriesSecond->currentText().split(".")[0];

   if(getSystemHour()<hour.toInt())
        return true;

    return false;
}

//--------------------------------------------2-------------------------------------------
void AirLines::verticeCostaRica(){
    if(ui->jrbtnFirstAirline->isChecked()==true && ui->jlbCountriesOFirst->text()=="Costa Rica->"){
    ListVerticesCostaRica<<ui->jlbCountriesIFirst->text();
    listVerticesDestination<<ui->jlbCountriesIFirst->text();
    listHoursCostaRica<<ui->jcbxCountriesFirst->currentText().split("-")[0];
    listHours<<ui->jcbxCountriesFirst->currentText().split("-")[0];
    }

    if(ui->jrbtnSecondAirline->isChecked()==true && ui->jlbCountriesOSecond->text()=="Costa Rica->"){
    ListVerticesCostaRica<<ui->jlbCountriesISecond->text();
    listVerticesDestination<<ui->jlbCountriesISecond->text();
    listHoursCostaRica<<ui->jcbxCountriesSecond->currentText().split("-")[0];
    listHours<<ui->jcbxCountriesSecond->currentText().split("-")[0];
    }

}//verticeCostaRica adjunta a las listas de horas y a las listas de destinos la hora y destino correspondientes


void AirLines::verticeFrancia(){
    if(ui->jrbtnFirstAirline->isChecked()==true && ui->jlbCountriesOFirst->text()=="Francia->"){
    ListVerticesFrancia<<ui->jlbCountriesIFirst->text();
    listVerticesDestination<<ui->jlbCountriesIFirst->text();
    listHoursFrancia<<ui->jcbxCountriesFirst->currentText().split("-")[0];
    listHours<<ui->jcbxCountriesFirst->currentText().split("-")[0];
    }

    if(ui->jrbtnSecondAirline->isChecked()==true && ui->jlbCountriesOSecond->text()=="Francia->"){
    ListVerticesFrancia<<ui->jlbCountriesISecond->text();
    listVerticesDestination<<ui->jlbCountriesISecond->text();
    listHoursFrancia<<ui->jcbxCountriesSecond->currentText().split("-")[0];
    listHours<<ui->jcbxCountriesSecond->currentText().split("-")[0];
    }


}//verticeFrancia adjunta a las listas de horas y a las listas de destinos la hora y destino correspondientes




////////////////////////ACTUALIZAR LA PANTALLA CON LOS VUELOS///////////////////////////////////////////////



void AirLines::setUpFlightWindow(){

    verticeCostaRica();
    verticeFrancia();


}//setUpFlightWindow

void AirLines::on_jbtnListFligths_clicked(){
    FlightWindow fw;

    fw.addDatesFlight(listHours,listVerticesDestination);
    fw.setModal(true);
    fw.exec();



}//jbtnListFligths
