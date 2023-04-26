#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");

    int yaslar[4] = {43, 42, 12, 6}; //1 ailedeki 4 kiþinin yaþýný içeren dizi

    int i;

    for(i=0; i<4; i++)
    {
        cout << i+1 <<". kiþinin yasi: " << yaslar[i] << endl;
    }

    return 0;
}
