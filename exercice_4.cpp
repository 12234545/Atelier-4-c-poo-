#include<iostream>
#include<cmath>
using namespace std;

class Vecteur3d {
  public:
  float x,y,z;

  //constructeur 
  Vecteur3d():x(0),y(0),z(0){}

  // methode afficher
  void afficher(){
    cout <<"("<<x<<","<<y<<","<<z<<")"<<endl;
  }

  // methode somme
  Vecteur3d somme(const Vecteur3d& v)const{
    Vecteur3d s;
    s.x=x+v.x;
    s.y=y+v.y;
    s.z=z+v.z;
   return s;
  }

  //methode produit scalaire
  float produit_scalaire(const Vecteur3d& v) const{
    float p;
    p=(x*v.x)+(y*v.y)+(z*v.z);
    return p;
  }

  // methode coincide 
  void coincide(const Vecteur3d& v){
    if(x==v.x && y==v.y && z==v.z ){
      cout << "les deux vectores sont coincide"<<endl;
    }
    else{
      cout << "les deux vectores ne sont pas coincide"<<endl;
    }
  }

  // methode qui calcule la norme
  float norme() const{
   float n;
   n=sqrt(x*x+y*y+z*z);
   return n;
  }

  //methode qui comparer deux norme
  void comparer_norme(const Vecteur3d& v){
   float n, n1;
   n=sqrt(x*x+y*y+z*z);
   n1=sqrt(v.x*v.x+v.y*v.y+v.z*v.z);
   if(n>n1){
    cout<<"le premier vecteur a une grande norme"<<endl;
    }else if(n<n1){
        cout<<"le deuxieme vecteur a une grande norme"<<endl;
    }
    else 
    {
        cout<<"les deux vecteur ont la meme norme"<<endl;
    }
  }
};

int main(){
    Vecteur3d v1, v2;
    
    cout << "donner les coordonner de vecteur 1 :"<<endl;
    cout <<"x=";
    cin >> v1.x;
    cout <<"y=";
    cin >> v1.y;
    cout <<"z=";
    cin >> v1.z;
    v1.afficher();
    cout << "----------------"<<endl;

    cout << "donner les coordonner de vecteur 2 :"<<endl;
    cout <<"x=";
    cin >> v2.x;
    cout <<"y=";
    cin >> v2.y;
    cout <<"z=";
    cin >> v2.z;
    v2.afficher();
    cout << "----------------"<<endl;
    Vecteur3d somme = v1.somme(v2); 
    cout << "la somme des deux vectores est ";
    somme.afficher();
    float produit = v1.produit_scalaire(v2);
    cout << "le produit vectoriel  des deux vectores est :"<<produit<<endl;
    
    v1.coincide(v2);
    cout <<"la norme de v1 est :"<<v1.norme()<<endl;
    v1.comparer_norme(v2);
    


}