#include <iostream>
using namespace std;

int main()
{
    int satirSayisi, y, z;
    cout << "Kaç satırda yazsın: ";
    cin >> satirSayisi;
    for (y = 1; y <= satirSayisi; y++)
    {
        for (z = 1; z <= y; z++)
        {
            cout << z;
        }
        cout << endl;
    }
    return 0;
}
