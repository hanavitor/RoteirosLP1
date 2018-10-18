#ifndef CONTA_H_
#define CONTA_H_
#include <iostream>
#include <string>
#include "IConta.h"

class Conta : public IConta{

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
    public:
        Conta();
        Conta(std::string n, double s, int num, double sal);
        void sacar(double v);
        void depositar(double v);
        void setNomeCliente(std::string nomeCliente);
        void setSalarioMensal(double salarioMensal);
        void setNumeroConta(int numeroConta);
        void setSaldo(double saldo);
        void setLimite(double limite);
        std::string  getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();
        void definirLimite();

};
#endif
