#include "acerca.h"
#include "ui_acerca.h"

acerca::acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acerca)
{
    ui->setupUi(this);
}

acerca::~acerca()
{
    delete ui;
}

void acerca::setVersion(const QString &value)
{
    version = value;
    ui->outVersion->setText("Version : " + value);
}
