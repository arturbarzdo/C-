#include <iostream>

using namespace std;

class Ile_rozdan{
public:

     int liczba_rozdan;

    Ile_rozdan(int);

};

class Gracz1{
public:
    int ile_kart;
    int ile_wylosowac;
    int ile_juz_wylosowano;
    int *wylosowane;

    Gracz1 (int , int, int );
    void losowanie();

};

class Gracz2:public Gracz1{
    public:
Gracz2 (int , int, int );
void gra();
} ;

