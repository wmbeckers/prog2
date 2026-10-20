#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> atendimento;
    int opcao;
    std::string nome;
    do {
        std::cout << "\n1-Adicionar pessoa 2-Chamar proxima 3-Mostrar quantidade 0-Sair\nOpcao: ";
        std::cin >> opcao;
        std::cin.ignore();
        switch (opcao) {
        case 1:
            std::cout << "Nome: ";
            std::getline(std::cin, nome);
            atendimento.push(nome);
            break;
        case 2:
            if (atendimento.empty()) std::cout << "Nao ha pessoas aguardando.\n";
            else {
                std::cout << "Chamando: " << atendimento.front() << '\n';
                atendimento.pop();
            }
            break;
        case 3:
            std::cout << "Aguardando: " << atendimento.size() << '\n';
            break;
        }
    } while (opcao != 0);
}
