#include <iostream>

using namespace std;

double* removerElemento(double* valores, int& quantidade, int indiceRemocao) {
    if (quantidade <= 0 || indiceRemocao < 0 || indiceRemocao >= quantidade) {
        return valores;
    }

    double* novoArray = new double[quantidade - 1];

    for (int i = 0, j = 0; i < quantidade; ++i) {
        if (i != indiceRemocao) {
            novoArray[j++] = valores[i];
        }
    }

    delete[] valores;
    --quantidade;
    return novoArray;
}

int main() {
    int quantidade = 0;
    double* valores = nullptr;

    cout << "Digite a quantidade de elementos: ";
    cin >> quantidade;

    if (quantidade < 0) {
        cout << "Quantidade invalida.\n";
        return 0;
    }

    if (quantidade > 0) {
        valores = new double[quantidade];
        for (int i = 0; i < quantidade; ++i) {
            cout << "Digite o valor " << (i + 1) << ": ";
            cin >> valores[i];
        }
    }

    int indiceRemocao = -1;
    cout << "Digite o indice do elemento a remover (de 0 a " << (quantidade - 1) << "): ";
    cin >> indiceRemocao;

    valores = removerElemento(valores, quantidade, indiceRemocao);

    cout << "Array final: ";
    for (int i = 0; i < quantidade; ++i) {
        cout << valores[i];
        if (i + 1 < quantidade) {
            cout << ", ";
        }
    }
    cout << '\n';

    delete[] valores;
    return 0;
}