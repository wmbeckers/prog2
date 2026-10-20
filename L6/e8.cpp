#include <iostream>
#include <sstream>
#include <stack>
#include <string>

int main() {
    std::cout << "Digite uma frase: ";
    std::string frase, palavra;
    std::getline(std::cin, frase);
    std::istringstream entrada(frase);
    std::stack<std::string> palavras;
    while (entrada >> palavra) palavras.push(palavra);

    std::cout << "Frase invertida: ";
    while (!palavras.empty()) {
        std::cout << palavras.top();
        palavras.pop();
        if (!palavras.empty()) std::cout << ' ';
    }
    std::cout << '\n';
    std::cout << "A pilha segue LIFO: a ultima palavra inserida e a primeira removida.\n";
}
