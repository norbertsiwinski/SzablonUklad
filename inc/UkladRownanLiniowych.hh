#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"
#include "Wektor.hh"
#include "LZespolona.hh"


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */


template<class TYP, int Rozmiar>
class UkladRownanLiniowych {

Macierz<TYP,Rozmiar>  A;
Wektor<TYP,Rozmiar> b;


  public:
 UkladRownanLiniowych<TYP,Rozmiar>(){};
 UkladRownanLiniowych<TYP,Rozmiar> (const Macierz<TYP,Rozmiar> &_A,const Wektor<TYP,Rozmiar> &_b){A =_A; b=_b;};


  const Macierz<TYP,Rozmiar> & get_A() const;
  const Wektor<TYP,Rozmiar> & get_b() const;
 void set_A(const Macierz<TYP,Rozmiar> & AA) ;
  void set_b(const Wektor<TYP,Rozmiar> & bb) ;

 Wektor<TYP,Rozmiar> Oblicz() const;
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
template<class TYP, int Rozmiar>
std::istream& operator >> 
(std::istream &Strm, UkladRownanLiniowych<TYP,Rozmiar> &UklRown);



/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
template<class TYP, int Rozmiar>
std::ostream & operator <<
( std::ostream &Strm, const UkladRownanLiniowych<TYP,Rozmiar>  &UklRown);


#endif
