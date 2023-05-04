/*
Bu fonksiyon �rne�inde Void kullan�lmadan say�n�n 5 ile b�l�n�p b�l�nmedi�i kontrol edilmi�tir.
E�er say� 5'e tam b�l�nm�yorsa kalan de�erini geri d�nd�r�r ve d�nd�rd��� de�er main fonksiyonunda kullan�l�r.

"void" yaz�ld���nda, fonksiyonun de�er d�nd�rmedi�ini belirtirken, "int" veya ba�ka bir veri tipi yaz�lm�� ise fonksiyonun belirtilen t�rde bir de�er d�nd�rece�ini belirtiyor.
Bu nedenle void kullan�lmam��, int kulln�lm��t�r.
*/

#include <iostream>
using namespace std;

int bese_bolme_voidsiz(int sayi) //"int", fonksiyonun tamsay� de�er d�nd�rece�ini belirtiyor. Fonksiyon sonland���nda integer (tam say�) bir de�er d�nd�r�l�r.
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
    cout << "Bir say� giriniz: ";
    cin >> sayi;

    int kalan = bese_bolme_voidsiz(sayi); // Fonksiyonu �a��r�yoruz.
    if (kalan == 0)
    {
        cout << "Bu say� tam b�l�n�r." << endl;
    }
    else
    {
        cout << "Bu say� 5'e tam b�l�nmez. " << kalan << " kalan� verir." << endl;
    }
    return 0;
}
