#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <iostream>
#include <string>

class Funcionario{

    protected:
        std::string matricula;
        std::string nome;
        double salario;
    public:
        Funcionario();
        Funcionario(std::string m, std::string n, double s);
        void setMatricula(std::string m);
        void setNome(std::string n);
        void setSalario(int s);
        std::string getMatricula();
        std::string getNome();
        int getSalario();
        std::string returnString();

};
#endif
