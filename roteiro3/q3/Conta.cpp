#include "Conta.h"

Conta::Conta(){
    tipo = 1;

}

Conta::Conta(std::string n, double s, int num, double sal){
    tipo = 1;
    nomeCliente = n;
    salarioMensal = s;
    numeroConta = num;
    saldo = sal;
}
    
void Conta::sacar(double v){
    saldo = saldo - v;
}

void Conta::depositar(double v){
    saldo = saldo + v;
}

void Conta::setNomeCliente(std::string n){
    nomeCliente = n;
}
    
void Conta::setSalarioMensal(double s){
    salarioMensal = s;
}

void Conta::setNumeroConta(int num){
    numeroConta = num;
}

void Conta::setSaldo(double sal){
    saldo = sal;
}

void Conta::setLimite(double l){
    limite = l;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
}
