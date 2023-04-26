#include <iostream>
using namespace std;

int main()
{
   int notunuz;
   bool gecerliNot = false;

   while (!gecerliNot)
    {
       cout << "Notunuzu girin (0-100 arasýnda): ";
       cin >> notunuz;

       if (notunuz >= 0 && notunuz <= 100) {
           gecerliNot = true;
       } else {
           cout << "Geçersiz not girdiniz. Tekrar deneyin." << endl;
       }
   }

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
   return 0;
}
