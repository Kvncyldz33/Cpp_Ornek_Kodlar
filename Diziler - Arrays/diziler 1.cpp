#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");

    int yaslar[4] = {43, 42, 12, 6}; //1 ailedeki 4 ki�inin ya��n� i�eren dizi

    int i;

    for(i=0; i<4; i++)
    {
        cout << i+1 <<". ki�inin yasi: " << yaslar[i] << endl;
    }

    return 0;
}
