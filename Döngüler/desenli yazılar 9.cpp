#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int x, y, z, c = 1;
    int m[5][5] = {0};
    cout << "Kaç satýrda yazsýn: ";
    cin >> x;
    for(y = 1; y <= 5; y++)
    {
        for(z = 1; z <= 5; z++)
            if(z == y || 6 - y == z)
                m[y - 1][z - 1] = c;
        if(y < 4) ++c;
        else --c;
    }
    for(y = 0; y < 5; y++)
    {
        for(z = 0; z < 5; z++)
        {
            if(m[y][z] == 0)
                cout << " ";
            else
                cout << m[y][z];
        }
        cout << "\n";
    }
    return 0;
}
