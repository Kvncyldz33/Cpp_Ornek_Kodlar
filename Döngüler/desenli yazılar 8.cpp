#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int satirSayisi, satir, sutun, sayac = 1;
    cout << "Satır sayısını girin: ";
    cin >> satirSayisi;
    for (satir = 1; satir <= satirSayisi; satir++)
    {
        for (sutun = 1; sutun <= satir; ++sutun)
        {
            cout << sayac << " ";
            ++sayac;
        }
        cout << endl;
    }
    return 0;
}
