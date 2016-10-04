#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open File"), "", tr("lua (*.lua);;all (*.*)"));
    Lua lua;
    if(lua.doFile(fileName))
        ui->label->setText(lua.getString("a"));
    else
        ui->label->setText("ERROR");
}

MainWindow::~MainWindow()
{
    delete ui;
}
