#ifndef PEDIDO_H_
#define PEDIDO_H_
#include <iostream>
#include <string>

class Pedido{

    private:
        int numero;
        std::string desc;
        double quant;
        double preco;
    public:
        Pedido();
        int getNumero();
        std::string getDesc();
        double getQuant();
        double getPreco();
        void setNumero(int n);
        void setDesc(std::string);
        void setQuant(double q);
        void setPreco(double p);

};
#endif
