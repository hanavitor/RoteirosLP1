#ifndef HORISTA_H_
#define HORISTA_H_
#include <iostream>
#include <string>
#include "Funcionario.h"

class Horista : public Funcionario{

    private:
        double salarioPorHora;
        double horasTrabalhadas;
    public:
        Horista(std::string n, int m, double s, double h);
        double calculaSalario();

};
#endif
