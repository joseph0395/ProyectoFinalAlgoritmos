#ifndef TRAVEL_H
#define TRAVEL_H

#include <QDialog>

namespace Ui {
class Travel;
}

class Travel : public QDialog
{
    Q_OBJECT

public:
    explicit Travel(QWidget *parent = nullptr);
    ~Travel();

private:
    Ui::Travel *ui;
};

#endif // TRAVEL_H
