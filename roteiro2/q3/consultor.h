#ifndef CONSULTOR_H_
#define CONSULTOR_H_
#include <iostream>
#include <string>
#include "funcionario.h"

class Consultor : public Funcionario{

    private:
    public:
        Consultor(std::string m, std::string n, double s);
        double getSalario(double percentual);

};
#endif
