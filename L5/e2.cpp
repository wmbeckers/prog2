#include <iostream>

using namespace std;

int main() {
    double a[100];
    double soma = 0.0;
    int quantidade;

    cout << "Quantidade de valores (1 a 100): ";
    cin >> quantidade;

    if (quantidade < 1 || quantidade > 100) {
        cout << "Quantidade invalida." << endl;
        return 1;
    }

    for (int j = 0; j < quantidade; ++j) {
        cout << "Valor " << j + 1 << ": ";
        cin >> *(a + j);
    }

    double* aPtr = a;
    for (int j = 0; j < quantidade; ++j) {
        soma += *(aPtr + j);
    }

    cout << "Soma = " << soma << endl;
    cout << "Media = " << soma / quantidade << endl;

    return 0;
}