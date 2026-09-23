#include <iostream>

using namespace std;

void inverterSinais(int* a, int* b) {
    *a = -*a;
    *b = -*b;
}

int main() {
    int primeiro = 10;
    int segundo = -25;

    cout << "Antes: " << primeiro << " e " << segundo << endl;

    inverterSinais(&primeiro, &segundo);

    cout << "Depois: " << primeiro << " e " << segundo << endl;

    return 0;
}