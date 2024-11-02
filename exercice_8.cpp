#include<iostream>
#include<cstring>
using namespace std;

class Fichier{
    public:
    char *p;
    size_t longeur;
   // constructeur 
   Fichier():p(nullptr),longeur(0){}
   // methodes
   void creation(size_t taille)
   {
    longeur = taille;
    p=new char[longeur];
   }
   void remplit(char valeur ='A'){
     if(p){
        memset(p,valeur,longeur);
     }
     else{
        cout << "erreur"<<endl;
     }
   }
   void affiche() const{
      if(p){
        cout << "contenu de la zone memoire :";
        for(size_t i=0;i< longeur;i++){
            cout << p[i];
        }
        cout << endl;
      }
      else{
        cout <<"erreur"<<endl;
      }
   }
   // destructeur
   ~Fichier(){
    delete[] p;
    cout <<"la memoire est liberee !!!"<<endl;
   }
};
int main(){
    Fichier *f=new Fichier();

    f->creation(10);
    f->remplit();
    f->affiche();

    delete f;
}