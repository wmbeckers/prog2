#include <iostream>

using namespace std;

int multiplicar(int a, int b) {
    return a * b;
}

int somar(int a, int b) {
    return a + b;
}

int main() {
    int (*operacao)(int, int);
    int a = 6;
    int b = 4;

    operacao = somar;
    cout << "Soma = " << operacao(a, b) << endl;

    operacao = multiplicar;
    cout << "Multiplicacao = " << operacao(a, b) << endl;

    return 0;
}