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

    QList<QString>list;
    QList<QString>listVerticesDestination;
    QList<QString>listHours;
    QList<QString>ListVerticesCostaRica;
    QList<QString>ListVerticesFrancia;
    QList<QString>listHoursCostaRica;
    QList<QString>listHoursFrancia;


    QVector<QString>namesTraveler;

    void setUpFlightWindow();


private slots:
    void on_jbtnUp_clicked();
    void on_jbtnDown_clicked();
    void on_jbtnSelecAirline_clicked();
    void on_jbtnUpdateList_clicked();
    void addTravel();
    void on_jbtnTravel_clicked();




    void on_jbtnListFligths_clicked();

private:
    Ui::AirLines *ui;
    void UpdateList();
    void AviancaCostaPana();
    void AviancaCostaMexico();
    void copaIrlinesEuropaRusia();
    void copaIrlinesFranciaUSA();
    int  getSystemHour();
    void addTraveler();

    bool showFlights1();
    bool showFlights2();
    void verticeCostaRica();
    void verticeFrancia();

};

#endif // AIRLINES_H
