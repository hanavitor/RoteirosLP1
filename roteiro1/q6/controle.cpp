#include "controle.h"

Controle::Controle(){

}

void Controle::setPagamentos(double v, std::string n, int i){
    p1[i].setValor(v);
    p1[i].setNome(n);
}

double Controle::getPagamento(int i){
    return p1[i].getValor();
}

bool Controle::existePagamento(std::string n){
    for(int i = 0;i < 3;i++){
        if(p1[i].getNome().compare(n) == 0){
            return 1;
        }
    }
    
    return 0;
}
