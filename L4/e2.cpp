#include <iostream>

using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int a = 0;
    int b = 0;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> a;
    cout << "Digite o segundo valor inteiro: ";
    cin >> b;

    cout << "Soma: " << soma(a, b) << '\n';
    return 0;
}