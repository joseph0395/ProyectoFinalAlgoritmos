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

    QVector<QString>namesTraveler;

private slots:
    void on_jbtnUp_clicked();
    void on_jbtnDown_clicked();
    void on_jbtnSelecAirline_clicked();
    void on_jbtnUpdateList_clicked();
    void addTravel();
    void on_jbtnTravel_clicked();



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
};

#endif // AIRLINES_H
