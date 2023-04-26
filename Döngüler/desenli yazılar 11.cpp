#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int x, y, z;

    cout << "Satýr sayýsýný giriniz: ";
    cin >> x;

    // Üst üçgen
    for (y = 1; y < x; y++)
    {
        for (z = 1; z <= y; z++)
        {
            cout << z;
        }
        cout << endl;
    }

    // Alt üçgen
    for (y = x; y >= 0; y--)
    {
        for (z = 1; z <= y; z++)
            {
            cout << z;
        }
        cout << endl;
    }

    return 0;
}
