#ifndef TRABALHADORPORHORA_H_
#define TRABALHADORPORHORA_H_
#include <iostream>
#include <string>
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{

    private:
        double valorDaHora;
    public:
        TrabalhadorPorHora(std::string n, double vdh);
        double calcularPagamentoSemanal(int horas);

};
#endif
