#include <iostream>
#include "gra.h"
#include <windows.h>
#include <time.h>
using namespace std;
Gra::Gra(int ik, int iw, int ijw,int p,
 string k9t, string k9p,string k9ka, string k9ki,
 string k10t, string k10p ,string k10ka, string k10ki,
 string kwt, string kwp,string kwka, string kwki,
 string kdt, string kdp,string kdka, string kdki,
 string kkt, string kkp,string kkka, string kkki,
 string kat, string kap,string kaka, string kaki)
 {
 ile_kart=ik ;
 ile_wylosowac=iw;
 ile_juz_wylosowano=ijw ;
 pkt = p;
 dziew_trefl=k9t;
 dziew_pik=k9p;
 dziew_karo=k9ka;
 dziew_kier=k9ki;
 dzies_trefl=k10t;
 dzies_pik=k10p;
 dzies_karo=k10ka;
 dzies_kier=k10ki;
 wal_trefl=kwt;
 wal_pik=kwp;
 wal_karo=kwka;
 wal_kier=kwki;
 dam_trefl=kdt;
 dam_pik=kdp;
 dam_karo=kdka;
 dam_kier=kdki;
 kro_trefl=kkt;
 kro_pik=kkp;
 kro_karo=kkka;
 kro_kier=kkki;
 ass_trefl=kat;
 ass_pik=kap;
 ass_karo=kaka;
 ass_kier=kaki;
}
void Gra::losowanie(){
srand(time(NULL));
wylosowane = new int[ile_wylosowac+1];
 bool losowanie_ok;
 for (int i=1; i<=ile_wylosowac; i++)
 {
do
{
 int liczba=rand()%ile_kart+1; //losowanie w C++
 losowanie_ok=true;
for (int j=1; j<=ile_juz_wylosowano; j++)
{
//czy liczba nie zostala juz wczesniej wylosowana?
if (liczba==wylosowane[j]) losowanie_ok=false;
}
if (losowanie_ok==true)
{
//mamy unikatowa liczbe, zapiszmy ja do tablicy
ile_juz_wylosowano++;
wylosowane[ile_juz_wylosowano]=liczba;
}
} while(losowanie_ok!=true);
 }
}
 void Gra::wyswietl_gracz1(){
cout << endl;
cout<<"Twoje karty to: "<<endl;
cout << "  ______   ______   ______   ______   ______ "<<endl;
cout << " |      | |      | |      | |      | |      |"<<endl;
 for (int l=1; l<=ile_wylosowac - 5; l++)
 {
if (wylosowane[l] == 1) {
 cout << " | " << dziew_trefl << " | ";
 }
if (wylosowane[l] == 2) {
 cout << " | " << dziew_pik << " | ";

}
if (wylosowane[l] == 3) {
 cout << " | " << dziew_karo << " | ";}
if (wylosowane[l] == 4) {
 cout << " | "<< dziew_kier << " | ";
 }
if (wylosowane[l] == 5) {
 cout << " | "<< dzies_trefl << " | ";}
if (wylosowane[l] == 6) {
 cout << " | "<< dzies_pik << " | ";}
if (wylosowane[l] == 7) {
 cout << " | "<< dzies_karo << " | ";}
if (wylosowane[l] == 8) {
 cout << " | "<< dzies_kier << " | ";
 }
 if (wylosowane[l] == 9) {
 cout << " | "<< wal_trefl << " | ";}
if (wylosowane[l] == 10) {
 cout << " | "<< wal_pik << " | ";}
if (wylosowane[l] == 11) {
 cout << " | "<< wal_karo << " | ";}
if (wylosowane[l] == 12) {
 cout << " | "<< wal_kier << " | ";
 }
 if (wylosowane[l] == 13) {
 cout << " | "<< dam_trefl << " | ";}
if (wylosowane[l] == 14) {
 cout << " | "<< dam_pik << " | ";}
if (wylosowane[l] == 15) {
 cout << " | "<< dam_karo << " | ";}

if (wylosowane[l] == 16) {
 cout << " | "<< dam_kier << " | ";
 }
 if (wylosowane[l] == 17) {
 cout << " | "<< kro_trefl << " | ";}
if (wylosowane[l] == 18) {
 cout << " | "<< kro_pik << " | ";}
if (wylosowane[l] == 19) {
 cout << " | "<< kro_karo << " | ";}
if (wylosowane[l] == 20) {
 cout << " | "<< kro_kier << " | ";
 }
 if (wylosowane[l] == 21) {
 cout << " | "<< ass_trefl << " | ";}
if (wylosowane[l] == 22) {
 cout << " | "<< ass_pik << " | ";}
if (wylosowane[l] == 23) {
 cout << " | "<< ass_karo << " | ";}
if (wylosowane[l] == 24) {
 cout << " | "<< ass_kier << " | ";}
}
cout << endl;
cout << " |______| |______| |______| |______| |______| "<<endl;
}
void Gra::punkty(int &p){
 int k1 = 1;
 int k2 = 2;
 int k3 = 3;
 int k4 = 4;
 int k5 = 5;
 int k6 = 6;
 int k7 = 7;
 int k8 = 8;
 int k9 = 9;
 int k10 = 10;

 int k11 = 11;
 int k12 = 12;
 int k13 = 13;
 int k14 = 14;
 int k15 = 15;
 int k16 = 16;
 int k17 = 17;
 int k18 = 18;
 int k19 = 19;
 int k20 = 20;
 int k21 = 21;
 int k22 = 22;
 int k23 = 23;
 int k24 = 24;
 int para9 = 0;
 int para10 = 0;
 int paraw = 0;
 int parad = 0;
 int parak = 0;
 int paraa = 0;
 int strit = 0;
 int suma = 0;
 int kolor_trefl = 0;
 int kolor_pik = 0;
 int kolor_karo = 0;
 int kolor_kier = 0;
 int pkt = p;
 /////////////////////////////////////////////////////////////////////////////////////
 // para, trojka, kareta, full
/////////////////////////////////////////////////////////////////////////////////////
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k1 == wylosowane[l]) {
 para9++;
 }
 if (k2 == wylosowane[l]) {
 para9++;
 }
 if (k3 == wylosowane[l]) {
 para9++;
 }
 if (k4 == wylosowane[l]) {
 para9++;
 }
 }if (para9 == 2){
 p += 100;
 cout << "twoj wynik to para 9"<< endl;}
 if (para9 == 3) {
 p += 300;
 cout << "twoj wynik to trojka 9"<< endl;}

 if (para9 == 4) {
 p = 500;
 cout << "twoj wynik to kareta 9"<< endl;}
