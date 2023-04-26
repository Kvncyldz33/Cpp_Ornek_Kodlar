#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish"); //Türkçe karakterleri kullanabilmek için. Programýn baþlangýcýnda setlocale() fonksiyonu ile programýn Türkçe karakter desteðinin açýlmasýný saðlýyoruz. Bu sayede, Türkçe karakterler doðru bir þekilde yazdýrýlabilir.

    int d_tarih; //Programýn baþlangýcýnda setlocale() fonksiyonu ile programýn Türkçe karakter desteðinin açýlmasýný saðlýyoruz. Bu sayede, Türkçe karakterler doðru bir þekilde yazdýrýlabilir.
    cout << "Doðum tarihinizi giriniz: "; // cout << "Doðum tarihinizi giriniz: "; // Türkçe karakter için setlocale eklendi.
    cin >> d_tarih;
    //cout << "\nDogum tarihiniz: " << d_tarih<<" .Nice yaþlarýnýz olsun.";
     cout << "\nDoðum tarihiniz: " << d_tarih<<" .Nice yaþlarýnýz olsun.";  // Türkçe karakter için setlocale eklendi.
    // "\n" yerine endl kullanmak istersek; cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; þeklinde de kullanýlabilir.
    return 0;
}
