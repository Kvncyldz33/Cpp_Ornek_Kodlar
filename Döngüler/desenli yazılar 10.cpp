#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int x, y, z, c = 1;
    cout << "Satýr sayýsýný girin: ";
    cin >> x;

    for (y = 1; y <= (2 * x) - 1; y++)
    {
        for (z = 1; z <= (2 * x) - 1; z++)
            {
            if (y == z || y + z == 2 * x)
                cout << c;
            else
                cout << " ";
        }
        if (y < x)
            c++;
        else
            c--;
        cout << endl;
    }
    return 0;
}
