#include <iostream>
#include "empregado.h"

using namespace std;

int main(){

    Empregado empregado1 = Empregado("pedro","silva",7000.2);

    cout << empregado1.getNome() << endl;
    cout << empregado1.getSobrenome() << endl;
    cout << empregado1.getSalario() << endl;
    
    empregado1.setNome("carlos");
    empregado1.setSobrenome("slim");
    empregado1.setSalario(1000.4);

    cout << empregado1.getNome() << endl;
    cout << empregado1.getSobrenome() << endl;
    cout << empregado1.getSalario() << endl;

    return 0;
}
