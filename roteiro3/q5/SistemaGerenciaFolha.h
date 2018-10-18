#ifndef SISTEMAGERENCIAFOLHA_H_
#define SISTEMAGERENCIAFOLHA_H_
#include <iostream>
#include <string>
#include <vector>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"

class SistemaGerenciaFolha{

    private:
    public:
        std::vector<Funcionario*> funcionarios;
        void setFuncionarios(Funcionario *f);
        double calcularValorTotalFolha();
        double calculaSalarioFuncionario(int m);
        virtual ~SistemaGerenciaFolha();

};
#endif
