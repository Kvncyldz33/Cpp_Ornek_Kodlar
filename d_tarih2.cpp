#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish"); //T�rk�e karakterleri kullanabilmek i�in. Program�n ba�lang�c�nda setlocale() fonksiyonu ile program�n T�rk�e karakter deste�inin a��lmas�n� sa�l�yoruz. Bu sayede, T�rk�e karakterler do�ru bir �ekilde yazd�r�labilir.

    int d_tarih; //Program�n ba�lang�c�nda setlocale() fonksiyonu ile program�n T�rk�e karakter deste�inin a��lmas�n� sa�l�yoruz. Bu sayede, T�rk�e karakterler do�ru bir �ekilde yazd�r�labilir.
    cout << "Do�um tarihinizi giriniz: "; // cout << "Do�um tarihinizi giriniz: "; // T�rk�e karakter i�in setlocale eklendi.
    cin >> d_tarih;
    //cout << "\nDogum tarihiniz: " << d_tarih<<" .Nice ya�lar�n�z olsun.";
     cout << "\nDo�um tarihiniz: " << d_tarih<<" .Nice ya�lar�n�z olsun.";  // T�rk�e karakter i�in setlocale eklendi.
    // "\n" yerine endl kullanmak istersek; cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; �eklinde de kullan�labilir.
    return 0;
}
