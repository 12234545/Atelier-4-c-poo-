#include<iostream>
#include<cmath>

using namespace std;

class complexe{
   public:
  double reel;//la partie réelle
  double imag;//la partie imaginaire

  //constructeur
  complexe(): reel(0) , imag(0) {}
  //methode de égalité 
  void égalité(const complexe& c ){
    if (reel==c.reel && imag==c.imag)
    {
        cout <<"les deux nombres complexes sont égaux"<<endl;
    }else{
        cout <<"les deux nombres ne sont pas égaux"<<endl;
    }
  }
  //methode de addition
  void addition (const complexe& c){
    complexe somme;
    somme.reel=reel+c.reel;
    somme.imag=imag+c.imag;
    cout << "la somme de ces deux nombres complexe est :"<<somme.reel<<"+"<<somme.imag<<"i"<<endl;
  }
  //methode de soustraction
  void soustraction (const complexe& c){
    complexe sous;
    sous.reel=reel-c.reel;
    sous.imag=imag-c.imag;
    cout << "la soustraction de ces deux nombres complexe est :"<<sous.reel<<"+"<<sous.imag<<"i"<<endl;
  }
  //methode de multiplication
  void multiplication(const complexe& c)
  {
    complexe multi;
    multi.reel=(reel*c.reel)-(imag*c.imag);
    multi.imag=(reel*c.imag)+(imag*c.reel);
    cout << "la multiplication de ces deux nombres complexe est :"<<multi.reel<<"+"<<multi.imag<<"i"<<endl;
  }
  //methode de division 
  void division (const complexe& c){
    complexe div;
    div.reel=((reel*c.reel)+(imag*c.imag))/pow(c.reel,2)+pow(c.imag,2);
    div.imag=((imag*c.reel)-(reel*c.imag))/pow(c.reel,2)+pow(c.imag,2);
    cout << "la division de ces deux nombres complexe est :"<<div.reel<<"+"<<div.imag<<"i"<<endl;
  }
  void afficher(){
    cout << reel << "+" <<imag<<"i"<<endl;
  }
};

int main()
{
  complexe c1;
  complexe c2;
  int n;
  cout << "donner les valeurs de premier nombre complexe :"<<endl;
  cout << "la partie reel:"<<endl;
  cin >> c1.reel;
  cout << "la partie imaginaire :"<<endl;
  cin >> c1.imag;
  c1.afficher();
  cout <<"--------------------------------"<<endl;
  cout << "donner les valeurs de deuxiéme nombre complexe :"<<endl;
  cout << "la partie reel:"<<endl;
  cin >> c2.reel;
  cout << "la partie imaginaire :"<<endl;
  cin >> c2.imag;
  c2.afficher();
  cout <<"--------------------------------"<<endl;
  cout << "choisie l'opération :"<<endl;
  cout << "1) égalité"<<endl;
  cout << "2) Addition"<<endl;
  cout << "3) Soustraction"<<endl;
  cout << "4) Multiplication"<<endl;
  cout << "5) Division"<<endl;
  cout << "6) Rien"<<endl;
  cout <<"--------------------------------"<<endl;
  cout << "entrer le nombre correspondant :";
  cin >>n;
  cout <<"--------------------------------"<<endl;
    switch (n)
    {
    case 1:
        c1.égalité(c2);
        break;
    case 2:
        c1.addition(c2);
        break;
    case 3:
        c1.soustraction(c2);
        break;
    case 4:
        c1.multiplication(c2);
        break;
    case 5:
        c1.division(c2);
        break;
    
    default:
        cout << "Aucune opération choisie."<<endl;
        break;
    }
  
}