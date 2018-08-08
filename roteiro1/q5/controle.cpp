#include "controle.h"

void Controle::setDespesas(Despesa d, int i){
    despesa[i] = d;
}

void Controle::calculaTotal(){
    return despesa[0].getValor + despesa[1].getValor + despesa[2].getValor;
}
    
bool Controle::existeDespesa();
