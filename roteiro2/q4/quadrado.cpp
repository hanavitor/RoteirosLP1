#include "quadrado.h"


Quadrado::Quadrado(){
    nome = "quadrado";
}

Quadrado::Quadrado(double a, double b){
    nome = "quadrado";
    altura = a;
    base = b;
}

double Quadrado::calcularArea(){
    return altura * base;
}
