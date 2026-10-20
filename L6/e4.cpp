#include <iostream>
#include <list>

void exibir(const std::list<int>& valores) {
    if (valores.empty()) {
        std::cout << "Lista vazia.\n";
        return;
    }
    for (int valor : valores) std::cout << valor << ' ';
    std::cout << '\n';
}

int main() {
    std::list<int> valores;
    int opcao, valor;
    do {
        std::cout << "\n1-Inserir 2-Remover primeiro 3-Remover ultimo\n"
                     "4-Remover todas as ocorrencias 5-Exibir 0-Sair\nOpcao: ";
        std::cin >> opcao;
        switch (opcao) {
        case 1:
            std::cout << "Valor: ";
            std::cin >> valor;
            valores.push_back(valor);
            break;
        case 2:
            if (valores.empty()) std::cout << "Lista vazia.\n";
            else valores.pop_front();
            break;
        case 3:
            if (valores.empty()) std::cout << "Lista vazia.\n";
            else valores.pop_back();
            break;
        case 4:
            if (valores.empty()) std::cout << "Lista vazia.\n";
            else {
                std::cout << "Valor: ";
                std::cin >> valor;
                valores.remove(valor);
            }
            break;
        case 5:
            exibir(valores);
            break;
        }
    } while (opcao != 0);
}
