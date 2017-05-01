#include <iostream>
using namespace std;
class Gra
{
public:
 int ile_kart;
 int ile_wylosowac;
 int ile_juz_wylosowano;
 int pkt ;
 int *wylosowane;
 string dziew_trefl;
 string dziew_pik;
 string dziew_karo;
 string dziew_kier;
 string dzies_trefl;
 string dzies_pik;
 string dzies_karo;
 string dzies_kier;
 string wal_trefl;
 string wal_pik;
 string wal_karo;
 string wal_kier;
 string dam_trefl;
 string dam_pik;
 string dam_karo;
 string dam_kier;
 string kro_trefl;
 string kro_pik;
 string kro_karo;
 string kro_kier;
 string ass_trefl;
 string ass_pik;
 string ass_karo;
 string ass_kier;
 Gra(int, int, int,int, string, string, string, string, string, string, string, string, string, string,
 string, string, string, string, string, string, string, string, string, string, string, string, string, string);

 void losowanie(); // losuje liczby od 1 do 24
 void wyswietl_gracz1(); // odczytuje numery wyswittla karty
 void punkty(int&); // punkty gracza
};
class Cpu : public Gra {
public:
int pkt1 ;
 Cpu(int, int, int,int, string, string, string, string, string, string, string, string, string, string,
 string, string, string, string, string, string, string, string, string, string, string, string, string, string);
 void wyswietl_gracz1();// tu nastepuje przes3oniecie metody
 void punktycpu(int&); // punkty komputer
};

