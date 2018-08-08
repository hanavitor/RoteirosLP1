#include "despesa.h"

Despesa::Despesa(double v, std::string t){
    valor = v;
    tipogasto = t;
}

void Despesa::setValor(int v){
    valor = v;
}

void Despesa::setTipoGasto(std::string t){
    tipogasto = t;
}

double Despesa::getValor(){
    return valor;
}

str::string Despesa::getTipoGasto(){
    return tipogasto;
}
