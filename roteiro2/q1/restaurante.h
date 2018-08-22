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
        void adicionaAoPedido(Pedido pe);
        double calculaTotal();
        void zerarRestaurante();

};
#endif
