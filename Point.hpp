#pragma once
#include <iostream>
#ifndef Point_hpp;
#define Point_hpp;
using namespace std;

class Point{
     private:
      float x;
      float y;
    public:
      //constructeur
      Point(float x, float y){}
      // methodes 
      void deplace(float dx,float dy)// d: est la distance de deplacement
      {}
      void affiche (){
        cout <<"les coordonnees cartesiennes est :("<<x<<"x,"<<y<<"y)"<<endl;
      }
};
#endif