#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<std::string> palavras;
    int opcao;
    std::string palavra;
    do {
        std::cout << "\n1-Digitar palavra 2-Desfazer 3-Ver topo 0-Sair\nOpcao: ";
        std::cin >> opcao;
        switch (opcao) {
        case 1:
            std::cout << "Palavra: ";
            std::cin >> palavra;
            palavras.push(palavra);
            break;
        case 2:
            if (palavras.empty()) std::cout << "Nada para desfazer.\n";
            else {
                std::cout << "Desfeito: " << palavras.top() << '\n';
                palavras.pop();
            }
            break;
        case 3:
            if (palavras.empty()) std::cout << "Editor vazio.\n";
            else std::cout << "Topo: " << palavras.top() << '\n';
            break;
        }
    } while (opcao != 0);
}
