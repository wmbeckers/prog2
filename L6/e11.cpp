#include <iostream>

struct No {
    int valor;
    No* proximo;
};

int main() {
    No* inicio = nullptr;
    No** fim = &inicio;
    for (int valor = 1; valor <= 5; ++valor) {
        *fim = new No{valor, nullptr};
        fim = &((*fim)->proximo);
    }

    std::cout << "Lista: ";
    for (No* atual = inicio; atual != nullptr; atual = atual->proximo)
        std::cout << atual->valor << ' ';
    std::cout << '\n';

    while (inicio != nullptr) {
        No* removido = inicio;
        inicio = inicio->proximo;
        delete removido;
    }
}
