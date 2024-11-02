#include<iostream>
using namespace std;

struct Element
{
    int v;
    Element *next;
    
    Element(int val):v(val),next(nullptr){}
};


class liste
{
private:
    Element *premier;
public:
  // constructeur
  liste(): premier(nullptr){}
  // methodes
  void ajouterDebut(int n){
    Element* nv= new Element(n);
    nv->next=premier;
    premier=nv;
  }

  void supprimerDebut(){
    if(premier==nullptr){
        cout <<"la liste est vide"<<endl;
    }
    Element * temp=premier;
    premier=premier->next;
  }

  void afficher() const{
    if(premier == nullptr){
        cout << "la liste est vide"<<endl;
    }
    Element* c=premier;
    cout <<"liste :";
    while(c != nullptr){
        cout << c->v <<" ";
        c=c->next;
    }
    cout << endl;
  }
  // destructeur
  ~liste(){
    while (premier != nullptr)
    {
        supprimerDebut();
    }
  }
    
};

int main(){
    liste l;
  // ajout d'elements au debut de la liste
    l.ajouterDebut(100);
    l.ajouterDebut(15);
    l.ajouterDebut(96);
  // afficher la liste
    l.afficher();
 // supprimer d'un élément au debut de la liste
    l.supprimerDebut();
    l.afficher();
}
