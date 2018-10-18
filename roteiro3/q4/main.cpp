#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    ContaCorrente conta1("naruto",1,2000,800);
    ContaEspecial conta2("sasuke",2,4000,1200);
    Poupanca conta3("sakura",3,1000,1,10);
    Poupanca conta4("rock lee",4,1000,51,10);

    cout << "Nome: " << conta1.getNomeCliente() << endl;
    cout << "Limite: " << conta1.definirLimite() << endl;
    cout << "Salario: " << conta1.getSalario() << endl;
    cout << "Saldo: " << conta1.getSaldo() << endl;

    cout << "Nome: " << conta2.getNomeCliente() << endl;
    cout << "Limite: " << conta2.definirLimite() << endl;
    cout << "Salario: " << conta2.getSalario() << endl;
    cout << "Saldo: " << conta2.getSaldo() << endl;

    cout << "Nome: " << conta3.getNomeCliente() << endl;
    cout << "Saldo: " << conta3.getSaldo() << endl;

    conta3.render();

    cout << "Nome: " << conta3.getNomeCliente() << endl;
    cout << "Saldo: " << conta3.getSaldo() << endl;

    cout << "Nome: " << conta4.getNomeCliente() << endl;
    cout << "Saldo: " << conta4.getSaldo() << endl;

    conta4.render();

    cout << "Nome: " << conta4.getNomeCliente() << endl;
    cout << "Saldo: " << conta4.getSaldo() << endl;

    return 0;
}
