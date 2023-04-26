#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int satir_sayisi;
    cout << "Kaç satırda yazsın: ";
    cin >> satir_sayisi;

    for (int x = 1; x <= satir_sayisi; x++)
    {
        for (int y = 1; y <= satir_sayisi; y++)
        {
            if (y <= x)
                cout << y;
            else
                cout << " ";
        }
        for (int y = satir_sayisi; y >= 1; y--)
        {
            if (y <= x)
                cout << y;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
