#include "turnos.h"
#include "ui_turnos.h"

Turnos::Turnos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Turnos)
{
    ui->setupUi(this);
    turno = 0;
    caja = 0;
    setPaletteCaja();
    setPaletteTurno();

}

Turnos::~Turnos()
{
    delete ui;
}

void Turnos::setPaletteCaja()
{
    QPalette palette_caja = QPalette();
    ui->lcdCaja->setSegmentStyle(QLCDNumber::Flat);
    // set black background
    // Qt::black / "#000000" / "black"
    palette_caja.setColor(QPalette::Window, Qt::black);
    ui->lcdCaja->setAutoFillBackground(true);
    //Foreground color
   palette_caja.setColor(QPalette::WindowText, QColor(236, 242, 68));
   ui->lcdCaja->setPalette(palette_caja);

}

void Turnos::setPaletteTurno()
{
    QPalette palette_turno = QPalette();
    ui->lcdTutno->setSegmentStyle(QLCDNumber::Flat);
    // set black background
    // Qt::black / "#000000" / "black"
    palette_turno.setColor(QPalette::Window, Qt::black);
    ui->lcdTutno->setAutoFillBackground(true);
    //Foreground color
   palette_turno.setColor(QPalette::WindowText, QColor(245, 5, 5));
   ui->lcdTutno->setPalette(palette_turno);

}

void Turnos::on_ButtonCaja_clicked()
{
  caja++;
  ui->lcdCaja->display(caja);
  if(caja==7)
      caja=0;
}

void Turnos::on_ButtonTurno_clicked()
{
    turno++;
    ui->lcdTutno->display(turno);
}
