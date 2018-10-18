#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <iostream>
#include <string>
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

class Funcionario{

    private:
        std::string nome;
        int matricula;
    public:
        virtual double calculaSalario() = 0;

};
#endif
