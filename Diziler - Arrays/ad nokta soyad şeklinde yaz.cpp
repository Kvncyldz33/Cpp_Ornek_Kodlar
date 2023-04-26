#include <iostream>
#include <string>

using namespace std;

int main()
{
   string ad, soyad;
   cout << "Adinizi girin: ";
   cin >> ad;
   cout << "Soyadinizi girin: ";
   cin >> soyad;
   cout << ad[0] << ". " << soyad << endl;
   return 0;
}
