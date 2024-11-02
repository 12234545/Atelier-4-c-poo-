#include<iostream>
using namespace std;

class Personne{
 private:
 string nom;
 string prenom;
 string date_naissance;
 public:
 //constructeur
 Personne(){
    nom="Khaoula";
    prenom="EL_Bakkali";
    date_naissance="2/04/2004";
 }
 // methode
 virtual void  Afficher(){
   cout << "Nom :"<<nom<<endl<<"prénom :"<<endl<<"date de naissance :"<<endl;
 }
};
// classe pour Employe 
class employe :public Personne
{
public:
    double salaire;
    //constructeur
    employe(){
    salaire=2000;
    }
    void Afficher() override{
    Personne::Afficher();
    cout << "salaire:"<<salaire<<endl;
    }  
};
// classe pour Chef
class chef :public employe
{
 public:
    string Service ;
    //constructeur
    chef(){
    Service ="chef de departement de l'informatique";
    }
    void Afficher() override{
    Personne::Afficher();
    cout << "service :"<<Service<<endl;
    }  
};
// classe pour Chef
class Directeur :public chef
{
 public:
    string Societe ;
    //constructeur
    Directeur(){
    Societe="TEC";
    }
    void Afficher() override{
    Personne::Afficher();
    cout << "Societe :"<<Societe<<endl;
    }  
};

