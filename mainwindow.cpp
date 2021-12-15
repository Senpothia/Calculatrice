#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<string>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui->resultat->setText("ggggg");
    //ui->resultat->setText(QString::number(10 + 10));
     QObject::connect(ui->egal,SIGNAL(clicked()),this, SLOT(calculer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculer(){

    int arg1 = ui->nombre1->value();
    int arg2 = ui->nombre2->value();
   //  QString res = "Hello";
    int choix = ui->operation->currentIndex();
    switch(choix){

        case 0:
         ui->resultat->setText(QString::number(arg1 + arg2));
        break;

        case 1:
        ui->resultat->setText(QString::number(arg1 - arg2));
       break;

        case 2:
        ui->resultat->setText(QString::number(arg1 * arg2));
       break;

        case 3:
        ui->resultat->setText(QString::number(arg1 / arg2));
       break;

    }


}
