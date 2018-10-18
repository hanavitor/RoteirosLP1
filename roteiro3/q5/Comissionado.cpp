#include "Comissionado.h"

Comissionado::Comissionado(std::string n, int m, double v, double p, double s){
    nome = n;
    matricula = m;
    vendasSemanais = v;
    percentualComissao = p;
    salario = s;
}

double Comissionado::calculaSalario(){
    return salario + (vendasSemanais * percentualComissao);
}
