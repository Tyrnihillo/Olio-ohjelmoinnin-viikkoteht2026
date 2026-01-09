#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int luku = rand() % 20;
    int arvaus = 0;
    do
    {
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
            return 0;
        }
    }while(luku != arvaus);
return 0;
}
