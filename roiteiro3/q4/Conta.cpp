#include "Conta.h"

Conta::Conta(){

}

Conta::Conta(std::string n, int num, double s){
    nomeCliente = n;
    numero = num;
    saldo = s;
}
    
void Conta::sacar(double v){
    if(v > saldo){
        std::cout << "valor maior que o saldo" << std::endl;
    }else{
    saldo = saldo - v;
    }
}

void Conta::depositar(double v){
    saldo = saldo + v;
}

void Conta::setNomeCliente(std::string n){
    nomeCliente = n;
}

void Conta::setNumero(int num){
    numero= num;
}

void Conta::setSaldo(double s){
    saldo = s;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumero(){
    return numero;
}

double Conta::getSaldo(){
    return saldo;
}
