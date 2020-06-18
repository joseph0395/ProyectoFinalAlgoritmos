#include "Travel.h"
#include "ui_Travel.h"
#include <QDebug>

Travel::Travel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Travel)
{
    ui->setupUi(this);

    offLabel();
}


Travel::~Travel()
{
    delete ui;
}


void Travel::offLabel(){
    ui->jlbOContry1->setVisible(false);
    ui->jlbICountry1->setVisible(false);
    ui->jlbPlane1->setVisible(false);

    ui->jlbOContry2->setVisible(false);
    ui->jlbICountry2->setVisible(false);
    ui->jlbPlane2->setVisible(false);

    ui->jlbOContry3->setVisible(false);
    ui->jlbICountry3->setVisible(false);
    ui->jlbPlane3->setVisible(false);

    ui->jlbOContry4->setVisible(false);
    ui->jlbICountry4->setVisible(false);
    ui->jlbPlane4->setVisible(false);

}//hace invisibles todos los label que no se estan utilizando

void Travel::setName(QVector<QString> vectorOutPut,QVector<QString> vectorInput){

       if(vectorOutPut.length()>=1){
            ui->jlbOContry1->setVisible(true);
            ui->jlbICountry1->setVisible(true);
            ui->jlbPlane1->setVisible(true);
            ui->jlbOContry1->setText(vectorInput[0]);
            ui->jlbICountry1->setText(vectorOutPut[0]);
        }//condicion

        if(vectorOutPut.length()>=2){
            ui->jlbOContry2->setVisible(true);
            ui->jlbICountry2->setVisible(true);
            ui->jlbPlane2->setVisible(true);
            ui->jlbOContry2->setText(vectorInput[1]);
            ui->jlbICountry2->setText(vectorOutPut[1]);
        }

        if(vectorOutPut.length()>=3){
            ui->jlbOContry3->setVisible(true);
            ui->jlbICountry3->setVisible(true);
            ui->jlbPlane3->setVisible(true);
            ui->jlbOContry3->setText(vectorInput[2]);
            ui->jlbICountry3->setText(vectorOutPut[2]);
        }

        if(vectorOutPut.length()>=4){
            ui->jlbOContry4->setVisible(true);
            ui->jlbICountry4->setVisible(true);
            ui->jlbPlane4->setVisible(true);
            ui->jlbOContry4->setText(vectorInput[3]);
            ui->jlbICountry4->setText(vectorOutPut[3]);
        }//condicional para la 3



}//SetName Le pone el nombre a cada uno de los vuelos
