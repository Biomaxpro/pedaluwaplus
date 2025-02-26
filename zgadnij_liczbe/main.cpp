#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int strzal, liczba, ile_prob=0;

int main()
{
    cout << "Witaj! Wybralem pewna liczbe od 1 do 100. Spruboj zgadnac" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        cout << endl << "Wybierz liczbe: ";
        cin >> strzal;

        ile_prob++;

        if(strzal==liczba)
        {
            cout << "Gratulacje, odgadles liczbe! " << "Numer proby: " << ile_prob;
        }
        else if(strzal>liczba)
        {
            cout << "Za duzo! " << "Numer proby: " << ile_prob;
        }
        else if(strzal<liczba)
        {
            cout << "Za malo! " << "Numer proby: " << ile_prob;
        }
    }
    getchar();getchar; // 2 dla pewnosci

    return 0;
}
