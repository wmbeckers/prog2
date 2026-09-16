#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

constexpr int ANO = 2;
constexpr int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE]{};
    double totalGeral = 0.0;

    for (int ano = 0; ano < ANO; ++ano) {
        for (int trimestre = 0; trimestre < TRIMESTRE; ++trimestre) {
            cout << "Digite a despesa do ano " << (ano + 1) << ", trimestre " << (trimestre + 1) << ": ";
            cin >> despesas[ano][trimestre];
            totalGeral += despesas[ano][trimestre];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nTabela de despesas\n";
    cout << setw(10) << "Ano/Trim";
    for (int trimestre = 0; trimestre < TRIMESTRE; ++trimestre) {
        cout << setw(14) << ("T" + to_string(trimestre + 1));
    }
    cout << '\n';

    for (int ano = 0; ano < ANO; ++ano) {
        cout << setw(10) << ("Ano " + to_string(ano + 1));
        for (int trimestre = 0; trimestre < TRIMESTRE; ++trimestre) {
            cout << setw(14) << despesas[ano][trimestre];
        }
        cout << '\n';
    }

    cout << "Total geral das despesas: R$ " << totalGeral << '\n';
    return 0;
}