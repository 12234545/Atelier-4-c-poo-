#include<iostream>
using namespace std;

class Animal
{
public:
    string nom;
    int age;
    // constructeur
    Animal(){
    nom="chat";
    age=2;
    };
    // methode
    virtual void set_value(){
       cout << "Nom:"<<nom<<endl<<"age:"<<age<<endl;
    }
};
class zebra :public Animal{
    public:
    string origine ="Maroc";
    //constructeur 
    zebra(){
        nom="zébre";
        age=5;
    }
    void set_value() override{
    Animal::set_value();
    cout << "origine:"<<origine<<endl;
    }
};
class Dolphin :public Animal{
    public:
    string origine ="canada";
    //constructeur
    Dolphin(){
        nom="Dolphin";
        age=3;
    }
    void set_value() override{
        Animal::set_value();
    cout << "origine:"<<origine<<endl;
    }
};
int main(){
    zebra z;
    Dolphin d;
    z.set_value();
    d.set_value();
}

