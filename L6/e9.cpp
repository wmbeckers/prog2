#include <iostream>

class Pilha {
    static constexpr int capacidade = 5;
    int dados[capacidade]{};
    int topo = -1;

public:
    bool vazia() const { return topo == -1; }
    bool cheia() const { return topo == capacidade - 1; }

    void empilhar(int valor) {
        if (cheia()) std::cout << "Pilha cheia.\n";
        else dados[++topo] = valor;
    }

    void desempilhar() {
        if (vazia()) std::cout << "Pilha vazia.\n";
        else std::cout << "Removido: " << dados[topo--] << '\n';
    }

    void consultarTopo() const {
        if (vazia()) std::cout << "Pilha vazia.\n";
        else std::cout << "Topo: " << dados[topo] << '\n';
    }
};

int main() {
    Pilha pilha;
    int opcao, valor;
    do {
        std::cout << "\n1-Empilhar 2-Desempilhar 3-Consultar topo 4-Verificar vazia 0-Sair\nOpcao: ";
        std::cin >> opcao;
        switch (opcao) {
        case 1:
            std::cout << "Valor: ";
            std::cin >> valor;
            pilha.empilhar(valor);
            break;
        case 2: pilha.desempilhar(); break;
        case 3: pilha.consultarTopo(); break;
        case 4: std::cout << (pilha.vazia() ? "Vazia.\n" : "Nao esta vazia.\n"); break;
        }
    } while (opcao != 0);
}
