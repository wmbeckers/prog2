#include <iostream>
#include <memory>

int main() {
    auto exclusivo = std::make_unique<int>(10);
    std::cout << "unique_ptr: " << *exclusivo << " (posse exclusiva)\n";

    auto compartilhado = std::make_shared<int>(20);
    auto outraReferencia = compartilhado;
    std::weak_ptr<int> observador = compartilhado;

    std::cout << "shared_ptr: " << *compartilhado
              << ", referencias: " << compartilhado.use_count() << '\n';
    if (auto acesso = observador.lock()) {
        std::cout << "weak_ptr observa: " << *acesso << '\n';
    }

    compartilhado.reset();
    outraReferencia.reset();
    if (observador.lock()) {
        std::cout << "O objeto ainda existe.\n";
    } else {
        std::cout << "O objeto observado foi liberado.\n";
    }
}
