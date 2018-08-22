#include "mesa.h"

Mesa::Mesa(){
    np = 0;
}

int Mesa::getNp(){
    return np;
}

int Mesa::adicionaAoPedido(Pedido pe){
    for(int i = 0;i<np;i++){ 
        if(pe.getDesc().compare(pedido[i].getDesc()) == 0){
            pedido[i].setQuant(pedido[i].getQuant()+pe.getQuant());
            return 1;
        }
    }
    pedido[np] = pe;
    np++;
    return 0;
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

