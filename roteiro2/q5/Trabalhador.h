#ifndef TRABALHADOR_H_
#define TRABALHADOR_H_
#include <iostream>
#include <string>

class Trabalhador{

    protected:
        std::string nome;
        double salario;
    public:
        Trabalhador(std::string n);
        Trabalhador(std::string n, double s);
        double calcularPagamentoSemanal(int horas); 
        void setSalario(double s);

};
#endif
