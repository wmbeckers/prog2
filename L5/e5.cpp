#include <iostream>

using namespace std;

int main() {
    float* valor = new float;

    cout << "Digite um valor: ";
    cin >> *valor;
    cout << "Quadrado = " << (*valor) * (*valor) << endl;

    delete valor;

    return 0;
}