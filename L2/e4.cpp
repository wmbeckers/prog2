#include <iostream>
#include <string>

int main() {
    std::string nome;
    int idade;
    float nota;

    std::cout << "Digite o nome completo: ";
    std::getline(std::cin, nome);
    std::cout << "Digite a idade: ";
    std::cin >> idade;
    std::cout << "Digite a nota final: ";
    std::cin >> nota;

    std::string notaComoTexto = std::to_string(nota);

    std::cout << "\nDados confirmados:\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Idade: " << idade << " anos\n";
    std::cout << "Nota final: " << notaComoTexto << "\n";

    return 0;
}
