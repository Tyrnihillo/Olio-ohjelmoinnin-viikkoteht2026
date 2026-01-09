#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int max);
int main()
{
    int maksimi;
    cout << "Anna maksimiarvo: ";
    cin >> maksimi;
    int arvaukset = game(maksimi);
    cout << "Arvausten maara: " << arvaukset;
    return 0;
}

int game(int max)
{

    srand(time(0));
    int luku = rand() % max;
    int arvaus = 0;
    int arvaukset = 0;
    do
    {
        arvaukset++;
        cout << "Arvaa: ";

        cin >> arvaus;
        if(arvaus > luku)
        {
            cout << "Liian suuri \n" << endl;
        }
        if(arvaus < luku)
        {
            cout << "Liian pieni \n" << endl;
        }
        if(arvaus == luku)
        {
            cout << "Oikein! \n" << endl;
        }
    }while(luku != arvaus);
    return arvaukset;
}
