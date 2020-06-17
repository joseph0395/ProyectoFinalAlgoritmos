#ifndef EDITOR_H
#define EDITOR_H

#include <QDialog>

namespace Ui {
class Editor;
}

class Editor : public QDialog
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

    QVector<QString> sendNewAirline();
    void addNewAirline();

private slots:
    void on_jbtnAddAirline_clicked();

    void on_jbtnDeleteAirline_clicked();

private:
    Ui::Editor *ui;
};

#endif // EDITOR_H
