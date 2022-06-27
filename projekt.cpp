#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
int losowanie ();
int main()

{
srand(time(NULL));
int  wybor, punkty=0, punktyPC=0;
    while (wybor !=4)
    {
    cout <<"Gra papier, nozyce, kamien."<<endl<<endl;
    cout << "=============================="<<endl;
    cout << "Wybor opcji: " << endl;
    cout << "1. Papier" << endl;
    cout << "2. nozyce" << endl;
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
        punkty++;
        cout << "                Wygrales "<<endl<<endl;
        cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl; }
        else if (R == 3) {
        cout <<"Komputer wybral: nozyce !!!"<<endl<<endl;
        punktyPC++;
         cout << "                Przegrales "<< endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl;
        }
        else if (R == 1){
        cout <<"Komputer wybral: papier !!!"<<endl<<endl;
         cout <<"                Remis!"<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl;
        }
        else
        {
            cout <<"Zla wartosc."<<endl;
        }
    }
    break;
    case 2:
        {
        cout << "Wybrales nozyce :) " << endl;
        int R = losowanie();
        if (R == 2 ) {
        cout <<"Komputer wybral: kamien !!!"<<endl<<endl;
        punktyPC++;
        cout << "                Przegrales :( "<<endl<<endl;
        cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl; }
        else if (R == 3) {
        cout <<"Komputer wybral: nozyce !!!"<<endl<<endl;
         cout << "                Remis ! ! ! "<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl;
        }
        else if (R == 1){
        cout <<"Komputer wybral: papier !!!"<<endl;
         cout <<"==>> nozyce przecinaja papier!!! <<=="<<endl<<endl;
         punkty++;
         cout <<"                WYGRALES :) !!!"<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl;
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
        cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl; }
        else if (R == 3) {
        cout <<"Komputer wybral: nozyce !"<<endl;
         cout << "==>> Kamien tepi nozyce!!! <<=="<<endl<<endl;
         punkty++;
         cout << "                WYGRALES :) !!! "<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl;
        }
        else if (R == 1){
        cout <<"Komputer wybral: papier !!!"<<endl<<endl;
        punktyPC++;
         cout <<"                Przegrales :( !"<<endl<<endl;
         cout <<"Nacisnij ENTER aby zagrac jeszcze raz!!!"<<endl<<endl;
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
        cout <<"Punkty ktore zdobyles: "<<punkty<<endl;
        cout <<"Punkty ktore zdobyl komputer: "<<punktyPC<<endl;
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
