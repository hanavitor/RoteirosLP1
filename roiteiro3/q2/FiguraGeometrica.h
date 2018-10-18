#ifndef FIGURAGEOMETRICA_H_
#define FIGURAGEOMETRICA_H_
#include <iostream>
#include <string>

class FiguraGeometrica{

    protected:
        std::string nome;
    public:
        virtual double calcularArea() = 0;

};
#endif
