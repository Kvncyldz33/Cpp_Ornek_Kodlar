//Kullanýcýnýn girdiði notun harf karþýlýðýný bulunuz (A, B, C, D veya F)
#include <iostream>
using namespace std;

int main()
{
   int notunuz;
   cout << "Notunuzu girin (0-100 arasýnda): ";
   cin >> notunuz;

   if (notunuz >= 0 && notunuz <= 100) {
       switch (notunuz / 10)
       {
          case 10:
          case 9:
             cout << "A" << endl;
             break;
          case 8:
             cout << "B" << endl;
             break;
          case 7:
             cout << "C" << endl;
             break;
          case 6:
             cout << "D" << endl;
             break;
          default:
             cout << "F" << endl;
             break;
       }
   } else {
       cout << "Geçersiz not girdiniz." << endl;
   }

   return 0;
}
