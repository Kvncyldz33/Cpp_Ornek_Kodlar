#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int satirSayisi, satir, sutun;

    cout << "Kaç satırda yazsın: ";
    cin >> satirSayisi;

    for (satir = satirSayisi; satir >= 1; satir--)
    {
        for (sutun = 1; sutun <= satir; sutun++)
        {
            cout << sutun;
        }
        cout << endl;
    }

    return 0;
}
