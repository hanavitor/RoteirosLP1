#include<iostream>
#include<string>

using namespace std;

class Animal{
    public:
        virtual string ruido()=0;
};

class Ursal : public Animal{
    public:
        string ruido();
};

string Ursal::ruido(){
    return "Nova ordem mundial";
}

int main(){
    Animal *urso;
    urso = new Ursal();

    cout << urso->ruido() << endl;

    return 0;
}
