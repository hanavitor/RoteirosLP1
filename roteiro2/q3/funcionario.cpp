#include "funcionario.h"

Funcionario::Funcionario(){
    matricula = "";
    nome = "";
    salario = 0;
}

Funcionario::Funcionario(std::string m, std::string n, double s){
    matricula = m;
    nome = n;
    salario = s;
}

void Funcionario::setMatricula(std::string m){
    matricula = m;
}

void Funcionario::setNome(std::string n){
    nome = n;
}

void Funcionario::setSalario(int s){
    salario = s;
}

std::string Funcionario::getMatricula(){
    return matricula;
}

std::string Funcionario::getNome(){
    return nome;
}

int Funcionario::getSalario(){
    return salario;
}

std::string Funcionario::returnString(){
    return nome + " " + matricula + " " + std::to_string(salario);
}
