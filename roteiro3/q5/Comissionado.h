#ifndef COMISSIONADO_H_
#define COMISSIONADO_H_
#include <iostream>
#include <string>
#include "Funcionario.h"

class Comissionado : public Funcionario{

    private:
        double vendasSemanais;
        double percentualComissao;
        double salario;
    public:
        Comissionado(std::string n, int m, double v, double p, double s);
        double calculaSalario();

};
#endif
