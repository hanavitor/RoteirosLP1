#ifndef QUADRADO_H_
#define QUADRADO_H_
#include <iostream>
#include <string>
#include "figurageometrica.h"

class Quadrado : public FiguraGeometrica{

    private:
        double altura;
        double base;
    public:
        Quadrado();
        Quadrado(double a, double b);
        double calcularArea();

};
#endif
