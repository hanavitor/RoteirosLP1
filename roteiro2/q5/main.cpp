#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main(){

    TrabalhadorAssalariado trab1("carlos",7000);
    TrabalhadorPorHora trab2("joao",50);

    cout << trab1.calcularPagamentoSemanal() << endl;
    cout << trab2.calcularPagamentoSemanal(41) << endl;

    return 0;
}
