#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int x, y, z;

    cout << "Sat�r say�s�n� giriniz: ";
    cin >> x;

    // �st ��gen
    for (y = 1; y < x; y++)
    {
        for (z = 1; z <= y; z++)
        {
            cout << z;
        }
        cout << endl;
    }

    // Alt ��gen
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
