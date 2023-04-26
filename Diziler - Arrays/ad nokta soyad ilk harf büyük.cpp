#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
   string ad, soyad;
   cout << "Adinizi girin: ";
   cin >> ad;
   cout << "Soyadinizi girin: ";
   cin >> soyad;

   ad[0] = toupper(ad[0]); // adýn ilk harfini büyük harfe çevirir
   soyad[0] = toupper(soyad[0]); // soyadýn ilk harfini büyük harfe çevirir

   cout << ad[0] << ". " << soyad << endl; //adýn ilk karakterini al. nokta koy ve soyadýn ilk harfini büyük yazarak tam kelimeyi yaz.
   return 0;
}
