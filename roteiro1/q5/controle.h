#ifndef CONTROLE_H_
#define CONTROLE_H_
#include <iostream>
#include <string>
#include "despesa.h"

class Controle{

    private:
        Despesa despesa[3];
    public:
        Controle();
        void setDespesas(std::string t, int v, int i);
        double calculaTotal();
        bool existeDespesa(std::string uin);

};

#endif
