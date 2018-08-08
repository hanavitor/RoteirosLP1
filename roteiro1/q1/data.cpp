#include "data.h"

Data::Data(int d, int m, int a){
    dia = d;
    mes = m;
    ano = a;
}

void Data::setDia(int d){
    dia = d;
}

void Data::setMes(int m){
    mes = m;
}

void Data::setAno(int a){
    ano = a;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::avancarDia(){
    int queDia;
    queDia = mes;
    std::cout << queDia << std::endl;
    switch(mes){
        case 1:
            queDia = 31;
            break;
        case 2:
            queDia = 28;
            break;
        case 3:
            queDia = 31;
            break;
        case 4:
            queDia = 30;
            break;
        case 5:
            queDia = 31;
            break;
        case 6:
            queDia = 30;
            break;
        case 7:
            queDia = 31;
            break;
        case 8:
            queDia = 31;
            break;
        case 9:
            queDia = 30;
            break;
        case 10:
            queDia = 31;
            break;
        case 11:
            queDia = 30;
            break;
        case 12:
            queDia = 30;
            break;
    }
    
    dia++;
    if(dia > queDia){
        dia = 1;
        mes++;
    }
    if(mes > 12){
        mes = 1;
        ano++;
    }

}
