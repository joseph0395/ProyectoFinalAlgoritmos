#ifndef FLIGHTWINDOW_H
#define FLIGHTWINDOW_H

#include <QDialog>

namespace Ui {
class FlightWindow;
}

class FlightWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FlightWindow(QWidget *parent = nullptr);
    ~FlightWindow();

    void addDatesFlight(QList<QString>time,QList<QString>vertix);






private:
    Ui::FlightWindow *ui;

    void offLabels();
    QString createRandomLetter();
    QString createRandomNumber();
    void ejecutar();
};

#endif // FLIGHTWINDOW_H
