//Kullanýcýnýn girdiði notun harf karþýlýðýný bulunuz (A, B, C, D veya F)
#include <iostream>
using namespace std;

int main() {
   int notunuz;
   cout << "Notunuzu girin (0..100 arasında): ";
   cin >> notunuz;

   if (notunuz >= 0 && notunuz <= 100) {

   if (notunuz >= 90) {
      cout << "A" << endl;
   }
   else if (notunuz >= 80) {
      cout << "B" << endl;
   }
   else if (notunuz >= 70) {
      cout << "C" << endl;
   }
   else if (notunuz >= 60) {
      cout << "D" << endl;
   }
   else {
      cout << "F" << endl;
   }
}
else {
       cout << "Geçersiz not girdiniz." << endl;
   }
   return 0;
}
