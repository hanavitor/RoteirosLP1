#include <iostream>
#include "invoice.h"

using namespace std;

int main(){
    
    double prec;
    Invoice invoice1 = Invoice(123,"lol",3,2.2);

    prec = invoice1.getInvoiceAmount();
    cout << prec << endl;

}
