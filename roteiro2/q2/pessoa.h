#ifndef PESSOA_H_
#define PESSOA_H_
#include <iostream>
#include <string>
#include "endereco.h"

class Pessoa{

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
    public:
        Pessoa();
        Pessoa(std::string n);
        Pessoa(std::string n, Endereco e, std::string t);
        void setNome(std::string n);
        void setEndereco(Endereco e);
        void setTelefone(std::string t);
        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();
        std::string printAll();
        int printNum();

};
#endif
