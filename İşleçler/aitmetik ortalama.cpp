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
   cout << "Aritmetik ortalama: " << (sayi1 + sayi2) / 2 << endl; kullanýlarak da yapýlabilir.
   Eðer bu yöntem kullanýlacak ise float veri tipinde tanýmladýðýmýz "ortalama" deðiþkenine gerek kalmaz.
   Ayrýca,
   ortalama = (sayi1 + sayi2) / 2;
   cout << "Aritmetik ortalama: " << ortalama << endl;
   satýrlarýný da kullanmamýza gerek kalmaz.
   */

   return 0;
}
