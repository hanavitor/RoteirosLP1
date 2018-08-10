#include <iostream>
#include "pagamento.h"
#include "controle.h"

using namespace std;

int main(){

    Controle c1;

    c1.setPagamentos(1200,"carlos",0);
    c1.setPagamentos(3200,"pedro",1);

    cout << c1.existePagamento("joao") << endl;
    cout << c1.existePagamento("carlos") << endl;
    cout << c1.getPagamento(1) << endl;

    return 0;
}
