#ifndef DESPESA_H_
#define DESPESA_H_
#include <iostream>
#include <string>

class Despesa{

    private:
        double valor;
        std::string tipogasto;
    public:
        Despesa();
        Despesa(double v, std::string t);
        void setValor(int v);
        void setTipoGasto(std::string t);
        double getValor();
        std::string getTipoGasto(); 

};
#endif
