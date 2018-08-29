#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double vdh):Trabalhador(n){
    valorDaHora = vdh;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    for(int i = 0;i<horas;i++){
        if(i < 40)
            salario += valorDaHora;
        if(i >= 40)
            salario += valorDaHora+(valorDaHora/2);
    }
    return salario;

}

