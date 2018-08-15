#ifndef CONTRLE_H_
#define CONTROLE_H_
#include <iostream>
#include <string>
#include "pagamento.h"

class Controle{

    private:
        Pagamentos p1[3];
    public:
        Controle();
        void setPagamentos(Pagamentos p, int i);
        double calculaPagamentos();
        double getPagamento(int i);
        bool existePagamento(std::string n);

};
#endif
