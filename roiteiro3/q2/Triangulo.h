#ifndef TRIANGULO_H_
#define TRIANGULO_H_
#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{

    private:
        double altura;
        double base;
    public:
        Triangulo();
        Triangulo(double a,double b);
        double calcularArea();

};
#endif
