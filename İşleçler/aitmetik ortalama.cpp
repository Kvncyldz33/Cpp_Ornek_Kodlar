#include <iostream>
using namespace std;

int main() {
   float sayi1, sayi2, ortalama;
   cout << "Birinci sayiyi girin: ";
   cin >> sayi1;
   cout << "Ikinci sayiyi girin: ";
   cin >> sayi2;
   ortalama = (sayi1 + sayi2) / 2;
   cout << "Aritmetik ortalama: " << ortalama << endl;
   //cout << "Aritmetik ortalama: " << (sayi1 + sayi2) / 2 << endl;
   /*
   cout << "Aritmetik ortalama: " << (sayi1 + sayi2) / 2 << endl; kullanılarak da yapılabilir.
   Eğer bu yöntem kullanılacak ise float veri tipinde tanımladığımız "ortalama" değişkenine gerek kalmaz.
   Ayrıca,
   ortalama = (sayi1 + sayi2) / 2;
   cout << "Aritmetik ortalama: " << ortalama << endl;
   satırlarını da kullanmamıza gerek kalmaz.
   */

   return 0;
}
