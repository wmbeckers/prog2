#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero inteiro nao negativo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "O fatorial nao e definido para numeros negativos.\n";
        return 0;
    }

    unsigned long long fatorial = 1;
    for (int contador = 2; contador <= numero; ++contador) {
        fatorial *= contador;
    }

    std::cout << numero << "! = " << fatorial << "\n";

    return 0;
}
