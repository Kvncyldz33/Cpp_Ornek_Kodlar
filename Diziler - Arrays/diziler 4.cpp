//2 bloklu, her blo�unda 4 kat ve her kat�nda 2 daire olan bir apartmandaki istenen bir dairelerin aidat borcunu ekrana yazma

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
    cout << "2 bloklu, her blo�unda 4 kat ve her kat�nda 2 daire olan bir apartman�n aidat borcunu ��renme" << endl;
    cout << "Hangi blokta, ka��nc� katta ve hangi dairede oturan�n aidat borcunu ��renmek istiyorsunuz?" << endl;
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