//////////////////////////////////////////////////////////////////////////9
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k5 == wylosowane[l]) {
 para10++;
 }
 if (k6 == wylosowane[l]) {
 para10++;
 }
 if (k7 == wylosowane[l]) {
 para10++;
 }
 if (k8 == wylosowane[l]) {
 para10++;
 }
 }if (para10 == 2){
 p += 101;
 cout << pkt;
 cout << "twoj wynik to para 10"<< endl;}
 if (para10 == 3) {
 p += 301;
 cout << "twoj wynik to trojka 10"<< endl;}
 if (para10 == 4) {
 p = 501;
 cout << "twoj wynik to kareta 10"<< endl;}
 //////////////////////////////////////////////////////////////////////// 10
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k9 == wylosowane[l]) {
 paraw++;
 }
 if (k10 == wylosowane[l]) {
 paraw++;
 }
 if (k11 == wylosowane[l]) {
 paraw++;
 }
 if (k12 == wylosowane[l]) {
 paraw++;
 }
 }if (paraw == 2){
 p += 102;
 cout << pkt;

 cout << "twoj wynik to para waletow"<< endl;}
 if (paraw == 3) {
 p += 302;
 cout << "twoj wynik to trojka waletow"<< endl;}
 if (paraw == 4) {
 p = 502;
 cout << "twoj wynik to kareta waletow"<< endl;}
 /////////////////////////////////////////////////////////////////////// W
