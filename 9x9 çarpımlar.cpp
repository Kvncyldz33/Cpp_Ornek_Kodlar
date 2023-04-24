#include <iostream>
using namespace std;
int main() {
    int matrix[10][10];

    // 9x9 matrisin kendi içinde x ve y düzlemindeki çarpýmlarý atanýyor.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    // Matrisin içeriði ekrana yazdýrýlýyor.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
