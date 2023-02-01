#include "rettangolo.h"
#include "ui_rettangolo.h"

Rettangolo::Rettangolo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Rettangolo)
{
    ui->setupUi(this);
}

Rettangolo::~Rettangolo()
{
    delete ui;
}


void Rettangolo::on_btnCalcola_clicked()
{
    int b, h;
    int p, a;
    b = ui->txtBase->text().toInt();
    h = ui->txtAltezza->text().toInt();
    p = (b + h) * 2;
    a = b * h;
    ui->txtPerimetro->setText(QString::number(p));
    ui->txtArea->setText(QString::number(a));

}

