#include "pagamento.h"

Pagamentos::Pagamentos(){
    valor = 0;
    nome = "";
}

Pagamentos::Pagamentos(double v, std::string n){
    nome = n;
    valor = v;
}

void Pagamentos::setValor(double v){
    valor = v;
}

void Pagamentos::setNome(std::string n){
    nome = n;
}

double Pagamentos::getValor(){
    return valor;
}

std::string Pagamentos::getNome(){
    return nome;
}
