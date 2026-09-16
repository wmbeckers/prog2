#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quantidade = 0;
    double somaValores = 0.0;

    cout << "Digite a quantidade de elementos: ";
    cin >> quantidade;

    if (quantidade <= 0) {
        cout << "Quantidade invalida.\n";
        return 0;
    }

    double* valores = new double[quantidade];

    for (int i = 0; i < quantidade; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> valores[i];
        somaValores += valores[i];
    }

    cout << fixed << setprecision(2);
    cout << "Media: " << (somaValores / quantidade) << '\n';

    delete[] valores;
    return 0;
}