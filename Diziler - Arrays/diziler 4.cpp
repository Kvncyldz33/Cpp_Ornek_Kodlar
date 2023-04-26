//2 bloklu, her bloğunda 4 kat ve her katında 2 daire olan bir apartmandaki istenen bir dairelerin aidat borcunu ekrana yazma

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");

    int apartman[2][4][2] = {
        {
            {100, 90},
            {120, 130},
            {110, 80},
            {95, 105}
        },
        {
            {100, 90},
            {120, 130},
            {110, 80},
            {95, 105}
        }
    };

    int blok, kat, daire;
    cout << "2 bloklu, her bloğunda 4 kat ve her katında 2 daire olan bir apartmanın aidat borcunu öğrenme" << endl;
    cout << "Hangi blokta, kaçıncı katta ve hangi dairede oturanın aidat borcunu öğrenmek istiyorsunuz?" << endl;
    cout << "Blok: ";
    cin >> blok;
    cout << "Kat: ";
    cin >> kat;
    cout << "Daire: ";
    cin >> daire;

    int aidatBorcu = apartman[blok-1][kat-1][daire-1];
    cout << blok << ". blok, " << kat << ". kat, " << daire << ". dairenin aidat borcu: " << aidatBorcu << " TL" << endl;

    return 0;
}
