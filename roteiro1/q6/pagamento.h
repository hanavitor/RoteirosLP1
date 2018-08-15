#ifndef PAGAMENTO_H_
#define PAGAMENTO_H_
#include <iostream>
#include <string>

class Pagamentos{

    private:
        double valor;
        std::string nome;
    public:
        Pagamentos();
        Pagamentos(double v, std::string n);
        void setValor(double v);
        void setNome(std::string n);
        double getValor();
        std::string getNome();

};
#endif
