#include <iostream>
#include "pessoa.h"
#include "endereco.h"

using namespace std;

int main(){
    Pessoa p1 = Pessoa("Carlos",Endereco("de barro",13,"bancarios","joao pessoa","paraiba","58493-200"),"+550839956-7844");
    Pessoa p2;

    p2.setNome("Pedro");
    p2.setEndereco(Endereco("calcado",40,"sei n","tibiri","paraiba","40312-200"));
    p2.setTelefone("+55039922-3311");

    cout << p1.getNome() << endl;
    cout << p1.printAll() << endl;
    cout << p1.printNum() << endl;
    cout << p1.getTelefone() << endl;

    cout << " " << endl;

    cout << p2.getNome() << endl;
    cout << p2.printAll() << endl;
    cout << p2.printNum() << endl;
    cout << p2.getTelefone() << endl;

    return 0;
}
