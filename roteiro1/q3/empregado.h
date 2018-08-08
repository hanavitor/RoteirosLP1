#ifndef EMPREGADO_H_
#define EMPREGADO_H_
#include <iostream>
#include <string>

class Empregado{

    private:
        std::string nome;
        std::string sobrenome;
        double salario;
    public:
        Empregado(std::string n, std::string so, double s);
        void setNome(std::string n);
        void setSobrenome(std::string s);
        void setSalario(double s);
        std::string getNome();
        std::string getSobrenome();
        double getSalario();

};
#endif
