#include "consultor.h"

Consultor::Consultor(std::string m, std::string n, double s){
    matricula = m;
    nome = n;
    salario = s;
}

double Consultor::getSalario(double percentual){
    return salario += (salario*percentual);
}
