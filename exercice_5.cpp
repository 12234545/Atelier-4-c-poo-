#include<iostream>
using namespace std;

class T{
    public:
  void call(){
    static int n=0;
    n++;
    cout <<"bonjour,la fonction a ete appelee"<<n<<"fois"<<endl;
  }
};

int main(){
   T t1;
   t1.call();
   t1.call();
}