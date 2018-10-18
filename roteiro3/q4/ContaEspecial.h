#ifndef CONTAESPECIAL_H_
#define CONTAESPECIAL_H_
#include <iostream>
#include <string>
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente{

    private:
    public:
        ContaEspecial();
        ContaEspecial(std::string n, int num, double s, double sal);
        double definirLimite();

};
#endif
