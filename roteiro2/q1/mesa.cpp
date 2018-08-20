#include "mesa.h"


Mesa::Mesa(){
    np = 0;
}

void Mesa::adicionaAoPedido(int n, std::string d, double q, double p){
    pedido[np].setNumero(n);
    pedido[np].setDesc(d);
    pedido[np].setQuant(q);
    pedido[np].setPreco(p);
    np++;
}

void Mesa::zeraPedidos(){
    for(int i = 0;i < np;i++){
        pedido[i].setNumero(0);
        pedido[i].setDesc("");
        pedido[i].setQuant(0);
        pedido[i].setPreco(0);
    }
    np = 0;
}

double Mesa::calculaTotal(){
    double total = 0;
    for(int i = 0;i < np;i++){
        total += pedido[i].getQuant() * pedido[i].getPreco();
    }
    return total;
}

