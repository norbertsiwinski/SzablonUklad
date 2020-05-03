#include "LZespolona.hh"
#include <iostream>
#include <math.h>



using namespace std;

LZespolona & LZespolona::operator = (double  liczba)
{
  this->re = liczba; this->im = 0;
  return *this;
}

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
LZespolona operator - (LZespolona Skl1, LZespolona Skl2)
{
    LZespolona Wynik;
    Wynik.re=Skl1.re - Skl2.re;
    Wynik.im=Skl1.im - Skl2.im;
     return Wynik;
}

LZespolona operator * (LZespolona Skl1, LZespolona Skl2){
 LZespolona Wynik;
 Wynik.re=Skl1.re*Skl2.re - Skl1.im*Skl2.im;
 Wynik.im=Skl1.re*Skl2.im + Skl1.im*Skl2.re;
 return Wynik;

}
LZespolona operator / (const LZespolona & Skl1, const LZespolona & Skl2) {

LZespolona Wynik;

LZespolona LSprz1=sprzezenie(Skl2);
double ModzLiczb=modul(Skl2);
ModzLiczb=pow(ModzLiczb,2);  
LZespolona x=Skl1*LSprz1;
Wynik=x/ModzLiczb;

return Wynik;

}
LZespolona operator / (LZespolona Skl1, double x){

LZespolona Wynik;
Wynik.re=Skl1.re/x;
Wynik.im=Skl1.im/x;
return Wynik;

}

LZespolona sprzezenie(LZespolona L){

L.im=-L.im;
return L;
}

double modul(LZespolona L)
{
    double LM;
    LM=sqrt(pow(L.re,2)+pow(L.im,2));
    return LM;
}
double LZespolona::Modul() const {

  double Modul = sqrt((re * re) + (im * im));
  return Modul;
}

LZespolona dziel(LZespolona Skl1,double y){
LZespolona Wynik;

if(y!=0){
LZespolona Wynik;
Wynik.im=Skl1.im/y;
Wynik.re=Skl1.re/y;
}
else exit(1);

return Wynik;

}



bool operator ==(const LZespolona Skl1, const LZespolona Skl2)
{
  if(Skl1.re==Skl2.re && Skl1.im==Skl2.im)
  return true;
  else
  return false;
}

bool operator !=(const LZespolona Skl1, const LZespolona Skl2)
{
  if(Skl1.re!=Skl2.re || Skl1.im!=Skl2.im)
  return true;
  else
  return false;
}



std::istream & operator >>(std::istream & strm, LZespolona & Skl){

  char znak;
  strm>>znak;
  if (znak != '(')
    strm.setstate(std::ios::failbit);
  strm>>Skl.re>>Skl.im>>znak;
  if (znak != 'i')
    strm.setstate(std::ios::failbit);
  strm>>znak;
  if (znak != ')')
    strm.setstate(std::ios::failbit);

    return strm;
}



std::ostream & operator <<(std::ostream & strm, LZespolona L)
{
  strm<<'('<<L.re<<showpos<<L.im<<noshowpos<<"i)";

  return strm;
}


LZespolona operator *(LZespolona SKl1, double x){

LZespolona Wynik;

Wynik=Wynik.re * x;
Wynik=Wynik.im * x;

return Wynik;

}
double abs (const LZespolona &Skl1){

return abs(Skl1.Modul());

}