#include <iostream>

using namespace std;

int main() {
    int quantidade;

    cout << "Quantidade de elementos: ";
    cin >> quantidade;

    if (quantidade <= 0) {
        cout << "Quantidade invalida." << endl;
        return 1;
    }

    int* valores = new int[quantidade];

    for (int i = 0; i < quantidade; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valores[i];
    }

    int maior = valores[0];
    for (int i = 1; i < quantidade; ++i) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    cout << "Maior valor = " << maior << endl;

    delete[] valores;

    return 0;
}