#include <iostream>
#include "funcionario.h"
#include "consultor.h"

using namespace std;

int main(){

    Funcionario funcionario("2014300032","Pedro",2300);
    Consultor consultor("20139499921","Carlos",2300);

    cout << funcionario.getSalario() << endl;
    cout << funcionario.getNome() << endl;
    cout << funcionario.getMatricula() << endl;
    cout << funcionario.returnString() << endl;

    cout << consultor.getSalario(0.1) << endl;
    cout << consultor.getNome() << endl;
    cout << consultor.getMatricula() << endl;
    cout << consultor.returnString() << endl;

    return 0;
}
