#include "turnos.h"
#include "ui_turnos.h"

Turnos::Turnos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Turnos)
{
    ui->setupUi(this);
    turno = 0;
    caja = 0;
}

Turnos::~Turnos()
{
    delete ui;
}

void Turnos::on_ButtonCaja_clicked()
{
  caja++;
  ui->lcdCaja->display(caja);
  //if(caja==7)
  //    caja=0;
}

void Turnos::on_ButtonTurno_clicked()
{
    turno++;
    ui->lcdTutno->display(turno);
}
