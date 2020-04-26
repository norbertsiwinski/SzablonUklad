
#include <iostream>
#include <math.h>
#include "LZespolona.hh"


using namespace std;

template<class TYP,  int Rozmiar>
class Wektor{

   TYP tab[Rozmiar];

  public:

   
  Wektor<TYP, Rozmiar>(){ 
      for (TYP &_tab: tab) _tab=0;
      };

TYP & operator [] (int index);
  const TYP & operator [] (int index) const;

  Wektor<TYP, Rozmiar> operator+(const Wektor<TYP, Rozmiar> &W2) const;
  Wektor<TYP, Rozmiar> operator-(const Wektor<TYP, Rozmiar> & W2) const; 
   TYP operator*(const Wektor<TYP, Rozmiar> & W2) const;
  Wektor<TYP, Rozmiar> operator*(TYP l2)const; 
   


  bool operator==(const Wektor<TYP, Rozmiar> & W2)const;
  bool operator!=(const Wektor<TYP, Rozmiar> & W2)const;

  

};

template<class TYP, int Rozmiar>
 Wektor<TYP, Rozmiar> operator*(TYP l1, const Wektor<TYP, Rozmiar> & W2); 


template<class TYP, int Rozmiar>
std:: ostream & operator << (std::ostream &strm, const Wektor<TYP, Rozmiar> &W);

template<class TYP, int Rozmiar>
std::istream& operator >> (std::istream &Strm, Wektor<TYP, Rozmiar> &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *   ~bk/edu/kpo/zalecenia.txt 
 */




