#include <iostream>

using namespace std;

double* inserirAoFinal(double* valores, int quantidade, double novoValor) {
    double* novoArray = new double[quantidade + 1];

    for (int i = 0; i < quantidade; ++i) {
        novoArray[i] = valores[i];
    }

    novoArray[quantidade] = novoValor;
    delete[] valores;
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

    double novoValor = 0.0;
    cout << "Digite o novo valor para inserir ao final: ";
    cin >> novoValor;

    valores = inserirAoFinal(valores, quantidade, novoValor);
    ++quantidade;

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