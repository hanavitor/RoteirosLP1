#include <iostream>
#include "pedido.h"
#include "mesa.h"

using namespace std;

int main(){

    Mesa mesa1;

    mesa1.adicionaAoPedido(1,"amburge",2,10);
    mesa1.adicionaAoPedido(2,"cocaa",2,5);
    mesa1.adicionaAoPedido(3,"batatao",2,7);
    
    cout << mesa1.calculaTotal() << endl;

    mesa1.zeraPedidos();

    cout << mesa1.calculaTotal() << endl;

    mesa1.adicionaAoPedido(1,"amburge",3,10);
    mesa1.adicionaAoPedido(2,"cocaa",3,5);
    mesa1.adicionaAoPedido(3,"batatao",3,7);

    cout << mesa1.calculaTotal() << endl;

    return 0;
}
