#include "controle.h"

Controle::Controle(){

}

void Controle::setPagamentos(Pagamentos p, int i){
    p1[i] = p; 
}

double Controle::calculaPagamentos(){
    return p1[0].getValor() + p1[1].getValor() + p1[2].getValor();
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