for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k13 == wylosowane[l]) {
 parad++;
 }
 if (k14 == wylosowane[l]) {
 parad++;
 }
 if (k15 == wylosowane[l]) {
 parad++;
 }
 if (k16 == wylosowane[l]) {
 parad++;
 }
 }if (parad == 2){
 p += 103;
 cout << pkt;
 cout << "twoj wynik to para dam"<< endl;}
 if (parad == 3) {
 p += 303;
 cout << "twoj wynik to trojka dam"<< endl;}
 if (parad == 4) {
 p = 503;
 cout << "twoj wynik to kareta dam"<< endl;}
 ///////////////////////////////////////////////////////////////////// D
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k17 == wylosowane[l]) {
 parak++;
 }
 if (k18 == wylosowane[l]) {
 parak++;
 }
 if (k19 == wylosowane[l]) {
 parak++;
 }

 if (k20 == wylosowane[l]) {
 parak++;
 }
 }if (parak == 2){
 p += 104;
 cout << pkt;
 cout << "twoj wynik to para kroli"<< endl;}
 if (parak == 3) {
 p += 304;
 cout << "twoj wynik to trojka kroli"<< endl;}
 if (parak == 4) {
 p = 504;
 cout << "twoj wynik to kareta kroli"<< endl;}
////////////////////////////////////////////////////////////////////// K
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k21 == wylosowane[l]) {
 paraa++;
 }
 if (k22 == wylosowane[l]) {
 paraa++;
 }
 if (k23 == wylosowane[l]) {
 paraa++;
 }
 if (k24 == wylosowane[l]) {
 paraa++;
 }
 }if (paraa == 2){
 p += 105;
 cout << pkt;
 cout << "twoj wynik to para asow"<< endl;}
 if (paraa == 3) {
 p += 305;
 cout << "twoj wynik to trojka asow"<< endl;}
 if (paraa == 4) {
 p = 505;
 cout << "twoj wynik to kareta asow"<< endl;}
