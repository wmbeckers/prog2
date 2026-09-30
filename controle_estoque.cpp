#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

struct Produto {
    int codigo;
    string nome;
    double preco;
    int quantidade;
};

void exibirTodos(const vector<Produto>& produtos) {
    cout << "\n=== LISTA DE PRODUTOS ===\n";
    cout << left << setw(8) << "Codigo"
         << setw(20) << "Nome"
         << setw(12) << "Preco"
         << setw(12) << "Estoque" << "\n";
    cout << string(52, '-') << "\n";

    for (const auto& p : produtos) {
        cout << left << setw(8) << p.codigo
             << setw(20) << p.nome
             << "R$ " << setw(9) << fixed << setprecision(2) << p.preco
             << setw(12) << p.quantidade << "\n";
    }
}

void produtoMaiorPreco(const vector<Produto>& produtos) {
    if (produtos.empty()) return;
    Produto maior = produtos[0];
    for (const auto& p : produtos) {
        if (p.preco > maior.preco) maior = p;
    }
    cout << "\n=== PRODUTO DE MAIOR PRECO ===\n";
    cout << "Codigo: " << maior.codigo << "\n";
    cout << "Nome: " << maior.nome << "\n";
    cout << "Preco: R$ " << fixed << setprecision(2) << maior.preco << "\n";
    cout << "Estoque: " << maior.quantidade << "\n";
}

void produtoMenorEstoque(const vector<Produto>& produtos) {
    if (produtos.empty()) return;
    Produto menor = produtos[0];
    for (const auto& p : produtos) {
        if (p.quantidade < menor.quantidade) menor = p;
    }
    cout << "\n=== PRODUTO COM MENOR ESTOQUE ===\n";
    cout << "Codigo: " << menor.codigo << "\n";
    cout << "Nome: " << menor.nome << "\n";
    cout << "Preco: R$ " << fixed << setprecision(2) << menor.preco << "\n";
    cout << "Estoque: " << menor.quantidade << "\n";
}

void valorTotalEstoque(const vector<Produto>& produtos) {
    double total = 0.0;
    for (const auto& p : produtos) {
        total += p.preco * p.quantidade;
    }
    cout << "\n=== VALOR TOTAL ARMAZENADO NO ESTOQUE ===\n";
    cout << "R$ " << fixed << setprecision(2) << total << "\n";
}

int main() {
    vector<Produto> produtos = {
        {1, "Arroz 5kg",         25.90, 50},
        {2, "Feijao 1kg",         8.50, 80},
        {3, "Acucar 1kg",         4.20, 100},
        {4, "Oleo de Soja",       7.80, 60},
        {5, "Macarrao 500g",      3.50, 5},
        {6, "Café 500g",         15.00, 40},
        {7, "Leite 1L",           4.90, 120},
        {8, "Sabao em Po",       18.30, 20},
        {9, "Detergente",         2.50, 90},
        {10, "Papel Higienico",  22.00, 3},
        {11, "Refrigerante 2L",   8.00, 35},
        {12, "Biscoito Recheado", 3.20, 70}
    };

    int opcao;

    do {
        cout << "\n===== MENU - CONTROLE DE ESTOQUE =====\n";
        cout << "1. Exibir todos os produtos\n";
        cout << "2. Produto com maior preco\n";
        cout << "3. Produto com menor estoque\n";
        cout << "4. Valor total armazenado no estoque\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcao invalida!\n";
            continue;
        }

        switch (opcao) {
            case 1:
                exibirTodos(produtos);
                break;
            case 2:
                produtoMaiorPreco(produtos);
                break;
            case 3:
                produtoMenorEstoque(produtos);
                break;
            case 4:
                valorTotalEstoque(produtos);
                break;
            case 0:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Opcao invalida! Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
