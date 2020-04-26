#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include<iostream>
using namespace std;




struct LZespolona{

double re;
double im;


explicit LZespolona(double liczba): re(liczba), im(0) {};
LZespolona(): re(0), im(0) {};


LZespolona & operator = (double liczba);
double Modul()const;
};

LZespolona sprzezenie(LZespolona L);
double modul(LZespolona L);
LZespolona dziel(LZespolona Skl1,double x);


LZespolona operator - (LZespolona Skl1, LZespolona Skl2);
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator * (LZespolona Skl1, LZespolona Skl2);
LZespolona operator *(LZespolona SKl1, double x);
LZespolona operator / (LZespolona Skl1, LZespolona Skl2);


std::istream & operator >>(std::istream & strm, LZespolona & Skl);
std::ostream & operator <<(std::ostream & strm, LZespolona L);


bool operator ==(LZespolona Skl1, LZespolona Skl2);
bool operator !=(LZespolona Skl1, LZespolona Skl2);




#endif