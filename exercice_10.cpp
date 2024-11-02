#include<iostream>
#include<string>
using namespace std;

void extraireDateHeure(const string& chaine){
    if(chaine.length() !=12){
        cout << " la chaine doit contenir 12 caracteres"<<endl;
    }
    string jour=chaine.substr(0,2);
    string mois=chaine.substr(2,2);
    string annee=chaine.substr(4,4);
    string heure=chaine.substr(8,2);
    string minute=chaine.substr(10,2);

    cout << "date :" << jour <<"/"<<mois<<"/"<<annee<<endl;
    cout << "heure :"<<heure<<":"<<minute<<endl;
}

int main(){
    string s="261120041430";
    extraireDateHeure(s);
     
}