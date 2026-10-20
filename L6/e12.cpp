#include <iostream>

int main() {
    std::cout << "Comparacao entre estruturas\n\n"
              << "Lista:\n"
              << "- Insercao e remocao podem ocorrer nas extremidades ou por iterador.\n"
              << "- Nao impoe FIFO nem LIFO.\n"
              << "- Aplicacao: playlist ou lista de tarefas.\n\n"
              << "Fila:\n"
              << "- Insercao no final e remocao no inicio.\n"
              << "- Segue FIFO (primeiro a entrar, primeiro a sair).\n"
              << "- Aplicacao: fila de atendimento ou impressao.\n\n"
              << "Pilha:\n"
              << "- Insercao e remocao ocorrem no topo.\n"
              << "- Segue LIFO (ultimo a entrar, primeiro a sair).\n"
              << "- Aplicacao: desfazer acao ou pilha de chamadas.\n";
}
