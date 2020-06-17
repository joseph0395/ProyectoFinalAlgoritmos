#include "Travel.h"
#include "ui_Travel.h"
#include <QDebug>

Travel::Travel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Travel)
{
    ui->setupUi(this);


}


Travel::~Travel()
{
    delete ui;
}


void Travel::setName(QString name1,QString name2){
    ui->jlbOContry1->setText(name1);
    ui->jlbICountry1->setText(name2);

}
