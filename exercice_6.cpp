#include<iostream>
#include"Point.hpp"
using namespace std;

int main(){
    Point p(2.0,3.0);
    p.affiche();
    p.deplace(4.0,6.0);
    p.affiche();
}