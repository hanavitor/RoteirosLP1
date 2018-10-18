#include "Triangulo.h"

Triangulo::Triangulo(){
    nome = "triangulo";
}

Triangulo::Triangulo(double a,double b){
    nome = "trianglo";
    altura = a;
    base = b;
}

double Triangulo::calcularArea(){
    return (altura * base)/2;
}