///////////////////////////////////////////////////////////////////////////////////////////
// kolor, strit, poker
///////////////////////////////////////////////////////////////////////////////////////////

 //kolor
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k1 == wylosowane[l]) {
 kolor_trefl++;
 }
 if (k5 == wylosowane[l]) {
 kolor_trefl++;
 }
 if (k9 == wylosowane[l]) {
 kolor_trefl++;
 }
 if (k13 == wylosowane[l]) {
 kolor_trefl++;}
 if (k17 == wylosowane[l]) {
 kolor_trefl++;}
 if (k21 == wylosowane[l]) {
 kolor_trefl++;}
 }
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k2 == wylosowane[l]) {
 kolor_pik++;
 }
 if (k6 == wylosowane[l]) {
 kolor_pik++;
 }
 if (k10 == wylosowane[l]) {
 kolor_pik++;
 }
 if (k14 == wylosowane[l]) {
 kolor_pik++;}
 if (k18 == wylosowane[l]) {
 kolor_pik++;}
 if (k22 == wylosowane[l]) {
 kolor_pik++;}
 }
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k3 == wylosowane[l]) {
 kolor_karo++;
 }
 if (k7 == wylosowane[l]) {
 kolor_karo++;
 }
 if (k11 == wylosowane[l]) {
 kolor_karo++;
 }
 if (k15 == wylosowane[l]) {
 kolor_karo++;}
 if (k19 == wylosowane[l]) {
 kolor_karo++;}
 if (k23 == wylosowane[l]) {
 kolor_karo++;}

 }
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if (k4 == wylosowane[l]) {
 kolor_kier++;
 }
 if (k8 == wylosowane[l]) {
 kolor_kier++;
 }
 if (k12 == wylosowane[l]) {
 kolor_kier++;
 }
 if (k16 == wylosowane[l]) {
 kolor_kier++;}
 if (k20 == wylosowane[l]) {
 kolor_kier++;}
 if (k24 == wylosowane[l]) {
 kolor_kier++;}
 }
 //strit
 for (int l=1; l<=ile_wylosowac - 5; l++){
 if(wylosowane[l] <= 4) strit+=1;
 if((wylosowane[l] <= 8) && (wylosowane[l] > 4)) strit+=10;
 if((wylosowane[l] <= 12) && (wylosowane[l] > 8)) strit+=100;
 if((wylosowane[l] <= 16) && (wylosowane[l] > 12)) strit+=1000;
 if((wylosowane[l] <= 20) && (wylosowane[l] > 16)) strit+=10000;
 if(wylosowane[l] > 20) strit+=100000;}
 //strit sprawdzanie warunków
 if ((strit == 11111)&&(kolor_kier != 5)
 &&(kolor_pik != 5) && (kolor_karo != 5)&& (kolor_trefl != 5)){
 p = 325;
 cout << "twoj wynik to maly strit"<<endl;
 }
 if ((strit == 111110)&&(kolor_kier != 5)
 &&(kolor_pik != 5)&& (kolor_karo != 5)&& (kolor_trefl != 5)){
 p = 350;
 cout << "twoj wynik to duzy strit"<<endl;
 }
 //kolor sprawdzanie warunkow
 if ((kolor_trefl == 5)&&(strit != 111110) && (strit != 11111)) {
 p = 360;
 cout << "twoje karty to kolor trefl"<< endl;
 }

 if ((kolor_pik == 5)&&(strit != 111110) && (strit != 11111)){
 p = 361;
 cout << "twoje karty to kolor pik"<< endl;
 }
 if ((kolor_karo == 5)&&(strit != 111110) && (strit != 11111)){
 p = 362;
 cout << "twoje karty to kolor karo"<< endl;
 }
 if ((kolor_kier == 5)&&(strit != 111110) && (strit != 11111)){
 p = 363;
 cout << "twoje karty to kolor kier"<< endl;
 }
 // poker sprawdzanie warunków
 if ((kolor_trefl == 5)&& (strit == 11111)) {
 p = 601;
 cout << "twoje karty to maly POKER trefl"<< endl;
 }
 if ((kolor_pik == 5)&& (strit == 11111)){
 p = 602;
 cout << "twoje karty to maly POKER pik"<< endl;
 }
 if ((kolor_karo == 5)&& (strit == 11111)){
 p = 603;
 cout << "twoje karty to maly POKER karo"<< endl;
 }
 if ((kolor_kier == 5)&& (strit == 11111)){
 p = 604;
 cout << "twoje karty to maly POKER kier"<< endl;
 }
 if ((kolor_trefl == 5)&&(strit == 111110)) {
 p = 605;
 cout << "twoje karty to maly POKER trefl"<< endl;
 }
 if ((kolor_pik == 5)&&(strit == 111110) ){
 p = 606;
 cout << "twoje karty to maly POKER pik"<< endl;
 }
 if ((kolor_karo == 5)&&(strit == 111110)){
 p = 607;
 cout << "twoje karty to maly POKER karo"<< endl;
 }
 if ((kolor_kier == 5)&&(strit == 111110)){
 p = 608;
 cout << "twoje karty to maly POKER kier"<< endl;
 }
 }

 Cpu::Cpu(int ik, int iw, int ijw,int p,
 string k9t, string k9p,string k9ka, string k9ki,
 string k10t, string k10p ,string k10ka, string k10ki,
 string kwt, string kwp,string kwka, string kwki,
 string kdt, string kdp,string kdka, string kdki,
 string kkt, string kkp,string kkka, string kkki,
 string kat, string kap,string kaka, string kaki)
 :Gra(ik, iw, ijw,p,
 k9t, k9p, k9ka, k9ki,
 k10t, k10p , k10ka, k10ki,
 kwt, kwp, kwka, kwki,
 kdt, kdp, kdka, kdki,
 kkt, kkp, kkka, kkki,
 kat, kap, kaka, kaki){Gra::losowanie();}
