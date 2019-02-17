#ifndef FENCALCULATRICE_H
#define FENCALCULATRICE_H

#include <QMainWindow>
//modification
namespace Ui {
class FenCalculatrice;
}

class FenCalculatrice : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenCalculatrice(QWidget *parent = 0);
    ~FenCalculatrice();

public slots:
    void on_boutonEgal_clicked();

private:
    Ui::FenCalculatrice *ui;
};

#endif // FENCALCULATRICE_H
