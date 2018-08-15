#include "empregado.h"

Empregado::Empregado(std::string n, std::string so, double s){
    nome = n;
    sobrenome = so;
    salario = s;
    if(s < 0){
        salario = 0;
    }
}

void Empregado::setNome(std::string n){
    nome = n;
}

void Empregado::setSobrenome(std::string s){
    sobrenome = s;
}

void Empregado::setSalario(double s){
    salario = s;
}

std::string Empregado::getNome(){
    return nome;
}

std::string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}
