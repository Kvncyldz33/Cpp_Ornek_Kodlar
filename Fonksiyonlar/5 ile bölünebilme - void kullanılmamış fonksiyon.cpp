/*
Bu fonksiyon örneðinde Void kullanýlmadan sayýnýn 5 ile bölünüp bölünmediði kontrol edilmiþtir.
Eðer sayý 5'e tam bölünmüyorsa kalan deðerini geri döndürür ve döndürdüðü deðer main fonksiyonunda kullanýlýr.

"void" yazýldýðýnda, fonksiyonun deðer döndürmediðini belirtirken, "int" veya baþka bir veri tipi yazýlmýþ ise fonksiyonun belirtilen türde bir deðer döndüreceðini belirtiyor.
Bu nedenle void kullanýlmamýþ, int kullnýlmýþtýr.
*/

#include <iostream>
using namespace std;

int bese_bolme_voidsiz(int sayi) //"int", fonksiyonun tamsayý deðer döndüreceðini belirtiyor. Fonksiyon sonlandýðýnda integer (tam sayý) bir deðer döndürülür.
{
    if (sayi % 5 == 0)
    {
        return 0;
    }
    else
    {
        return sayi % 5;
    }
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    cout << "Bir sayý giriniz: ";
    cin >> sayi;

    int kalan = bese_bolme_voidsiz(sayi); // Fonksiyonu çaðýrýyoruz.
    if (kalan == 0)
    {
        cout << "Bu sayý tam bölünür." << endl;
    }
    else
    {
        cout << "Bu sayý 5'e tam bölünmez. " << kalan << " kalaný verir." << endl;
    }
    return 0;
}
