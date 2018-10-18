#include "Assalariado.h"

Assalariado::Assalariado(std::string n, int m, double s){
    nome = n;
    matricula = m;
    salario = s;
}

double Assalariado::calculaSalario(){
    return salario;
}
