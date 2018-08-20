#include "pedido.h"

Pedido::Pedido(){
    numero = 0;
    desc = "";
    quant = 0;
    preco = 0;
}

int Pedido::getNumero(){
    return numero;
}

std::string Pedido::getDesc(){
    return desc;
}

double Pedido::getQuant(){
    return quant;
}

double Pedido::getPreco(){
    return preco;
}

void Pedido::setNumero(int n){
    numero = n;
}

void Pedido::setDesc(std::string d){
    desc = d;
}

void Pedido::setQuant(double q){
    quant = q;
}

void Pedido::setPreco(double p){
    preco = p;
}
