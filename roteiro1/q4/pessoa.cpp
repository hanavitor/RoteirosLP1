#include "pessoa.h"

Pessoa::Pessoa(std::string n){
    nome = n;
}

Pessoa::Pessoa(std::string n, int i, int t){
    nome = n;
    idade = i;
    telefone = t;
}

void Pessoa::setNome(std::string n){
    nome = n;
}

void Pessoa::setIdade(int i){
    idade = i;
}

void Pessoa::setTelefone(int t){
    telefone = t;
}

std::string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

int Pessoa::getTelefone(){
    return telefone;
}