void Cpu::wyswietl_gracz1(){
cout << endl;
cout<<"karty komputer : "<<endl;
cout << "  ______   ______   ______   ______   ______ "<<endl;
cout << " |      | |      | |      | |      | |      |"<<endl;
 for (int l=6; l<=ile_wylosowac; l++)
 {
if (wylosowane[l] == 1) {
 cout << " | " << dziew_trefl << " | ";
 }
if (wylosowane[l] == 2) {
 cout << " | " << dziew_pik << " | ";
}
if (wylosowane[l] == 3) {
 cout << " | " << dziew_karo << " | ";}
if (wylosowane[l] == 4) {
 cout << " | "<< dziew_kier << " | ";
 }
if (wylosowane[l] == 5) {
 cout << " | "<< dzies_trefl << " | ";}
if (wylosowane[l] == 6) {
 cout << " | "<< dzies_pik << " | ";}
if (wylosowane[l] == 7) {
 cout << " | "<< dzies_karo << " | ";}
if (wylosowane[l] == 8) {

 cout << " | "<< dzies_kier << " | ";
 }
 if (wylosowane[l] == 9) {
 cout << " | "<< wal_trefl << " | ";}
if (wylosowane[l] == 10) {
 cout << " | "<< wal_pik << " | ";}
if (wylosowane[l] == 11) {
 cout << " | "<< wal_karo << " | ";}
if (wylosowane[l] == 12) {
 cout << " | "<< wal_kier << " | ";
 }
 if (wylosowane[l] == 13) {
 cout << " | "<< dam_trefl << " | ";}
if (wylosowane[l] == 14) {
 cout << " | "<< dam_pik << " | ";}
if (wylosowane[l] == 15) {
 cout << " | "<< dam_karo << " | ";}
if (wylosowane[l] == 16) {
 cout << " | "<< dam_kier << " | ";
 }
 if (wylosowane[l] == 17) {
 cout << " | "<< kro_trefl << " | ";}
if (wylosowane[l] == 18) {
 cout << " | "<< kro_pik << " | ";}
if (wylosowane[l] == 19) {
 cout << " | "<< kro_karo << " | ";}
if (wylosowane[l] == 20) {
 cout << " | "<< kro_kier << " | ";
 }

 if (wylosowane[l] == 21) {
 cout << " | "<< ass_trefl << " | ";}
if (wylosowane[l] == 22) {
 cout << " | "<< ass_pik << " | ";}
if (wylosowane[l] == 23) {
 cout << " | "<< ass_karo << " | ";}
if (wylosowane[l] == 24) {
 cout << " | "<< ass_kier << " | ";}
}
cout << endl;
cout << " |______| |______| |______| |______| |______| "<<endl;
}
void Cpu::punktycpu(int &p){
 int pkt1 = p;
 int k1 = 1;
 int k2 = 2;
 int k3 = 3;
 int k4 = 4;
 int k5 = 5;
 int k6 = 6;
 int k7 = 7;
 int k8 = 8;
 int k9 = 9;
 int k10 = 10;
 int k11 = 11;
 int k12 = 12;
 int k13 = 13;
 int k14 = 14;
 int k15 = 15;
 int k16 = 16;
 int k17 = 17;
 int k18 = 18;
 int k19 = 19;
 int k20 = 20;
 int k21 = 21;
 int k22 = 22;
 int k23 = 23;
 int k24 = 24;
 int para9 = 0;
 int para10 = 0;
 int paraw = 0;
 int parad = 0;
 int parak = 0;
 int paraa = 0;
 int strit = 0;
 int suma = 0;
 int kolor_trefl = 0;
 int kolor_pik = 0;
 int kolor_karo = 0;

 int kolor_kier = 0;
 /////////////////////////////////////////////////////////////////////////////////////
 // para, trojka, kareta, full
/////////////////////////////////////////////////////////////////////////////////////
 for(int l=6; l<=ile_wylosowac; l++){
 if (k1 == wylosowane[l]) {
 para9++;
 }
 if (k2 == wylosowane[l]) {
 para9++;
 }
 if (k3 == wylosowane[l]) {
 para9++;
 }
 if (k4 == wylosowane[l]) {
 para9++;
 }
 }if (para9 == 2){
 p += 100;
 cout << "twoj wynik to para 9"<< endl;}
 if (para9 == 3) {
 p += 300;
 cout << "twoj wynik to trojka 9"<< endl;}
 if (para9 == 4) {
 p = 500;
 cout << "twoj wynik to kareta 9"<< endl;}
//////////////////////////////////////////////////////////////////////////9
 for (int l=6; l<=ile_wylosowac; l++){
 if (k5 == wylosowane[l]) {
 para10++;
 }
 if (k6 == wylosowane[l]) {
 para10++;
 }
 if (k7 == wylosowane[l]) {
 para10++;
 }
 if (k8 == wylosowane[l]) {
 para10++;
 }
 }if (para10 == 2){
 p += 101;

 cout << "twoj wynik to para 10"<< endl;}
 if (para10 == 3) {
 p += 301;
 cout << "twoj wynik to trojka 10"<< endl;}
 if (para10 == 4) {
 p = 501;
 cout << "twoj wynik to kareta 10"<< endl;}
 //////////////////////////////////////////////////////////////////////// 10
 for (int l=6; l<=ile_wylosowac; l++){
 if (k9 == wylosowane[l]) {
 paraw++;
 }
 if (k10 == wylosowane[l]) {
 paraw++;
 }
 if (k11 == wylosowane[l]) {
 paraw++;
 }
 if (k12 == wylosowane[l]) {
 paraw++;
 }
 }if (paraw == 2){
 p += 102;
 cout << "twoj wynik to para waletow"<< endl;}
 if (paraw == 3) {
 p += 302;
 cout << "twoj wynik to trojka waletow"<< endl;}
 if (paraw == 4) {
 p = 502;
 cout << "twoj wynik to kareta waletow"<< endl;}
 /////////////////////////////////////////////////////////////////////// W
for (int l=6; l<=ile_wylosowac; l++){
 if (k13 == wylosowane[l]) {
 parad++;
 }
 if (k14 == wylosowane[l]) {
 parad++;
 }
 if (k15 == wylosowane[l]) {
 parad++;
 }

 if (k16 == wylosowane[l]) {
 parad++;
 }
 }if (parad == 2){
 p += 103;
 cout << "twoj wynik to para dam"<< endl;}
 if (parad == 3) {
 p += 303;
 cout << "twoj wynik to trojka dam"<< endl;}
 if (parad == 4) {
 p = 503;
 cout << "twoj wynik to kareta dam"<< endl;}
 ///////////////////////////////////////////////////////////////////// D
 for (int l=6; l<=ile_wylosowac; l++){
 if (k17 == wylosowane[l]) {
 parak++;
 }
 if (k18 == wylosowane[l]) {
 parak++;
 }
 if (k19 == wylosowane[l]) {
 parak++;
 }
 if (k20 == wylosowane[l]) {
 parak++;
 }
 }if (parak == 2){
 p += 104;
 cout << "twoj wynik to para kroli"<< endl;}
 if (parak == 3) {
 p += 304;
 cout << "twoj wynik to trojka kroli"<< endl;}
 if (parak == 4) {
 p = 504;
 cout << "twoj wynik to kareta kroli"<< endl;}
////////////////////////////////////////////////////////////////////// K
 for (int l=6; l<=ile_wylosowac; l++){
 if (k21 == wylosowane[l]) {
 paraa++;

 }
 if (k22 == wylosowane[l]) {
 paraa++;
 }
 if (k23 == wylosowane[l]) {
 paraa++;
 }
 if (k24 == wylosowane[l]) {
 paraa++;
 }
 }if (paraa == 2){
 p += 105;
 cout << "twoj wynik to para asow"<< endl;}
 if (paraa == 3) {
 p += 305;
 cout << "twoj wynik to trojka asow"<< endl;}
 if (paraa == 4) {
 p = 505;
 cout << "twoj wynik to kareta asow"<< endl;}
///////////////////////////////////////////////////////////////////////////////////////////
// kolor, strit, poker
///////////////////////////////////////////////////////////////////////////////////////////
 //kolor
 for (int l=6; l<=ile_wylosowac; l++){
 if (k1 == wylosowane[l]) {
 kolor_trefl++;
 }
 if (k5 == wylosowane[l]) {
 kolor_trefl++;
 }
 if (k9 == wylosowane[l]) {
 kolor_trefl++;
 }
 if (k13 == wylosowane[l]) {
 kolor_trefl++;}
 if (k17 == wylosowane[l]) {
 kolor_trefl++;}
 if (k21 == wylosowane[l]) {
 kolor_trefl++;}
 }
 for (int l=6; l<=ile_wylosowac; l++){
 if (k2 == wylosowane[l]) {
 kolor_pik++;

 }
 if (k6 == wylosowane[l]) {
 kolor_pik++;
 }
 if (k10 == wylosowane[l]) {
 kolor_pik++;
 }
 if (k14 == wylosowane[l]) {
 kolor_pik++;}
 if (k18 == wylosowane[l]) {
 kolor_pik++;}
 if (k22 == wylosowane[l]) {
 kolor_pik++;}
 }
 for (int l=6; l<=ile_wylosowac; l++){
 if (k3 == wylosowane[l]) {
 kolor_karo++;
 }
 if (k7 == wylosowane[l]) {
 kolor_karo++;
 }
 if (k11 == wylosowane[l]) {
 kolor_karo++;
 }
 if (k15 == wylosowane[l]) {
 kolor_karo++;}
 if (k19 == wylosowane[l]) {
 kolor_karo++;}
 if (k23 == wylosowane[l]) {
 kolor_karo++;}
 }
 for (int l=6; l<=ile_wylosowac; l++){
 if (k4 == wylosowane[l]) {
 kolor_kier++;
 }
 if (k8 == wylosowane[l]) {
 kolor_kier++;
 }
 if (k12 == wylosowane[l]) {
 kolor_kier++;
 }
 if (k16 == wylosowane[l]) {
 kolor_kier++;}
 if (k20 == wylosowane[l]) {
 kolor_kier++;}
 if (k24 == wylosowane[l]) {
 kolor_kier++;}
 }
 //strit

 for (int l=6; l<=ile_wylosowac; l++){
 if(wylosowane[l] <= 4) strit+=1;
 if((wylosowane[l] <= 8) && (wylosowane[l] > 4)) strit+=10;
 if((wylosowane[l] <= 12) && (wylosowane[l] > 8)) strit+=100;
 if((wylosowane[l] <= 16) && (wylosowane[l] > 12)) strit+=1000;
 if((wylosowane[l] <= 20) && (wylosowane[l] > 16)) strit+=10000;
 if(wylosowane[l] > 20) strit+=100000;}
 //strit sprawdzanie warunków
 if ((strit == 11111)&&(kolor_kier != 5)
 &&(kolor_pik != 5) && (kolor_karo != 5)&& (kolor_trefl != 5)){
 p = 325;
 cout << "twoj wynik to maly strit"<<endl;
 }
 if ((strit == 111110)&&(kolor_kier != 5)
 &&(kolor_pik != 5)&& (kolor_karo != 5)&& (kolor_trefl != 5)){
 p = 350;
 cout << "twoj wynik to duzy strit"<<endl;
 }
 //kolor sprawdzanie warunkow
 if ((kolor_trefl == 5)&&(strit != 111110) && (strit != 11111)) {
 p = 360;
 cout << "twoje karty to kolor trefl"<< endl;
 }
 if ((kolor_pik == 5)&&(strit != 111110) && (strit != 11111)){
 p = 361;
 cout << "twoje karty to kolor pik"<< endl;
 }
 if ((kolor_karo == 5)&&(strit != 111110) && (strit != 11111)){
 p = 362;
 cout << "twoje karty to kolor karo"<< endl;
 }
 if ((kolor_kier == 5)&&(strit != 111110) && (strit != 11111)){
 p = 363;
 cout << "twoje karty to kolor kier"<< endl;
 }
 // poker sprawdzanie warunków
 if ((kolor_trefl == 5)&& (strit == 11111)) {
 p = 601;
 cout << "twoje karty to maly POKER trefl"<< endl;
 }
 if ((kolor_pik == 5)&& (strit == 11111)){
 p = 602;

 cout << "twoje karty to maly POKER pik"<< endl;
 }
 if ((kolor_karo == 5)&& (strit == 11111)){
 p = 603;
 cout << "twoje karty to maly POKER karo"<< endl;
 }
 if ((kolor_kier == 5)&& (strit == 11111)){
 p = 604;
 cout << "twoje karty to maly POKER kier"<< endl;
 }
 if ((kolor_trefl == 5)&&(strit == 111110)) {
 p = 605;
 cout << "twoje karty to maly POKER trefl"<< endl;
 }
 if ((kolor_pik == 5)&&(strit == 111110) ){
 p = 606;
 cout << "twoje karty to maly POKER pik"<< endl;
 }
 if ((kolor_karo == 5)&&(strit == 111110)){
 p = 607;
 cout << "twoje karty to maly POKER karo"<< endl;
 }
 if ((kolor_kier == 5)&&(strit == 111110)){
 p = 608;
 cout << "twoje karty to maly POKER kier"<< endl;
 }
 }
