#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // Türkçe karakter için
    string love = "Nice Yaþlara";
    for (int y = 15; y >= -15; y--)
    {
        for (int x = -30; x < 30; x++)
        {
            double a = (x * 0.05);
            double b = (y * 0.1);
            double c = pow(a, 2) + pow(b, 2) - 1;
            if (pow(c, 3) - pow(a, 2) * pow(b, 3) <= 0)
            {
                int index = (x - y) % love.length();
                if (index < 0) {
                    index += love.length();
                }
                cout << love[index];
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
