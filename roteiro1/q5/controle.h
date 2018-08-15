#ifndef CONTROLE_H_
#define CONTROLE_H_
#include <iostream>
#include <string>
#include "despesa.h"

class Controle{

    private:
        Despesa despesa[100];
    public:
        Controle();
        void setDespesas(Despesa d, int i);
        double calculaTotal();
        bool existeDespesa(std::string uin);

};

#endif
