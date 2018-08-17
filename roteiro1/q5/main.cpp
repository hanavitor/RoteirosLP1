#include <iostream>
#include "despesa.h"
#include "controle.h"

using namespace std;

int main(){

    Controle controle1; 

    controle1.setDespesas(Despesa(1200,"carro"),0);
    controle1.setDespesas(Despesa(300,"comida"),1);

    cout << "Total das despesas: " << controle1.calculaTotal() << endl;
    cout << "Existe despesa comida(1/0): " << controle1.existeDespesa("comida") << endl;
    cout << "Existe despesa teste(1/0): " << controle1.existeDespesa("teste") << endl;

    return 0;
}
