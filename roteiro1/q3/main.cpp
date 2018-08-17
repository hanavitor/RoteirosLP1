#include <iostream>
#include "empregado.h"

using namespace std;

int main(){

    Empregado empregado1 = Empregado("pedro","silva",7000.2);
    Empregado empregado2 = Empregado("carlos","sousa",3000.3);
    Empregado negativo = Empregado("nega","tivo",-232);

    cout << "Nome empregado1: " << empregado1.getNome() << endl;
    cout << "Sobrenome empregado1: " << empregado1.getSobrenome() << endl;
    cout << "Salario anual empregado1: " << empregado1.getSalario() * 12 << endl;
    cout << "Nome empregado2: " << empregado2.getNome() << endl;
    cout << "Sobrenome empregado2: " << empregado2.getSobrenome() << endl;
    cout << "Salario anual empregado2: " << empregado2.getSalario() * 12 << endl;
    cout << "Nome negativo: " << negativo.getNome() << endl;
    cout << "Sobrenome negativo: " << negativo.getSobrenome() << endl;
    cout << "Salario anual negativo: " << negativo.getSalario() << endl;
    
    empregado1.setSalario(empregado1.getSalario() + empregado1.getSalario()*0.1);
    empregado2.setSalario(empregado2.getSalario() + empregado2.getSalario() *0.1);

    cout << "Salario anual +10% empregado1: " << empregado1.getSalario() * 12 << endl;
    cout << "Salario anual +10% empregado2: " << empregado2.getSalario() * 12 << endl;

    return 0;
}
