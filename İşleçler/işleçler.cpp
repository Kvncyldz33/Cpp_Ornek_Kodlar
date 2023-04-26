#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
   int x = 5, y = 10, sonuc;
   cout << "x = 5 | y = 10 | sonuc" << endl;
   sonuc = x + y; // Toplama iþlemi
   cout << "Toplam: " << sonuc << endl;

   sonuc = x * y; // Çarpma iþlemi
   cout << "Carpim: " << sonuc << endl;

   sonuc = y / x; // Bölme iþlemi
   cout << "Bolum: " << sonuc << endl;

   sonuc = y % x; // Mod alma iþlemi
   cout << "Mod: " << sonuc << endl;

   sonuc = x++; // Post-increment iþlemi (değişkenin mevcut değeri ile işlem yapar daha sonra değerini bir arttıracaktır.)
   cout << "(x++ işlemi) sonuc: " << sonuc << " ve x: " << x << endl;

   sonuc = ++x; // Pre-increment iþlemi (önce değişkenin değeri arttırılır, ardından azaltılmış değer kullanılır)
   cout << "(++x işlemi) sonuc: " << sonuc << " ve x: " << x << endl;

   sonuc = x--; // Post-decrement iþlemi (değişkenin mevcut değeri ile işlem yapar daha sonra değerini bir azaltacaktır.)
   cout << "(x-- işlemi) sonuc: " << sonuc << " ve x: " << x << endl;

   sonuc = --x; // Pre-decrement iþlemi (önce değişkenin değeri azaltılır, ardından azaltılmış değer kullanılır)
   cout << "(--x işlemi) sonuc: " << sonuc << " ve x: " << x << endl;

   return 0;
}
