#include <iostream>
using namespace std;
int main()
{
   int sayilar[5];
   int toplam = 0;
   cout << "Lutfen 5 adet sayi girin: " << endl;
   for (int i = 0; i < 5; i++)
   {
      cin >> sayilar[i];
      toplam += sayilar[i];
   }
   cout << "Girdiginiz sayilarin toplami: " << toplam << endl;
   return 0;
}
