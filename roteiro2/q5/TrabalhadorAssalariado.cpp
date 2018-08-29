#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double s):Trabalhador(n,s){

}

double TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}
