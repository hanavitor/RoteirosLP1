#ifndef CONTACORRENTE_H_
#define CONTACORRENTE_H_
#include <iostream>
#include <string>
#include "Conta.h"

class ContaCorrente : public Conta{

    protected:
        double salario;
        double limite;
    public:
        ContaCorrente();
        ContaCorrente(std::string n, int num, double s, double sal);
        double definirLimite();
        void setSalario(double sal);
        void setLimite(double l);
        double getSalario();
        double getLimite();

};
#endif
