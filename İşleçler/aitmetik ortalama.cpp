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
   cout << "Aritmetik ortalama: " << (sayi1 + sayi2) / 2 << endl; kullan�larak da yap�labilir.
   E�er bu y�ntem kullan�lacak ise float veri tipinde tan�mlad���m�z "ortalama" de�i�kenine gerek kalmaz.
   Ayr�ca,
   ortalama = (sayi1 + sayi2) / 2;
   cout << "Aritmetik ortalama: " << ortalama << endl;
   sat�rlar�n� da kullanmam�za gerek kalmaz.
   */

   return 0;
}
