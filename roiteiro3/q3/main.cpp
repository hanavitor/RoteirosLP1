#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    Conta *conta1 = new Conta("naruto",800,1389,800);
    ContaEspecial *conta2 = new ContaEspecial("carlos",800,1389,800);

    conta1->definirLimite();
    conta2->definirLimite();

    cout << "Nome: " << conta1->getNomeCliente() << endl;
    cout << "Salario mensal: " << conta1->getSalarioMensal() << endl;
    cout << "Saldo: " << conta1->getSaldo() << endl;
    cout << "Limite: " << conta1->getLimite() << endl;

    cout << "Nome: " << conta2->getNomeCliente() << endl;
    cout << "Salario mensal: " << conta2->getSalarioMensal() << endl;
    cout << "Saldo: " << conta2->getSaldo() << endl;
    cout << "Limite: " << conta2->getLimite() << endl;

    conta1->sacar(100);
    conta2->depositar(100);

    cout << "Nome: " << conta1->getNomeCliente() << endl;
    cout << "Salario mensal: " << conta1->getSalarioMensal() << endl;
    cout << "Saldo: " << conta1->getSaldo() << endl;
    cout << "Limite: " << conta1->getLimite() << endl;

    cout << "Nome: " << conta2->getNomeCliente() << endl;
    cout << "Salario mensal: " << conta2->getSalarioMensal() << endl;
    cout << "Saldo: " << conta2->getSaldo() << endl;
    cout << "Limite: " << conta2->getLimite() << endl;

    delete conta1;
    delete conta2;

    return 0;
}
