#ifndef MESA_H_
#define MESA_H_
#include <iostream>
#include <string>
#include "pedido.h"

class Mesa{

    private:
        int np;
        Pedido pedido[100];
    public:
        Mesa();
        int getNp();
        int adicionaAoPedido(Pedido pe);
        void zeraPedidos();
        double calculaTotal();

};
#endif
