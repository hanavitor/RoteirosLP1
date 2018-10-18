#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    ContaCorrente conta1("naruto",1,2000,800,404);
    ContaEspecial conta2("sasuke",2,4000,1200,404);
    Poupanca conta3("sakura",3,1000,1,10);
    Poupanca conta4("rock lee",4,1000,51,10);

    cout << "Nome: " << conta1.getNomeCliente() << endl;

    return 0;
}
