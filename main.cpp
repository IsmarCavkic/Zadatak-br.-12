#include <iostream>
using namespace std;

// Unose se brojevi sve dok se ne unese 0. Izračunati i ispisati zbir recipročnih vrijednosti unijetih brojeva.

int main() {
  float a;
  float b = 0;

  cout<<"Unesite broj: ";
  cin>> a ;
 
 while (a!=0){
  b = b + 1/a;
  cout<< "Unesite broj: ";
  cin>> a;
  if (a==0)
    cout<< b;
  }

  
 return 0;
}