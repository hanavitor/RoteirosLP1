#include "figurageometrica.h"

double FiguraGeometrica::calcularArea(){
    if(nome == "triangulo"){
        return (altura*base)/2;
    }
    if(nome == "quadrado"){
        return altura*base;
    }
    if(nome == "circulo"){
        return 3.14*raio;
    }
}
