#include <iostream>

class Fila {
    static constexpr int capacidade = 5;
    int dados[capacidade]{};
    int inicio = 0;
    int fim = 0;
    int quantidade = 0;

public:
    bool vazia() const { return quantidade == 0; }
    bool cheia() const { return quantidade == capacidade; }

    void inserir(int valor) {
        if (cheia()) std::cout << "Fila cheia.\n";
        else {
            dados[fim] = valor;
            fim = (fim + 1) % capacidade;
            ++quantidade;
        }
    }

    void remover() {
        if (vazia()) std::cout << "Fila vazia.\n";
        else {
            std::cout << "Removido: " << dados[inicio] << '\n';
            inicio = (inicio + 1) % capacidade;
            --quantidade;
        }
    }
};

int main() {
    Fila fila;
    int opcao, valor;
    do {
        std::cout << "\n1-Inserir 2-Remover 3-Verificar vazia 0-Sair\nOpcao: ";
        std::cin >> opcao;
        switch (opcao) {
        case 1:
            std::cout << "Valor: ";
            std::cin >> valor;
            fila.inserir(valor);
            break;
        case 2: fila.remover(); break;
        case 3: std::cout << (fila.vazia() ? "Vazia.\n" : "Nao esta vazia.\n"); break;
        }
    } while (opcao != 0);
}
