#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){
    tipo = 2;
}

ContaEspecial::ContaEspecial(std::string n, double s, int num, double sal){
    tipo = 2;
    nomeCliente = n;
    salarioMensal = s;
    numeroConta = num;
    saldo = sal;
}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}
