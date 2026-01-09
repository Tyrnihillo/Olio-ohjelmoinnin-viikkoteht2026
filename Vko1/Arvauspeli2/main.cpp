#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game();
int main()
{
    int arvaukset = game();
    cout << "Arvausten maara: " << arvaukset;
    return 0;
}

int game()
{

    srand(time(0));
    int luku = rand() % 20;
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
