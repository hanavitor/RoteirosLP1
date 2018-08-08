#include <iostream>
#include "pessoa.h"

using namespace std;

int main(){

    Pessoa pessoa1 = Pessoa("carlos",18,40028922);
    Pessoa pessoa2 = Pessoa("pedro");
    
    cout << pessoa1.getNome() << endl;
    cout << pessoa1.getIdade() << endl;
    cout << pessoa1.getTelefone() << endl;

    pessoa1.setNome("alou");
    pessoa1.setIdade(32);
    pessoa1.setTelefone(30032099);

    cout << pessoa1.getNome() << endl;
    cout << pessoa1.getIdade() << endl;
    cout << pessoa1.getTelefone() << endl;


    return 0;
}
