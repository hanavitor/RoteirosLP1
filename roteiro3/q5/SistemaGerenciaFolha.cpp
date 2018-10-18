#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::~SistemaGerenciaFolha(){
    for(int i = 0;i<funcionarios.size();i++){
        delete funcionarios[i];
    }
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *f){

    funcionarios.push_back(f);

}
    
double SistemaGerenciaFolha::calcularValorTotalFolha(){
    double valor = 0;
    for(int i = 0;i<funcionarios.size();i++){
        valor = valor+funcionarios[i]->calculaSalario();
    }
    return valor;
}

double SistemaGerenciaFolha::calculaSalarioFuncionario(int m){
    for(int i = 0;funcionarios.size();i++){
        if(m == funcionarios[i]->getMatricula()){
            return funcionarios[i]->calculaSalario();
        }
    }
    return 0;
}
