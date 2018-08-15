#include "controle.h"

Controle::Controle(){

}

void Controle::setDespesas(Despesa d, int i){
    despesa[i] = d;
}

double Controle::calculaTotal(){
    return despesa[0].getValor() + despesa[1].getValor() + despesa[2].getValor();
}
    
bool Controle::existeDespesa(std::string uin){

    for(int i = 0; i < 3;i++){
        if(despesa[i].getTipoGasto().compare(uin) == 0){
            return 1;
        }
    }

    return 0;
    
}
