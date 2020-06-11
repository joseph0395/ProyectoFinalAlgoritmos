#include "Travel.h"
#include "ui_Travel.h"

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
