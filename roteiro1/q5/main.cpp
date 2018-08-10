#include <iostream>
#include "despesa.h"
#include "controle.h"

using namespace std;

int main(){

    Controle controle1; 

    controle1.setDespesas("carro",1200,0);
    controle1.setDespesas("comida",300,1);

    cout << controle1.calculaTotal() << endl;
    cout << controle1.existeDespesa("comida") << endl;
    cout << controle1.existeDespesa("teste") << endl;

    return 0;
}
