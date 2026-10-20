#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> documentos;
    int opcao;
    std::string documento;
    do {
        std::cout << "\n1-Adicionar 2-Processar proximo 3-Consultar proximo\n"
                     "4-Verificar vazia 0-Sair\nOpcao: ";
        std::cin >> opcao;
        std::cin.ignore();
        switch (opcao) {
        case 1:
            std::cout << "Documento: ";
            std::getline(std::cin, documento);
            documentos.push(documento);
            break;
        case 2:
            if (documentos.empty()) std::cout << "Fila vazia.\n";
            else {
                std::cout << "Imprimindo: " << documentos.front() << '\n';
                documentos.pop();
            }
            break;
        case 3:
            if (documentos.empty()) std::cout << "Fila vazia.\n";
            else std::cout << "Proximo: " << documentos.front() << '\n';
            break;
        case 4:
            std::cout << (documentos.empty() ? "Fila vazia.\n" : "Ha documentos aguardando.\n");
            break;
        }
    } while (opcao != 0);
}
