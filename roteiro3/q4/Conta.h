#ifndef CONTA_H_
#define CONTA_H_
#include <iostream>
#include <string>

class Conta{

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;
    public:
        Conta();
        Conta(std::string n, int num, double s);
        void sacar(double v);
        void depositar(double v);
        void setNomeCliente(std::string n);
        void setNumero(int num);
        void setSaldo(double s);
        std::string  getNomeCliente();
        int getNumero();
        double getSaldo();

};
#endif
