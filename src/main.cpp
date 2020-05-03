#include <iostream>
#include "Wektor.hh"
#include "LZespolona.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"


using namespace std;


int main()
{


Macierz<LZespolona,5> M1;
Wektor<LZespolona,5> W1;
Wektor<LZespolona,5> X1;

cin >> M1 >> W1;

UkladRownanLiniowych<LZespolona,5> U1(M1,W1);

cout << U1;
cout << endl;

X1=U1.Oblicz();


cout << "Rozwiazanie x: ";
cout << X1;
cout << endl;

M1.Transponuj();
Wektor Err=(M1*X1)-W1;
cout << "Wektor bledu Ax-b: "<< Err;



}





