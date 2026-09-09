#include <iostream>
#include <string>

int main() {
    std::string texto;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> texto;

    int valor = std::stoi(texto);
    bool valorComoBool = static_cast<bool>(valor);
    bool positivo = valor > 0;
    bool par = valor % 2 == 0;

    std::cout << std::boolalpha;
    std::cout << "Valor convertido para bool: " << valorComoBool << "\n";
    std::cout << "O valor e positivo e par: "
              << (positivo && par) << "\n";

    return 0;
}
