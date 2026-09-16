#include <iostream>

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data data{};

    cout << "Digite o dia: ";
    cin >> data.dia;
    cout << "Digite o mes: ";
    cin >> data.mes;
    cout << "Digite o ano: ";
    cin >> data.ano;

    cout << "Data armazenada: " << data.dia << '/' << data.mes << '/' << data.ano << '\n';
    return 0;
}