#include <iostream>
#include "invoice.h"

using namespace std;

int main(){

    double prec;
    Invoice invoice1 = Invoice(123,"descricao1",3,2.2);

    cout <<"Numero :" << invoice1.getNum() << endl;
    cout <<"Descricao :" << invoice1.getDesc() << endl;
    cout <<"Quantidade :" << invoice1.getQuant() << endl;
    cout <<"Preco :" << invoice1.getPreco() << endl;
    cout <<"Fatura :" << invoice1.getInvoiceAmount() << endl;

    invoice1.setNum(321);
    invoice1.setDesc("descricao2");
    invoice1.setQuant(4);
    invoice1.setPreco(3.2);

    cout <<"Numero novo: " << invoice1.getNum() << endl;
    cout <<"Descricao nova: " << invoice1.getDesc() << endl;
    cout <<"Quantidade nova: " << invoice1.getQuant() << endl;
    cout <<"Preco novo: " << invoice1.getPreco() << endl;
    cout <<"Fatura nova: " << invoice1.getInvoiceAmount() << endl;

    return 0;
}
