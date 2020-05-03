#include "UkladRownanLiniowych.hh"



/*

template<class TYP, int Rozmiar>
UkladRownanLiniowych<TYP,Rozmiar>::UkladRownanLiniowych(){

 Wektor<TYP,Rozmiar> X;
for(int i=0; i<Rozmiar;i++)
  tab[i]=X;

  Macierz<TYP,Rozmiar> M;
  for(int j=0; i<Rozmiar;i++)
  tab[j]=M;

}

*/


 template<class TYP, int Rozmiar>
 const Macierz<TYP,Rozmiar> & UkladRownanLiniowych<TYP,Rozmiar>::get_A() const {

return A;
}


template<class TYP, int Rozmiar>
 const Wektor<TYP,Rozmiar> & UkladRownanLiniowych<TYP,Rozmiar>::get_b() const{

return b;
 }



template<class TYP, int Rozmiar>
 void UkladRownanLiniowych<TYP,Rozmiar>::set_A(const Macierz<TYP,Rozmiar> & AA){

      this->A=AA;

 }


 template<class TYP, int Rozmiar>
 void  UkladRownanLiniowych<TYP,Rozmiar>::set_b(const Wektor<TYP,Rozmiar> & bb){

    this->b=bb;



 }
 template<class TYP, int Rozmiar>
 Wektor<TYP,Rozmiar> UkladRownanLiniowych<TYP,Rozmiar>::Oblicz() const{

Macierz<TYP,Rozmiar> AA;
AA=A;

 TYP Wyz_glowny;
 Wektor<TYP,Rozmiar> W;
 W=b;

 Wektor<TYP,Rozmiar> Wynik;

 Wyz_glowny=AA.wyznacznik_gauss();
 

 if(abs(Wyz_glowny) !=0){


for(int i=0; i<Rozmiar;i++){
AA[i]=W;

Wynik[i]=AA.wyznacznik_gauss();
AA[i]=A[i];

}

for(int i=0; i<Rozmiar;i++){


 Wynik[i]=Wynik[i]/Wyz_glowny;
 
}
 }
 else{ cout <<"Wyznaczik glowny rowny 0";
 exit(0);
 }

return Wynik;
 }

template<class TYP, int Rozmiar>
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych<TYP,Rozmiar> &UklRown){

 /* Strm >>  UklRown.get_A()  >>  UklRown.get_b(); */


Macierz <TYP,Rozmiar> AA;
Wektor<TYP,Rozmiar> bb;

Strm >> AA >> bb;

UklRown.set_A(AA);
UklRown.set_b(bb);

return Strm;

}

template<class TYP, int Rozmiar>
std::ostream & operator << ( std::ostream &Strm, const UkladRownanLiniowych<TYP,Rozmiar>  &UklRown){

Strm << "Macierz A:"<< endl << UklRown.get_A().transponuj() << endl << "Wektor wyrazow wolnych b: "<< UklRown.get_b(); 

return Strm;
}