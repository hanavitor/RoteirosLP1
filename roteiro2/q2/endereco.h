#ifndef ENDERECO_H_
#define ENDERECO_H_
#include <iostream>
#include <string>

class Endereco{

    private:
        std::string rua;
        int numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
    public:
        Endereco();
        Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string ce);
        std::string printAll();
        int getNumero();

};
#endif
