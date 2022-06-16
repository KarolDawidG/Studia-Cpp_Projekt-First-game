#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
int losowanie ();
int main()

{
srand(time(NULL));
int  wybor;
    while (wybor !=4)
    {
    cout << "=============================="<<endl;
    cout << "Wybor opcji: " << endl;
    cout << "1. Papier" << endl;
    cout << "2. Norzyce" << endl;
    cout << "3. Kamien" << endl;
    cout << "4. Koniec gry." << endl;
    cout << "=============================="<<endl;
    cin >> wybor;
    switch(wybor)
    {
  case 1:
    {
        cout << "Wybrales Papier :) " << endl;
        int R = losowanie();
        if (R == 2 ) {
        cout <<"Komputer wybral: kamien !!!"<<endl;
        cout <<" ==>> Papier owija kamien !!! <<=="<<endl<<endl;
        cout << "                Wygrales "<<endl<<endl;
        cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl; }
        else if (R == 3) {
        cout <<"Komputer wybral: norzyce !!!"<<endl<<endl;
         cout << "                Przegrales "<< endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl;
        }
        else if (R == 1){
        cout <<"Komputer wybral: papier !!!"<<endl<<endl;
         cout <<"                Remis!"<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl;
        }
        else
        {
            cout <<"Zla wartosc."<<endl;
        }
    }
    break;
    case 2:
        {
        cout << "Wybrales Norzyce :) " << endl;
        int R = losowanie();
        if (R == 2 ) {
        cout <<"Komputer wybral: kamien !!!"<<endl<<endl;
        cout << "                Przegrales :( "<<endl<<endl;
        cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl; }
        else if (R == 3) {
        cout <<"Komputer wybral: norzyce !!!"<<endl<<endl;
         cout << "                Remis ! ! ! "<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl;
        }
        else if (R == 1){
        cout <<"Komputer wybral: papier !!!"<<endl;
         cout <<"==>> Norzyce przecinaja papier!!! <<=="<<endl<<endl;
         cout <<"                WYGRALES :) !!!"<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl;
        }
        else
        {
            cout <<"Zla wartosc."<<endl;
        }
    }
        break;
        case 3:
        {
        cout << "Wybrales Kamien " << endl;
        int R = losowanie();
        if (R == 2 ) {
        cout <<"Komputer wybral: kamien !!!"<<endl<<endl;
        cout << "                Remis :) "<<endl<<endl;
        cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl; }
        else if (R == 3) {
        cout <<"Komputer wybral: norzyce !"<<endl;
         cout << "==>> Kamien tepi norzyce!!! <<=="<<endl<<endl;
         cout << "                WYGRALES :) !!! "<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl;
        }
        else if (R == 1){
        cout <<"Komputer wybral: papier !!!"<<endl<<endl;
         cout <<"                Przegrales :( !"<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl;
        }
        else
        {
            cout <<"Zla wartosc."<<endl;
        }
    }
        break;
        case 4:
            exit(0);
        break;
        default: cout<<"Nie ma takiej opcji!"<< endl<<endl;
        }
        getchar();
        getchar();
        system("cls");
    }
        return 0;
}
int losowanie ()
{
    int w = rand()%3+1;
    return w;
}
