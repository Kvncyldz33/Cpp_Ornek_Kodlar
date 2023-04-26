#include <iostream>

int main() {
    int i = 1;
    while(i < 20) {
        if(i % 2 == 1) {
            std::cout << i << std::endl;
        }
        i++;
    }

    return 0;
}
