#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <iostream>
#include <string>

class Funcionario{

    protected:
        std::string nome;
        int matricula;
    public:
        virtual double calculaSalario() = 0;
        void setNome(std::string n);
        void setMatricula(int m);
        std::string getNome();
        int getMatricula();

};
#endif
