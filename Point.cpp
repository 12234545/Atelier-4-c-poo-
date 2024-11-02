#include "exercice_6.hpp"
using namespace std;

 Point::Point(float x, float y){
        this->x=x;
        this->y=y;
      }
void  Point ::deplace(float dx,float dy)// d: est la distance de deplacement
      {
         x=x+dx;
         y=y+dy;
      }
 void Point ::affiche (){
        cout <<"les coordonnees cartesiennes est :("<<x<<"x,"<<y<<"y)"<<endl;
      }