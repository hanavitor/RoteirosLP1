#include <iostream>
#include "data.h"

using namespace std;

int main(){
    Data data1 = Data(32,2,1998);
    Data data2 = Data(30,12,2000);

    cout << "Dia hoje: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;
    data1.avancarDia();
    cout << "Dia avançado: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;

    cout << "Dia hoje: " << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << endl;
    data2.avancarDia();
    cout << "Dia avançado: " << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << endl;

    return 0;
}
