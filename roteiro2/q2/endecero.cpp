#include "endereco.h"

Endereco::Endereco(){
    rua = "";
    numero = 0;
    bairro = "";
    cidade = "";
    estado = "";
    cep = "";
}

Endereco::Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string ce){
    rua = r;
    numero = n;
    bairro = b;
    cidade = c;
    estado = e;
    cep = ce;
}

std::string Endereco::printAll(){
    return rua + " " + bairro + " " + cidade + " " + estado + " " + cep;
}

int Endereco::getNumero(){
    return numero;
}
