#include <iostream>

using namespace std;

int main() {
    int valores[5] = {10, 20, 30, 40, 50};
    int* ptr = valores;

    for (int i = 0; i < 5; ++i) {
        cout << "Valor: " << *(ptr + i)
             << ", endereco: " << (ptr + i) << endl;
    }

    return 0;
}