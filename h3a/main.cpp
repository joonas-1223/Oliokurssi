
#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Gordon Ramsay");

    kokki.makeSalad();
    kokki.makeSoup();

    {
        ItalianChef italialainenKokki("Anthony Bourdain");

        italialainenKokki.makeSalad();
        italialainenKokki.makeSoup();
        italialainenKokki.makePasta();

        cout << "name of the Italian Chef is "
             << italialainenKokki.getName() << endl;
    }

    return 0;
}
