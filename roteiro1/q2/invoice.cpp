#include "invoice.h"

Invoice::Invoice(int n, std::string d, int q, double p){
    if(q < 0){
        q = 0;
    }
    if(p < 0){
        p = 0;
    }
    num = n;
    desc = d;
    quant = q;
    preco = p;
}

void Invoice::setNum(int n){
    num = n;
}

void Invoice::setDesc(std::string d){
    desc = d;
}

void Invoice::setQuant(int q){
    if(q < 0){
        q = 0;
    }
    quant = q;
}

void Invoice::setPreco(double p){
    if(p < 0){
        p = 0;
    }
    preco = p;
}

int Invoice::getNum(){
    return num;
}

std::string Invoice::getDesc(){
    return desc;
}

int Invoice::getQuant(){
    return quant;
}

double Invoice::getPreco(){
    return preco;
}

double Invoice::getInvoiceAmount(){
    return (double) quant*preco;
}
