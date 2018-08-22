#include <iostream>
#include "pedido.h"
#include "mesa.h"
#include "restaurante.h"

using namespace std;

int main(){

    Restaurante rest1;
    /*Mesa mesa1;

    mesa1.adicionaAoPedido(Pedido(1,"amburge",2,10));
    mesa1.adicionaAoPedido(Pedido(2,"cocaa",2,5));
    mesa1.adicionaAoPedido(Pedido(3,"batatao",2,7));
    //mesa1.adicionaAoPedido(Pedido(3,"batatao",2,7));
    
    cout << mesa1.calculaTotal() << endl;

    mesa1.zeraPedidos();

    cout << mesa1.calculaTotal() << endl;

    mesa1.adicionaAoPedido(Pedido(1,"amburge",3,10));
    mesa1.adicionaAoPedido(Pedido(2,"cocaa",3,5));
    mesa1.adicionaAoPedido(Pedido(3,"batatao",3,7));

    cout << mesa1.calculaTotal() << endl;*/
    
    rest1.adicionaAoPedido(Pedido(1,"amburge",2,10));
    rest1.adicionaAoPedido(Pedido(2,"cocaa",2,5));
    rest1.adicionaAoPedido(Pedido(3,"batatao",2,7));
    rest1.adicionaAoPedido(Pedido(3,"batatao",2,7));

    cout << rest1.calculaTotal() << endl;

    return 0;
}
