#include "controle.h"

Controle::Controle(){

}

void Controle::setDespesas(std::string t, int v, int i){
    despesa[i].setValor(v);
    despesa[i].setTipoGasto(t);
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
