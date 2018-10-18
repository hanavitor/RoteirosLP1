#include <iostream>
#include <string>
#include "SistemaGerenciaFolha.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sys;

    sys.setFuncionarios(new Assalariado("ichigo",1,3000));
    sys.setFuncionarios(new Horista("inoue",2,80,40));
    sys.setFuncionarios(new Comissionado("ichida",3,100,40,9000));
    sys.setFuncionarios(new Horista("Rukia",4,80,41));

    cout << "valor total: " << sys.calcularValorTotalFolha() << endl;

    cout << "Assalariado: " << sys.calculaSalarioFuncionario(1) << endl;
    cout << "Horista: " << sys.calculaSalarioFuncionario(2) << endl;
    cout << "Comissionado: " << sys.calculaSalarioFuncionario(3) << endl;
    cout << "Horista: " << sys.calculaSalarioFuncionario(4) << endl;

    return 0;
}
