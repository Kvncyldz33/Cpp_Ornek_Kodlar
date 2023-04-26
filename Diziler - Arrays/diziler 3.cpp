#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
//2 bloklu, her bloðunda 4 kat ve her katýnda 2 daire olan bir apartmanda dairelerin aidat borcunu ekrana yazma
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

    int blok, kat, daire, kacinci = 1;

    for (blok = 0; blok < 2; blok++)
    {
        for (kat = 0; kat < 4; kat++)
        {
            for (daire = 0; daire < 2; daire++, kacinci++)
            {
                cout << blok+1 << ". blok, " << kat+1 << ". kat, " << daire+1 << ". dairenin borcu (" << kacinci << ". daire): " << apartman[blok][kat][daire] << endl;
            }
            cout << "___________________________________________________________________\n" << endl;
        }
    }

    return 0;
}
