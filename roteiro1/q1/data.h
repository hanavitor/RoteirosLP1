#ifndef DATA_H_
#define DATA_H_
#include <iostream>

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        Data(int d, int m, int a);
        //void setDia(int d);
        //void setMes(int m);
        //void setAno(int a);
        int getDia();
        int getMes();
        int getAno();
        void avancarDia();
};

#endif
