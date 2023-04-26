#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{

    int kisi;
    cout << "Kac kisi icin islem yapmak istiyorsunuz? ";
    cin >> kisi;

    string ad,soyad;
    string adlar[kisi] = {};
    string soyadlar[kisi] = {};
    for(int i=0; i<kisi; i++)
    {
        cout << i+1 << ". Kisinin Adi: ";
        cin >> ad;
        cout << i+1 << ". Kisinin Soyadi: ";
        cin >> soyad;
        adlar[i] = ad;
        soyadlar[i] = soyad;
    }
    cout << endl <<"Sonuç:" << endl; // cout <<"\nSonuç: \n" de kullanýlabilir.
    for(int j=0; j<kisi; j++)
    {
        string geciciAd = adlar[j];
        cout << j+1 << " = " << geciciAd[0] << ". " << soyadlar[j] << endl;
    }

    return 0;
}
