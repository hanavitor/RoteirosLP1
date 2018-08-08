#ifndef INVOICE_H_
#define INVOICE_H_
#include <iostream>
#include <string>

class Invoice{

    private:
        int num;
        std::string desc;
        int quant;
        double preco;
    public:
        Invoice(int n, std::string d, int q, double p);
        void setNum(int n);
        void setDesc(std::string d);
        void setQuant(int q);
        void setPreco(double p);
        int getNum();
        std::string getDesc();
        int getQuant();
        double getPreco();
        double getInvoiceAmount();

};
#endif
