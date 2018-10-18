#ifndef CIRCULO_H_
#define CIRCULO_H_
#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{

    private:
        double raio;
    public:
        Circulo();
        Circulo(double r);
        double calcularArea();

};
#endif
