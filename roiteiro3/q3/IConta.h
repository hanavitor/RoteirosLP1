#ifndef ICONTA_H_
#define ICONTA_H_
#include <iostream>
#include <string>

class IConta{

    protected:
        int tipo;
    public:
        virtual void sacar(double v) = 0;
        virtual void depositar(double v) = 0;

};
#endif
