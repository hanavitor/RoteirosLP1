#include "restaurante.h"

Restaurante::Restaurante(){
    npr = 0;
}

void Restaurante::adicionaAoPedido(Pedido pe){
    mesa[npr].adicionaAoPedido(pe);
    npr++;
}

double Restaurante::calculaTotal(){
    double total = 0;    
    for(int i = 0;i<npr;i++){
        total += mesa[i].calculaTotal();
    }
    return total;
}

void Restaurante::zerarRestaurante(){
    for(int i = 0;i<npr;i++){
        mesa[i].zeraPedidos();
    }
    npr = 0;
}
