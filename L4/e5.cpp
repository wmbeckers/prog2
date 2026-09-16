#include <iostream>
#include <iomanip>

using namespace std;

int calculaQuadrado(int valor) {
    return valor * valor;
}

double calculaQuadrado(double valor) {
    return valor * valor;
}

int main() {
    int valorInteiro = 0;
    double valorReal = 0.0;

    cout << "Digite um valor inteiro: ";
    cin >> valorInteiro;
    cout << "Digite um valor real: ";
    cin >> valorReal;

    cout << "Quadrado inteiro: " << calculaQuadrado(valorInteiro) << '\n';
    cout << fixed << setprecision(2);
    cout << "Quadrado real: " << calculaQuadrado(valorReal) << '\n';
    return 0;
}