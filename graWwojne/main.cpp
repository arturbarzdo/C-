#include <iostream>
#include "wojna.h"
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    cout << "Podaj liczbe rozdan";

    int ile;
    cin >> ile;
    Ile_rozdan rozdania(ile);

    while(ile >  0){
    ile --;
    Gracz1 g1(24,24,0);
    g1.losowanie();

        Gracz2 g2(24,24,0);
        g2.gra();
    }

    return 0;
}
