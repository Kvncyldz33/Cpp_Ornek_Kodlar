#include <iostream> // C++ standart giriþ/çýkýþ kütüphanesi olan iostream kütüphanesini programýmýza dahil ediyor.
//#include <locale.h>

using namespace std;
/*
C++ dilinde, kodlarýmýzda tanýmlanan fonksiyonlar, deðiþkenler, sýnýflar ve diðer öðeler grup halinde yer alýr.
std, C++ standart kütüphanesinde yer alan öðeleri içerir. Bu standart kütüphane, giriþ/çýkýþ iþlemleri için kullanýlan cout, cin gibi öðeleri içerir.
using namespace std; ifadesi, std içinde yer alan öðeleri kullanabilmek için kullanýlýr. Bu þekilde, örneðin cout veya cin gibi öðeleri direkt olarak kullanabiliriz.
using namespace std; ifadesi, C++ standart kütüphanesindeki öðelerin adýný yazmak için, std:: ön ekini kullanmak yerine kýsaltma yapar.
Bu, kodun okunmasýný kolaylaþtýrýr ve yazýlacak kod miktarýný azaltýr.
Örneðin, std::cout yerine, sadece cout yazarak cout fonksiyonunu kullanabiliriz.
*/
int main()
{
    setlocale(LC_ALL,"Turkish"); //Türkçe karakterleri kullanabilmek için. Programýn baþlangýcýnda setlocale() fonksiyonu ile programýn Türkçe karakter desteðinin açýlmasýný saðlýyoruz. Bu sayede, Türkçe karakterler doðru bir þekilde yazdýrýlabilir.

    int d_tarih; //Programýn baþlangýcýnda setlocale() fonksiyonu ile programýn Türkçe karakter desteðinin açýlmasýný saðlýyoruz. Bu sayede, Türkçe karakterler doðru bir þekilde yazdýrýlabilir.
    cout << "Doðum yilinizi giriniz: "; // cout << "Doðum tarihinizi giriniz: "; // Türkçe karakter için setlocale eklendi.
    cin >> d_tarih; // girilen deðer d_tarih deðiþkenine aktarýldý.
    //cout << "\nDogum tarihiniz: " << d_tarih<<" .Nice yaslariniz olsun."; // Türkçe karakter kullanmayacaksak ð yerine g, ý yerine i kullandýk.
     cout << "\nDoðum yiliniz: " << d_tarih<<" .Nice yaþlarýnýz olsun.";  // Türkçe karakter için setlocale eklendi.
    // "\n" yerine endl kullanmak istersek; cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; þeklinde de kullanýlabilir.
    return 0;
}
