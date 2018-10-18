#include "Retangulo.h"


Retangulo::Retangulo(){
    nome = "quadrado";
}

Retangulo::Retangulo(double a, double b){
    nome = "quadrado";
    altura = a;
    base = b;
}

double Retangulo::calcularArea(){
    return altura * base;
}
