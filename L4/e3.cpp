#include <iostream>
#include <iomanip>

using namespace std;

inline double converteDolarParaReal(double dolares, double cotacao) {
    return dolares * cotacao;
}

int main() {
    double dolares = 0.0;
    double cotacao = 0.0;

    cout << "Digite a quantia em dolares: ";
    cin >> dolares;
    cout << "Digite a cotacao do dolar em reais: ";
    cin >> cotacao;

    cout << fixed << setprecision(2);
    cout << "Valor em reais: R$ " << converteDolarParaReal(dolares, cotacao) << '\n';
    return 0;
}