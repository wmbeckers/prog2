#include <iostream>
#include <list>
#include <string>

void listar(const std::list<std::string>& tarefas) {
    for (const auto& tarefa : tarefas) {
        std::cout << tarefa << '\n';
    }
    std::cout << "Quantidade: " << tarefas.size() << '\n';
}

int main() {
    std::list<std::string> tarefas;
    int opcao;
    std::string texto;

    do {
        std::cout << "\n1-Inserir no inicio 2-Inserir no final 3-Remover por texto\n"
                     "4-Listar 0-Sair\nOpcao: ";
        std::cin >> opcao;
        std::cin.ignore();
        switch (opcao) {
        case 1:
            std::cout << "Tarefa: ";
            std::getline(std::cin, texto);
            tarefas.push_front(texto);
            break;
        case 2:
            std::cout << "Tarefa: ";
            std::getline(std::cin, texto);
            tarefas.push_back(texto);
            break;
        case 3:
            std::cout << "Texto exato: ";
            std::getline(std::cin, texto);
            tarefas.remove(texto);
            break;
        case 4:
            listar(tarefas);
            break;
        }
    } while (opcao != 0);
}
