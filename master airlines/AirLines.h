#ifndef AIRLINES_H
#define AIRLINES_H
#include"Travel.h"

#include <QDialog>

namespace Ui {
class AirLines;
}

class AirLines : public QDialog
{
    Q_OBJECT

public:
    explicit AirLines(QWidget *parent = nullptr);
    ~AirLines();

    void getCountrys();
private slots:
    void on_jbtnUp_clicked();
    void on_jbtnDown_clicked();
    void on_jbtnSelecAirline_clicked();


    void on_jbtnTravel_clicked();

private:
    Ui::AirLines *ui;
    void AviancaCostaPana();
    void AviancaCostaMexico();
    void copaIrlinesEuropaRusia();
    void copaIrlinesFranciaUSA();
    QList<QString>getListAirlines();



};

#endif // AIRLINES_H
