#include <iostream>

int main() {
    int limite;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> limite;

    if (limite < 0) {
        std::cout << "Digite um numero nao negativo.\n";
        return 0;
    }

    int primeiro = 0;
    int segundo = 1;

    std::cout << "Sequencia Fibonacci: ";
    while (primeiro <= limite) {
        std::cout << primeiro << " ";
        int proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
    std::cout << "\n";

    return 0;
}
