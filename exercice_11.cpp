#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Traitement{
 public:
  vector<int> n;
 //constructeur
 Traitement(){
    n.resize(15);
 }
 //methodes
 void Initialise(){
   int v,k,i;
   k=0;
   cout <<"entrer 15 entiers paire et non null :"<<endl;
   while(k=15){
    
      cout <<"->";
      cin >>v;
      if(v<=0 && v%2!=0 && cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout <<"erreur : veuillez entrer un entiers paire et non null"<<endl;
      }
      else{
        n[i]=v;
        k++;
      }
  }
 }
 //******** */
  int k =15;
 int show (){
    if(k==0){
         cout <<"fin"<<endl;
    }
    else{
    cout <<n[k];
    return n[k-1];
    }
 }
 //******** */
 friend double moyenne( const Traitement& t ){
    int s;
    if(t.n.empty()) {
        return 0;
    }
    for(int val : t.n){
        s+=val;
    }
    return static_cast<double>(s)/t.n.size();
 }
 //****** */
 friend double mediann(const Traitement& t){
   if(t.n.empty()){
    return 0.0;
   }
   vector<int> val=t.n;
   sort(val.begin(),val.end());
   size_t taille =val.size();
   if(taille%2==0){
    return (val[taille/2-1]+val[taille/2])/2.0;
   }else{
    return val[taille /2];
   }
 }

};

int main(){
    Traitement t;
    double moy, med;
    t.Initialise();
    t.show();
    moy=moyenne(t);
    cout <<"la moyenne est :"<<moy<<endl;
    med=mediann(t);
    cout <<"la median est :"<<med<<endl;
    
}