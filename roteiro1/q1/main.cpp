#include <iostream>
#include "data.h"

using namespace std;

int main(){
    Data data1 = Data(28,2,1998);
    Data data2 = Data(30,12,2000);

    cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;
    data1.avancarDia();
    cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;

    cout << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << endl;
    data2.avancarDia();
    cout << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << endl;

    return 0;
}
