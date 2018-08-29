#ifndef TRABALHADORASSALARIADO_H_
#define TRABALHADORASSALARIADO_H_
#include <iostream>
#include <string>
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{

    private:
    public:
        TrabalhadorAssalariado(std::string n, double salario);
        double calcularPagamentoSemanal();

};
#endif
