#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int satir_sayisi, yildiz, bosluk;
    cout << "Satýr sayýsýný girin: ";
    cin >> satir_sayisi;

    for (int satir = 1; satir <= satir_sayisi; satir++)
    {
        if (satir % 2 == 0)
        {
            yildiz = 1;
            bosluk = 0;
        }
        else
        {
            yildiz = 0;
            bosluk = 1;
        }
        for (int sutun = 1; sutun <= satir; sutun++)
        {
            if (sutun % 2 == 0)
                cout << yildiz;
            else
                cout << bosluk;
        }
        cout << endl;
    }

    return 0;
}
