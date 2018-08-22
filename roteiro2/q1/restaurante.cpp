#include "restaurante.h"

Restaurante::Restaurante(){
    npr = 0;
}

void Restaurante::adicionaAoPedido(int i, Pedido pe){
    int flag = 0;
    flag = mesa[i].adicionaAoPedido(pe);
    if(flag == 0){
        npr++;
    }
}

int Restaurante::getNpr(){
    return npr;
}

double Restaurante::calculaTotal(){
    double total = 0;    
    for(int i = 0;i<10;i++){
        total += mesa[i].calculaTotal();
    }
    return total;
}

void Restaurante::zerarRestaurante(){
    for(int i = 0;i<10;i++){
        mesa[i].zeraPedidos();
    }
}
