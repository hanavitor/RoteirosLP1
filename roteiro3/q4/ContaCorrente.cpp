#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){

}

ContaCorrente::ContaCorrente(std::string n, int num, double s, double sal):Conta(n,num,s){
    salario = sal;
    limite = definirLimite();
}

double ContaCorrente::definirLimite(){
    return salario * 2;
}

void ContaCorrente::setSalario(double s){
    salario = s;
}

void ContaCorrente::setLimite(double l){
    limite = l;
}

double ContaCorrente::getSalario(){
    return salario;
}

double ContaCorrente::getLimite(){
    return limite;
}
