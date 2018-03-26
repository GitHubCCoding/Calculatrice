#include "fencalculatrice.h"
#include "ui_fencalculatrice.h"
#include <iostream>
#include <QMessageBox>

FenCalculatrice::FenCalculatrice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenCalculatrice)
{
    ui->setupUi(this);

    //connect(ui->boutonEgal, SIGNAL(clicked(bool)), this, SLOT(calculerOperation()));
}

FenCalculatrice::~FenCalculatrice()
{
    delete ui;
}

void FenCalculatrice::on_boutonEgal_clicked()
{
    //auto res= ui->nombre1->text() ui->operation->currentText() ui->nombre2->text();
    //ui->resultat->setText(ui->nombre1->text() ui->operation->currentText() ui->nombre2->text());

    //std::cout << ui->operation->currentText().toStdString();
    auto nombre1Caste = static_cast<double>(ui->nombre1->value());
    auto nombre2Caste = static_cast<double>(ui->nombre2->value());
    double res;
    if(ui->operation->currentText() == "+")
    {
        res= nombre1Caste+nombre2Caste;
    }
    else if(ui->operation->currentText()=="-")
    {
        res= nombre1Caste-nombre2Caste;
    }
    else if((ui->operation->currentText()=="/")&&(ui->nombre2->value()!=0))
    {
        res= nombre1Caste/nombre2Caste;
    }
    else if(ui->operation->currentText()=="*")
    {
        res= nombre1Caste*nombre2Caste;
    }
    if((ui->nombre2->value()==0)&&(ui->operation->currentText()=="/"))
    {
        QMessageBox::critical(this,"Erreur", "Vous avez donné un dénominateur nul");
    }
    //auto res= static_cast<double>(ui->nombre1->value())/static_cast<double>(ui->nombre2->value());
    //std::cout<< res;//<<std::endl;
    ui->resultat->setText(QString::number(res));
    //ui->resultat->setText(res);
    //ui->resultat->setText(res);

}
