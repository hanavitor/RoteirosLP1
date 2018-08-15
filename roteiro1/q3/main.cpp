#include <iostream>
#include "empregado.h"

using namespace std;

int main(){

    Empregado empregado1 = Empregado("pedro","silva",7000.2);
    Empregado empregado2 = Empregado("carlos","sousa",3000.3);
    Empregado negativo = Empregado("nega","tivo",-232);

    cout << empregado1.getNome() << endl;
    cout << empregado1.getSobrenome() << endl;
    cout << empregado1.getSalario() * 12 << endl;
    cout << empregado2.getNome() << endl;
    cout << empregado2.getSobrenome() << endl;
    cout << empregado2.getSalario() * 12 << endl;
    cout << negativo.getNome() << endl;
    cout << negativo.getSobrenome() << endl;
    cout << negativo.getSalario() << endl;
    
    empregado1.setSalario(empregado1.getSalario() + empregado1.getSalario()*0.1);
    empregado2.setSalario(empregado2.getSalario() + empregado2.getSalario() *0.1);

    cout << empregado1.getSalario() * 12 << endl;
    cout << empregado2.getSalario() * 12 << endl;

    return 0;
}
