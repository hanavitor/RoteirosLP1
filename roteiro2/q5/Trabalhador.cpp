#include "Trabalhador.h"

Trabalhador::Trabalhador(std::string n){
    nome = n;
    salario = 0;
}

Trabalhador::Trabalhador(std::string n, double s){
    nome = n;
    salario = s;
}

double Trabalhador::calcularPagamentoSemanal(int horas){
    return 0;
}

void Trabalhador::setSalario(double s){
    salario = s;
}
