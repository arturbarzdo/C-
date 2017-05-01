#include <iostream>
#include "wojna.h"
#include <windows.h>
#include <time.h>

using namespace std;

Ile_rozdan::Ile_rozdan(int lr)
{
    liczba_rozdan = lr;

}

Gracz1 :: Gracz1(int ik, int iw , int ijw ){

    ile_kart=ik ;
    ile_wylosowac=iw;
    ile_juz_wylosowano=ijw ;

}

void Gracz1::losowanie(){

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


Gracz2 :: Gracz2(int ik, int iw , int ijw ):Gracz1(ik, iw ,ijw ){losowanie();}

void Gracz2 :: gra(){
         int pgracz1 =0;
        int pgracz2 =0;
        int karta1;
        int karta2;
        int wojna =0;
   string dziew_trefl="9 \5";
   string dziew_pik="9 \6";
   string dziew_karo="9 \4";
   string dziew_kier="9 \3";
   string dzies_trefl="10 \5";
   string dzies_pik="10 \6";
   string dzies_karo="10 \4";
   string  dzies_kier="10 \3";
   string  wal_trefl="W \5";
   string wal_pik="W \6";
   string  wal_karo="W \4";
   string  wal_kier="W \3";
   string  dam_trefl="D \5";
   string  dam_pik="D \6";
   string  dam_karo="D \4";
   string  dam_kier= "D \3";
   string  kro_trefl="K \5";
   string  kro_pik= "K \6";
   string  kro_karo="K \4";
   string  kro_kier="K \3";
   string  ass_trefl="A \5";
   string  ass_pik="A \6";
   string  ass_karo="A \4";
   string  ass_kier="A \3";


for (int i=1; i<=ile_wylosowac - 12; i++){
    cout << "*************************************************************"<<endl;
    cout << "**                                                         **"<<endl;
    cout << "**                 GRA W WOJNE                             **"<<endl;
    cout << "**                                                         **"<<endl;
    cout << "*************************************************************"<<endl;

cout <<endl<<endl;
cout <<"*************************************************************"<<endl;
    if (wylosowane[i] == 1) {

        cout << "karta gracz 1 | " << dziew_trefl << "  | ";
        karta1 = 1;
    }

	if (wylosowane[i] == 2) {

            cout << "karta gracz 1 | " << dziew_pik << "  | ";
            karta1 = 1;
	}
	if (wylosowane[i] == 3) {

            cout << "karta gracz 1 | " << dziew_karo << "  | ";
            karta1 = 1;
            }

	if (wylosowane[i] == 4) {

            cout << "karta gracz 1 | "<< dziew_kier << "  | ";
            karta1 = 1;
            }

	if (wylosowane[i] == 5) {

            cout << "karta gracz 1 | "<< dzies_trefl << " | ";
            karta1 = 2;
            }

	if (wylosowane[i] == 6) {

	    cout << "karta gracz 1 | "<< dzies_pik << " | ";
	    karta1 = 2;
	    }

	if (wylosowane[i] == 7) {

            cout << "karta gracz 1 | "<< dzies_karo << " | ";
            karta1 = 2;
            }

	if (wylosowane[i] == 8) {

            cout << "karta gracz 1 | "<< dzies_kier << " | ";
            karta1 = 2;
            }

    if (wylosowane[i] == 9) {

            cout << "karta gracz 1 | "<< wal_trefl << "  | ";
            karta1 = 3;

            }

	if (wylosowane[i] == 10) {

	    cout << "karta gracz 1 | "<<  wal_pik << "  | ";
	    karta1 = 3;
	    }

	if (wylosowane[i] == 11) {

	    cout << "karta gracz 1 | "<< wal_karo << "  | ";
	    karta1 = 3;

	    }

	if (wylosowane[i] == 12) {

	    cout << "karta gracz 1 | "<< wal_kier << "  | ";
	    karta1 = 3;

	    }


    if (wylosowane[i] == 13) {

            cout << "karta gracz 1 | "<< dam_trefl << "  | ";
            karta1 = 4;
            }

	if (wylosowane[i] == 14) {

	    cout << "karta gracz 1 | "<< dam_pik << "  | ";
	    karta1 = 4;
	    }

	if (wylosowane[i] == 15) {

	    cout << "karta gracz 1 | "<< dam_karo << "  | ";
	    karta1 = 4;

	    }

	if (wylosowane[i] == 16) {

	    cout << "karta gracz 1 | "<< dam_kier << "  | ";
	    karta1 = 4;

	    }


    if (wylosowane[i] == 17) {

            cout << "karta gracz 1 | "<< kro_trefl << "  | ";
            karta1 = 5;
            }

	if (wylosowane[i] == 18) {

	    cout << "karta gracz 1 | "<< kro_pik << "  | ";
	    karta1 = 5;
	    }

	if (wylosowane[i] == 19) {

	    cout << "karta gracz 1 | "<< kro_karo << "  | ";
	    karta1 = 5;

	    }

	if (wylosowane[i] == 20) {

	    cout << "karta gracz 1 | "<< kro_kier << "  | ";
        karta1 = 5;
	    }


    if (wylosowane[i] == 21) {

            cout << "karta gracz 1 | "<< ass_trefl << "  | ";
            karta1 = 6;
            }

	if (wylosowane[i] == 22) {

	    cout << "karta gracz 1 | "<< ass_pik << "  | ";
	    karta1 = 6;
	    }

	if (wylosowane[i] == 23) {

	    cout << "karta gracz 1 | "<< ass_karo << "  | ";
	    karta1 = 6;

	    }

	if (wylosowane[i] == 24) {

	    cout << "karta gracz 1 | "<< ass_kier << "  | ";
	    karta1 = 6;
	    }

     if (wylosowane[i+12] == 1) {
     cout << "karta gracz 2 | " << dziew_trefl << "  | " <<endl;
        karta2=1;
    }

	if (wylosowane[i+12] == 2) {

            cout << "karta gracz 2 | " << dziew_pik << "  | "<<endl;
            karta2=1;
	}
	if (wylosowane[i+12] == 3) {

            cout << "karta gracz 2 | " << dziew_karo << "  | "<<endl;
            karta2=1;
            }

	if (wylosowane[i+12] == 4) {

            cout << "karta gracz 2 | "<< dziew_kier << "  | "<<endl;
            karta2=1;
            }

	if (wylosowane[i+12] == 5) {

            cout << "karta gracz 2 | "<< dzies_trefl << " | "<<endl;
            karta2=2;
            }

	if (wylosowane[i+12] == 6) {

	    cout << "karta gracz 2 | "<< dzies_pik << " | "<<endl;
	    karta2=2;
	    }

	if (wylosowane[i+12] == 7) {

            cout << "karta gracz 2 | "<< dzies_karo << " | "<<endl;
            karta2=2;
            }

	if (wylosowane[i+12] == 8) {

            cout << "karta gracz 2 | "<< dzies_kier << " | "<<endl;
            karta2=2;
            }

    if (wylosowane[i+12] == 9) {

            cout << "karta gracz 2 | "<< wal_trefl << "  | "<<endl;
            karta2=3;
            }

	if (wylosowane[i+12] == 10) {

	    cout << "karta gracz 2 | "<<  wal_pik << "  | "<<endl;
	    karta2=3;
	    }

	if (wylosowane[i+12] == 11) {

	    cout << "karta gracz 2 | "<< wal_karo << "  | "<<endl;
	    karta2=3;
	    }

	if (wylosowane[i+12] == 12) {

	    cout << "karta gracz 2 | "<< wal_kier << "  | "<<endl;
	    karta2=3;
	    }


    if (wylosowane[i+12] == 13) {

            cout << "karta gracz 2 | "<< dam_trefl << "  | "<<endl;
            karta2=4;
            }

	if (wylosowane[i+12] == 14) {

	    cout << "karta gracz 2 | "<< dam_pik << "  | "<<endl;
	    karta2=4;
	    }

	if (wylosowane[i+12] == 15) {

	    cout << "karta gracz 2 | "<< dam_karo << "  | "<<endl;
	    karta2=4;
	    }

	if (wylosowane[i+12] == 16) {

	    cout << "karta gracz 2 | "<< dam_kier << "  | "<<endl;
	    karta2=4;
	    }


    if (wylosowane[i+12] == 17) {

            cout << "karta gracz 2 | "<< kro_trefl << "  | "<<endl;
            karta2=5;
            }

	if (wylosowane[i+12] == 18) {

	    cout << "karta gracz 2 | "<< kro_pik << "  | "<<endl;
	    karta2=5;
	    }

	if (wylosowane[i+12] == 19) {

	    cout << "karta gracz 2 | "<< kro_karo << "  | "<<endl;
	    karta2=5;
	    }

	if (wylosowane[i+12] == 20) {

	    cout << "karta gracz 2 | "<< kro_kier << "  | "<<endl;
        karta2=5;
	    }


    if (wylosowane[i+12] == 21) {

            cout << "karta gracz 2 | "<< ass_trefl << "  | "<<endl;
            karta2=6;
            }

	if (wylosowane[i+12] == 22) {

	    cout << "karta gracz 2 | "<< ass_pik << "  | "<<endl;
	    karta2=6;
	    }

	if (wylosowane[i+12] == 23) {

	    cout << "karta gracz 2 | "<< ass_karo << "  | "<<endl;
	    karta2=6;
	    }

	if (wylosowane[i+12] == 24) {

	    cout << "karta gracz 2 | "<< ass_kier << "  | "<<endl;
	    karta2=6;
	    }
cout <<"*************************************************************"<<endl;

  if (karta1 == karta2){
        cout << "WOJNA !!!!!!!!!!!"<<endl;
        wojna =2;
  }
    else if (karta1 > karta2){
    cout<<endl <<"<< wygrywa gracz 1 >>"<<endl;
    pgracz1+=wojna;
    pgracz1 ++;
    wojna = 0;
  }else{
       cout<<endl <<"<< wygrywa gracz 2 >>"<<endl;
       pgracz2+=wojna;
       pgracz2 ++;
       wojna =0;
  }
  cout <<endl;
  cout <<"*************************************************************"<<endl;
  cout <<"***                         ***                           ***"<<endl;
  cout <<"***     punkty gracz1 "<<pgracz1<<"     ***     punkty gracz2 "<<pgracz2<<"       ***"<<endl;
  cout <<"***                         ***                           ***"<<endl;
  cout <<"*************************************************************"<<endl;
    Sleep(6000);
    system("cls");
    Sleep(1000);
}
if (pgracz1>pgracz2){
    cout << "Gratulacje wygral gracz 1 - zdobyles o  "<< pgracz1 - pgracz2 << "  punktow wiecej"<<endl;
}
else{

  cout << "Gratulacje wygral gracz 2 - zdobyles o  "<< pgracz1 - pgracz2 << "  punktow wiecej"<<endl;
}
}

