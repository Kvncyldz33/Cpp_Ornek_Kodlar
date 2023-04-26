#include <iostream>
using namespace std;

int main()
{
   int sayi1, sayi2, kalan;
   cout << "Birinci sayiyi girin: ";
   cin >> sayi1;
   cout << "Ikinci sayiyi girin: ";
   cin >> sayi2;
   kalan = sayi1 % sayi2;
   cout << "Mod: " << kalan << endl;
   return 0;
}
