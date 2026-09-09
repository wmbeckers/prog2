#include <iostream>

int main() {
    int idade;

    std::cout << "Digite a idade: ";
    std::cin >> idade;

    if (idade < 0 || idade > 100) {
        std::cout << "Idade fora da faixa considerada.\n";
    } else if (idade <= 1) {
        std::cout << "Faixa etaria: Bebe.\n";
    } else if (idade <= 10) {
        std::cout << "Faixa etaria: Crianca.\n";
    } else if (idade <= 17) {
        std::cout << "Faixa etaria: Adolescente.\n";
    } else if (idade <= 64) {
        std::cout << "Faixa etaria: Adulto.\n";
    } else {
        std::cout << "Faixa etaria: Idoso.\n";
    }

    return 0;
}
