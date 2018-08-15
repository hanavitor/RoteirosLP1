#include "controle.h"

Controle::Controle(){

}

void Controle::setDespesas(Despesa d, int i){
    despesa[i] = d;
}

double Controle::calculaTotal(){
    double valor = 0;
    for(int i = 0;i<100;i++)
        valor += despesa[i].getValor();
    return valor;
}
    
bool Controle::existeDespesa(std::string uin){

    for(int i = 0; i < 100;i++){
        if(despesa[i].getTipoGasto().compare(uin) == 0){
            return 1;
        }
    }

    return 0;
    
}
