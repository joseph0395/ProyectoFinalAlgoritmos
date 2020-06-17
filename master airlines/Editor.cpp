#include "Editor.h"
#include "ui_Editor.h"
#include <QVector>
#include <QtDebug>

Editor::Editor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
QVector<QString>vectorAirlines;

//toma lo que tiene lnedAddAirline y se lo agrega al vector
void Editor::addNewAirline(){
    QString name=ui->lnedAddAirline->text();
    vectorAirlines<<name;
}//añade elementos al vecotor

//Al ejecutarse activa el metodo addNewAirline y el lnedAddAirline lo pone en blanco
void Editor::on_jbtnAddAirline_clicked(){
    addNewAirline();
    ui->lnedAddAirline->setText("");
}//agrega aerolineas

//Este metodo sera llamado en la clase Airlines para retornar el vector que fue creado en esta clase paa añadirlo a las otras aerolineas
QVector<QString>Editor::sendNewAirline(){
    return vectorAirlines;
}




void Editor::on_jbtnDeleteAirline_clicked(){


}//Envia las nuevas aerolineas
