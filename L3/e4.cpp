#include <iostream>
#include <iomanip>

int main() {
    double salario;
    double percentual;

    std::cout << "Digite o salario: R$ ";
    std::cin >> salario;

    if (salario < 3000.00) {
        percentual = 0.50;
    } else if (salario <= 10000.00) {
        percentual = 0.20;
    } else {
        percentual = 0.15;
    }

    double reajuste = salario * percentual;
    double novoSalario = salario + reajuste;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Percentual de reajuste: " << percentual * 100 << "%\n";
    std::cout << "Valor do reajuste: R$ " << reajuste << "\n";
    std::cout << "Novo salario: R$ " << novoSalario << "\n";

    return 0;
}
