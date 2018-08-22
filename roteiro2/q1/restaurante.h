#ifndef RESTAURANTE_H_
#define RESTAURANTE_H_
#include <iostream>
#include <string>
#include "mesa.h"

class Restaurante{

    private:
        Mesa mesa[10];
        int npr;
    public:
        Restaurante();
        int getNpr();
        void adicionaAoPedido(int i, Pedido pe);
        double calculaTotal();
        void zerarRestaurante();

};
#endif
