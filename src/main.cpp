#include <iostream>
#include "Wektor.hh"
#include <fstream>
#include "LZespolona.hh"


using namespace std;


int main()
{
  
Wektor<double,5> W1;
Wektor<double,5> W2;

Wektor<LZespolona,5> L1;
Wektor<LZespolona,5> L2;

cin >> L1;
cin >> L2;


LZespolona L3;
cin>>L3;
cout << L1*L3;





}





