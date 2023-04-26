#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int satir_sayisi;
    cout << "Kaç satırda yazsın: ";
    cin >> satir_sayisi;

    for (int satir = 1; satir <= satir_sayisi; satir++)
    {
        for (int bosluk = satir; bosluk < satir_sayisi; bosluk++)
        {
            cout << " ";
        }
        for (int sayi = 1; sayi < satir * 2; sayi++)
        {
            cout << sayi;
        }
        cout << endl;
    }
    for (int satir = satir_sayisi - 1; satir >= 1; satir--)
    {
        for (int bosluk = satir_sayisi; bosluk > satir; bosluk--)
        {
            cout << " ";
        }
        for (int sayi = 1; sayi < satir * 2; sayi++)
        {
            cout << sayi;
        }
        cout << endl;
    }
    return 0;
}
