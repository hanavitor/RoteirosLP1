#ifndef DESPESA_H_
#define DESPESA_H_
#include <iostream>
#include <string>

class Despesa{

    private:
        double valor;
        std::string tipogasto;
    public:
        Despesa(double v, std::string t);
        void setValor(int v);
        void setTipoGasto(std::string t);
        double getValor();
        str::string getTipoGasto(); 

};
#endif
