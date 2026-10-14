#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_labo6.h"

class labo6 : public QMainWindow
{
    Q_OBJECT

public:
    labo6(QWidget *parent = nullptr);
    ~labo6();

private:
    Ui::labo6Class ui;
    void calcularTotal(); 
    void limpiarFormulario();
};

