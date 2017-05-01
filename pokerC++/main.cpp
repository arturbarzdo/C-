#include <iostream>
#include "gra.h"
#include <windows.h>
#include <time.h>
#include <ctype.h>
using namespace std;
int main()
{
 int pieniadze = 100;
 int stawka =0;
 while(pieniadze > 4){
 Gra pok(24, 10, 0,0, "9 \5", "9 \6", "9 \4", "9 \3", "10 \5", "10 \6",
 "10 \4", "10 \3", "W \5", "W \6",
 "W \4", "W \3", "D \5", "D \6" , "D \4", "D \3", "K \5", "K \6", "K \4", "K \3", "A \5", "A \6", "A \4", "A \3");
 Cpu pok1(24, 10, 0,0, "9 \5", "9 \6", "9 \4", "9 \3", "10 \5", "10 \6",
 "10 \4", "10 \3", "W \5", "W \6",
 "W \4", "W \3", "D \5", "D \6" , "D \4", "D \3", "K \5", "K \6", "K \4", "K \3", "A \5", "A \6", "A \4", "A \3");
 pok.losowanie();
 pok.wyswietl_gracz1();
 pok.punkty(pok.pkt);
 cout << pok.pkt;
 cout <<endl<<endl;
 cout << "kwota twojego kredytu "<<pieniadze<<endl;
 cout << "Ile chcesz zaryzykowac? ";
 while((!(cin >> stawka)) || (stawka < 5) || (stawka > pieniadze) ){
 cin.clear();
 cin.sync();
 if (stawka > pieniadze){
 cout << "** Nie mozesz postawic wiecej niz masz kredytow ** - ";
 }
 else if (!(stawka)){
 cout << "** wprowadzony znak nie jest liczba ** - ";
 }
 else{
 cout << "** musisz obstawi minimum 5 kredytow ** - ";
 }
 }
 pok1.wyswietl_gracz1();
 pok1.punktycpu(pok1.pkt);
 cout << pok1.pkt<<endl;
cout <<
"******************************************************************************"<<endl;
cout << "*** ***"<<endl;
 if (pok.pkt < pok1.pkt){
 pieniadze = pieniadze - stawka;
 cout <<" Przegrales "<<stawka << " punktow !!!!!!!!! "<<endl ;
 }
 else if(pok.pkt > pok1.pkt){
 pieniadze = pieniadze + stawka;
 cout <<" Gratulacje wygrales "<<stawka << " punktow !!!!!!!!! "<<endl ;
 }
 else if(pok.pkt > pok1.pkt){
 pieniadze = pieniadze + stawka;
 cout <<" Gratulacje wygrales "<<stawka << " punktow !!!!!!!!! "<<endl ;
 }
cout << "*** ***"<<endl;


 cout<<"******************************************************************************"<<endl;
Sleep(7000);
system( "cls" );
 }
 return 0;
}
