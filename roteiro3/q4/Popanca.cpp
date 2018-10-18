#include "Poupanca.h"

Poupanca::Poupanca(){

}

Poupanca::Poupanca(std::string n, int num, double s, int v, int t):Conta(n,num,s){
    variacao = v;
    taxaRendimento = t;
}

double Poupanca::render(){

    if(variacao == 51){
        saldo = saldo + (saldo * (taxaRendimento/100));
    }
    if(variacao == 1){
        saldo = saldo + (saldo * ((taxaRendimento + 0.5)/100));
    }

}

void Poupanca::setVariacao(int v){
    variacao = v;
}

void Poupanca::setTaxaRendimento(double t){
    taxaRendimento = t;
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}
