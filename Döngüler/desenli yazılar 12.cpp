#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int x, y, z;

    cout << "Sat�r say�s�n� giriniz: ";
    cin >> x;

    // Alt ��gen
    for (y = x; y >= 0; y--)
    {
        for (z = 1; z <= y; z++)
        {
            cout << z;
        }
        cout << endl;
    }

    // �st ��gen
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
