#ifndef CONTROLE_H_
#define CONTROLE_H_
#include <iostream>
#include <string>
#include "despesa.h"

class Controle{

    private:
        Despesa despesa[3];
    public:
        void setDespesas(Despesa d, int i);
        void calculaTotal();
        bool existeDespesa();

};
#endif
