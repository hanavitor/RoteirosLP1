#ifndef PESSOA_H_
#define PESSOA_H_
#include <iostream>
#include <string>

class Pessoa{

    private:
        std::string nome;
        int idade;
        int telefone;
    public:
        Pessoa(std::string n);
        Pessoa(std::string n, int idade, int telefone);
        void setNome(std::string n);
        void setIdade(int i);
        void setTelefone(int t);
        std::string getNome();
        int getIdade();
        int getTelefone();

};
#endif
