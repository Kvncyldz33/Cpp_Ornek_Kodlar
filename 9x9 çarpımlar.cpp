#include <iostream>
using namespace std;
int main() {
    int matrix[10][10];

    // 9x9 matrisin kendi i�inde x ve y d�zlemindeki �arp�mlar� atan�yor.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    // Matrisin i�eri�i ekrana yazd�r�l�yor.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
