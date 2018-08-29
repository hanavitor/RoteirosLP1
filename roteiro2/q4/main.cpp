#include <iostream>
#include "figurageometrica.h"
#include "triangulo.h"
#include "quadrado.h"
#include "circulo.h"

using namespace std;

int main(){

    Quadrado quadrado(3,3);
    Triangulo triangulo(4,3);
    Circulo circulo(4);

    cout << quadrado.calcularArea() << endl;
    cout << triangulo.calcularArea() << endl;
    cout << circulo.calcularArea() << endl;

    return 0;
}
