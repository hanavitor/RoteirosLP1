#include "circulo.h"

Circulo::Circulo(){
    nome = "circulo";
}

Circulo::Circulo(double r){
    nome = "circulo";
    raio = r;
}

double Circulo::calcularArea(){
    return 3.14 * raio * raio;
}
