#include <iostream>
using namespace std;

int main() {
   int num, i;
   bool isPrime = true;
   cout << "Bir sayi girin: ";
   cin >> num;
   for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
         isPrime = false;
         break;
      }
   }
   if (isPrime) {
      cout << num << " bir asal sayidir." << endl;
   } else {
      cout << num << " bir asal sayi degildir." << endl;
   }
   return 0;
}
