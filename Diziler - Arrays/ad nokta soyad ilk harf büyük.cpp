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

   ad[0] = toupper(ad[0]); // ad�n ilk harfini b�y�k harfe �evirir
   soyad[0] = toupper(soyad[0]); // soyad�n ilk harfini b�y�k harfe �evirir

   cout << ad[0] << ". " << soyad << endl; //ad�n ilk karakterini al. nokta koy ve soyad�n ilk harfini b�y�k yazarak tam kelimeyi yaz.
   return 0;
}
