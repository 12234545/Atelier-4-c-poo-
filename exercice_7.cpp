#include<iostream>
#include<vector>

using namespace std;

 class Pile{
    public:
    vector<int> n;
   //constrecteur
   Pile(){}
   // methode qui empiler un élément sur la pile 
   void Push(int v){
    n.push_back(v);
   }
   // methode qui dépiler un élément de la pile
   int Pop(){
     if(n.empty()){
        cout << "la pil est vide"<<endl;
     }
     int valeur=n.back();
     n.pop_back();
     return valeur;
   }
   //afficher une pile
   void afficher(){
    for(int i=0; i<n.size();i++){
        cout<<n[i]<<"";
    }
    cout<<endl;
   }
 };
 int main()
 {
    Pile p1,p2;
    // empile des valeurs sur p1
    p1.Push(1);
    p1.Push(2);
    p1.Push(3);
    p1.Push(4);
    p1.afficher();
    // empile des valeurs sur p2
    p2.Push(10);
    p2.Push(20);
    p2.Push(30);
    p2.Push(40);
    p2.afficher();
    // dépiler p1
    p1.Pop();
    p1.Pop();
    p1.afficher();
    //dépiler p2
    p2.Pop();
    p2.Pop();
    p2.afficher();

 }