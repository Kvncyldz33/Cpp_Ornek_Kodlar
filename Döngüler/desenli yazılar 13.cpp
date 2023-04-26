#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int x, y, z, n;
    cout << "Satýr sayýsýný girin: ";
    cin >> n;

    for (y = 1; y <= n; y++)
    {
        if (y % 2 == 0)
        {
            x = 1;
            z = 0;
        }
        else
        {
            x = 0;
            z = 1;
        }
        for (z = 1; z <= y; z++)
        {
            if (z % 2 == 0)
                cout << x;
            else
                cout << z;
        }
        cout << endl;
    }

    return 0;
}
