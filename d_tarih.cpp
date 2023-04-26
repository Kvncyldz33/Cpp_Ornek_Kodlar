#include <iostream> // C++ standart giri�/��k�� k�t�phanesi olan iostream k�t�phanesini program�m�za dahil ediyor.
//#include <locale.h>

using namespace std;
/*
C++ dilinde, kodlar�m�zda tan�mlanan fonksiyonlar, de�i�kenler, s�n�flar ve di�er ��eler grup halinde yer al�r.
std, C++ standart k�t�phanesinde yer alan ��eleri i�erir. Bu standart k�t�phane, giri�/��k�� i�lemleri i�in kullan�lan cout, cin gibi ��eleri i�erir.
using namespace std; ifadesi, std i�inde yer alan ��eleri kullanabilmek i�in kullan�l�r. Bu �ekilde, �rne�in cout veya cin gibi ��eleri direkt olarak kullanabiliriz.
using namespace std; ifadesi, C++ standart k�t�phanesindeki ��elerin ad�n� yazmak i�in, std:: �n ekini kullanmak yerine k�saltma yapar.
Bu, kodun okunmas�n� kolayla�t�r�r ve yaz�lacak kod miktar�n� azalt�r.
�rne�in, std::cout yerine, sadece cout yazarak cout fonksiyonunu kullanabiliriz.
*/
int main()
{
    setlocale(LC_ALL,"Turkish"); //T�rk�e karakterleri kullanabilmek i�in. Program�n ba�lang�c�nda setlocale() fonksiyonu ile program�n T�rk�e karakter deste�inin a��lmas�n� sa�l�yoruz. Bu sayede, T�rk�e karakterler do�ru bir �ekilde yazd�r�labilir.

    int d_tarih; //Program�n ba�lang�c�nda setlocale() fonksiyonu ile program�n T�rk�e karakter deste�inin a��lmas�n� sa�l�yoruz. Bu sayede, T�rk�e karakterler do�ru bir �ekilde yazd�r�labilir.
    cout << "Do�um yilinizi giriniz: "; // cout << "Do�um tarihinizi giriniz: "; // T�rk�e karakter i�in setlocale eklendi.
    cin >> d_tarih; // girilen de�er d_tarih de�i�kenine aktar�ld�.
    //cout << "\nDogum tarihiniz: " << d_tarih<<" .Nice yaslariniz olsun."; // T�rk�e karakter kullanmayacaksak � yerine g, � yerine i kulland�k.
     cout << "\nDo�um yiliniz: " << d_tarih<<" .Nice ya�lar�n�z olsun.";  // T�rk�e karakter i�in setlocale eklendi.
    // "\n" yerine endl kullanmak istersek; cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; �eklinde de kullan�labilir.
    return 0;
}
