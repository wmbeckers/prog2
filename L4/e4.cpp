#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int matricula;
    double notas[3];
};

double mediaAluno(const Aluno& aluno) {
    return (aluno.notas[0] + aluno.notas[1] + aluno.notas[2]) / 3.0;
}

int main() {
    Aluno aluno{};

    cout << "Digite o nome do aluno: ";
    getline(cin >> ws, aluno.nome);
    cout << "Digite a matricula: ";
    cin >> aluno.matricula;
    cout << "Digite as tres notas:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Nota " << (i + 1) << ": ";
        cin >> aluno.notas[i];
    }

    cout << fixed << setprecision(2);
    cout << "Nome: " << aluno.nome << '\n';
    cout << "Matricula: " << aluno.matricula << '\n';
    cout << "Notas: " << aluno.notas[0] << ", " << aluno.notas[1] << ", " << aluno.notas[2] << '\n';
    cout << "Media: " << mediaAluno(aluno) << '\n';
    return 0;
}