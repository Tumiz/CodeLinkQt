#include "desk.h"
#include "ui_desk.h"

Desk::Desk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Desk)
{
    ui->setupUi(this);
}

Desk::~Desk()
{
    delete ui;
}
