#include <iostream>
#include <iomanip>

#define TAXA_JUROS 0.05

int main() {
    const int ANOS = 3;
    double capitalInicial;

    std::cout << "Digite o capital inicial: ";
    std::cin >> capitalInicial;

    double montante = capitalInicial * (1.0 + TAXA_JUROS * ANOS);
    double diferenca = montante - capitalInicial;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Montante final: R$ " << montante << "\n";
    std::cout << "Diferenca entre o capital e o montante: R$ "
              << diferenca << "\n";

    return 0;
}
