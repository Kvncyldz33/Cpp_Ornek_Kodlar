/* Bu fonksiyon örneðinde Void kullanýlarak sayýnýn 5 ile bölünüp bölünmediði kontrol edilmiþtir.
"void", fonksiyon sonlandýðýnda herhangi bir deðer döndürmeyeceðini belirtir.
*/
#include <iostream>
using namespace std;

void bese_bolme_voidli(int sayi)
{
    if (sayi % 5 == 0) // Sayýnýn 5'e tam bölünüp bölünmediðini ekrana yazdýrýyoruz.
    {
        cout << "Bu sayý 5'e tam bölunür." << endl;
    }
    else
    {
        cout << "Bu sayý 5'e tam bölünmez. " << sayi % 5 << " kalaný verir." << endl;
    }
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    cout << "Bir sayý giriniz: ";
    cin >> sayi;

    bese_bolme_voidli(sayi); // Fonksiyonu çaðýrýyoruz.

    return 0;
}

