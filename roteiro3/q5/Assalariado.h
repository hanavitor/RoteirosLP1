#ifndef ASSALARIADO_H_
#define ASSALARIADO_H_
#include <iostream>
#include <string>
#include "Funcionario.h"

class Assalariado : public Funcionario{

    private:
        double salario;
    public:
        Assalariado(std::string n, int m, double s);
        double calculaSalario();

};
#endif
