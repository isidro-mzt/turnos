#ifndef TURNOS_H
#define TURNOS_H

#include <QWidget>

namespace Ui {
class Turnos;
}

class Turnos : public QWidget
{
    Q_OBJECT

public:
    explicit Turnos(QWidget *parent = 0);
    ~Turnos();
    int turno, caja;
    QString caja_str;
private slots:
    void on_ButtonCaja_clicked();

    void on_ButtonTurno_clicked();

private:
    Ui::Turnos *ui;
    void setPaletteCaja();
    void setPaletteTurno();
};

#endif // TURNOS_H
