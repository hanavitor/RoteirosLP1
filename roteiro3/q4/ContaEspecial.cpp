#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){

}

ContaEspecial::ContaEspecial(std::string n, int num, double s, double sal, double l):ContaCorrente(n,num,s,sal,l){

}

double ContaEspecial::definirLimite(){
    return salario * 4;

}
