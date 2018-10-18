#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){

}

ContaEspecial::ContaEspecial(std::string n, int num, double s, double sal):ContaCorrente(n,num,s,sal){
    limite = definirLimite();
}

double ContaEspecial::definirLimite(){
    return salario * 4;

}
