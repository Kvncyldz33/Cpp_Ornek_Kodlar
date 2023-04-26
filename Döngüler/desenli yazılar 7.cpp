#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int satirSayisi, boslukSayisi, yildizSayisi, sayacBosluk = 0, sayacYildiz = 0, sayacCift = 0;
    cout << "Satır sayısını girin: ";
    cin >> satirSayisi;

    for (int i = 1; i <= satirSayisi; ++i)
    {
        for (boslukSayisi = 1; boslukSayisi <= satirSayisi - i; ++boslukSayisi)
        {
            cout << "  ";
            ++sayacBosluk;
        }
        while (sayacCift != 2 * i - 1)
        {
            if (sayacBosluk <= satirSayisi - 1)
            {
                cout << i + sayacCift << " ";
                ++sayacBosluk;
            }
            else
            {
                ++sayacYildiz;
                cout << i + sayacCift - 2 * sayacYildiz << " ";
            }
            ++sayacCift;
        }
        sayacYildiz = sayacBosluk = sayacCift = 0;
        cout << endl;
    }
    return 0;
}
