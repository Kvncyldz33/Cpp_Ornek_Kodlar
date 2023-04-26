#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int apartman[3][2] =    {
                            {100, 90},
                            {120, 130},
                            {95, 105}
                            };// 3 katlı ve her katýnda 2 daire olan bir apartmandaki dairelerin elektrik borcu

    int kat, daire, kacinci=1;

    for(int kat=0; kat<3;kat++)
    {
      for(int daire=0; daire<2; daire++,kacinci++)
      {
          cout << kat+1 << " kat, " << daire+1 << " nolu dairenin borcu (" << kacinci << ". daire): " << apartman[kat][daire] << endl;
      }
    }
   return 0;
}

