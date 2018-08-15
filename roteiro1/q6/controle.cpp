#include "controle.h"

Controle::Controle(){

}

void Controle::setPagamentos(Pagamentos p, int i){
    p1[i] = p; 
}

double Controle::calculaPagamentos(){
    double valor = 0;
    for(int i = 0;i<100;i++)
        valor += p1[i].getValor();
    return valor;
}

double Controle::getPagamento(int i){
    return p1[i].getValor();
}

bool Controle::existePagamento(std::string n){
    for(int i = 0;i < 100;i++){
        if(p1[i].getNome().compare(n) == 0){
            return 1;
        }
    }
    
    return 0;
}
