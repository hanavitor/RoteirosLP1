#include "pessoa.h"

Pessoa::Pessoa(){
    nome = "";
    endereco = Endereco();
    telefone = "";
}

Pessoa::Pessoa(std::string n){
    nome = n;
}

Pessoa::Pessoa(std::string n, Endereco e, std::string t){
    nome = n;
    endereco = e;
    telefone = t;
}

void Pessoa::setNome(std::string n){
    nome = n;
}

void Pessoa::setEndereco(Endereco e){
    endereco = e;
}

void Pessoa::setTelefone(std::string t){
    telefone = t;
}

std::string Pessoa::getNome(){
    return nome;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

std::string Pessoa::printAll(){
    return endereco.printAll();
}

int Pessoa::printNum(){
    return endereco.getNumero();
}
