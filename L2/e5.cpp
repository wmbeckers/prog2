#include <iostream>

int contador = 100;

int main() {
    int contador = 10;

    std::cout << "Contador global: " << ::contador << "\n";
    std::cout << "Contador local da main: " << contador << "\n";

    if (true) {
        int contador = 1;
        std::cout << "Contador do bloco if: " << contador << "\n";
    }

    return 0;
}
