#ifndef CONTAESPECIAL_H_
#define CONTAESPECIAL_H_
#include <iostream>
#include <string>
#include "Conta.h"

class ContaEspecial : public Conta{

    private:
    public:
        ContaEspecial();
        ContaEspecial(std::string n, double s, int num, double sal);
        void definirLimite();

};
#endif
