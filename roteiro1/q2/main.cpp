#include <iostream>
#include "invoice.h"

using namespace std;

int main(){

    double prec;
    Invoice invoice1 = Invoice(123,"lol",3,2.2);

    cout << invoice1.getNum() << endl;
    cout << invoice1.getDesc() << endl;
    cout << invoice1.getQuant() << endl;
    cout << invoice1.getPreco() << endl;
    cout << invoice1.getInvoiceAmount() << endl;

    invoice1.setNum(321);
    invoice1.setDesc("teste");
    invoice1.setQuant(4);
    invoice1.setPreco(3.2);

    cout << invoice1.getNum() << endl;
    cout << invoice1.getDesc() << endl;
    cout << invoice1.getQuant() << endl;
    cout << invoice1.getPreco() << endl;
    cout << invoice1.getInvoiceAmount() << endl;

    return 0;
}
