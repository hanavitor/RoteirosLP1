#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <iostream>
#include <string>
#include "Funcionario.h"

class Assalariado : public Funcionario{

    private:
        double salario;
    public:
        double calculaSalario();

};
#endif
