#ifndef RETANGULO_H_
#define RETANGULO_H_
#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica{

    private:
        double altura;
        double base;
    public:
        Retangulo();
        Retangulo(double a, double b);
        double calcularArea();

};
#endif
