#include "Horista.h"

Horista::Horista(std::string n, int m, double s, double h){
    nome = n;
    matricula = m;
    salarioPorHora = s;
    horasTrabalhadas = h;
}

double Horista::calculaSalario(){
    if(horasTrabalhadas > 40){
        return (salarioPorHora * 40) + (salarioPorHora * ((horasTrabalhadas-40) * 1.5));
    }else{
        return salarioPorHora * 40;
    }
}
