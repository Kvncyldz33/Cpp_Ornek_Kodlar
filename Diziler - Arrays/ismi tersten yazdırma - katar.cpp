#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char kelime[50];

   cout << "Lutfen bir kelime girin: ";
   cin >> kelime;

   cout << "Kelimenin tersi: ";
   for (int i = strlen(kelime) - 1; i >= 0; i--)
   {
      cout << kelime[i];
   }
   cout << endl;

   return 0;
}
