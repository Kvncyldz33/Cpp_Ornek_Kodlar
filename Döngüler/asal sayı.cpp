#include <iostream>
using namespace std;

int main() {
   int num, i, flag=0;
   cout << "Bir sayi girin: ";
   cin >> num;
   for (i=2; i<=num/2; i++) {
      if (num % i == 0) {
         flag = 1;
         break;
      }
   }
   if (num == 1) {
      cout << "Asal degil." << endl;
   }
   else {
      if (flag == 0) {
         cout << "Asal bir sayi." << endl;
      }
      else {
         cout << "Asal degil." << endl;
      }
   }
   return 0;
}
