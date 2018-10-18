#ifndef POUPANCA_H_
#define POUPANCA_H_
#include <iostream>
#include <string>
#include "Conta.h"

class Poupanca : public Conta{

    private:
        int variacao;
        double taxaRendimento;
    public:
        Poupanca();
        Poupanca(std::string n, int num, double s, int v, int t);
        double render();
        void setVariacao(int v);
        void setTaxaRendimento(double t);
        int getVariacao();
        double getTaxaRendimento();

};
#endif
