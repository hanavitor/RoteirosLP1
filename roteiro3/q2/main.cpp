#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main(){

    FiguraGeometrica *figura[3];
    figura[0] = new Retangulo(3,3);
    figura[1] = new Triangulo(3,4);
    figura[2] = new Circulo(3);


    cout << figura[0]->calcularArea() << endl;
    cout << figura[1]->calcularArea() << endl;
    cout << figura[2]->calcularArea() << endl;

    delete figura[0];
    delete figura[1];
    delete figura[2];

    return 0;
}
