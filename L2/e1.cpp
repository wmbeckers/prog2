#include <iostream>

int main() {
	char caractere = 'A';
	int inteiro = 42;
	float decimal = 3.14f;
	double precisao = 3.1415926535;
	bool ativo = true;
	short pequeno = 120;
	long grande = 1000000L;
	unsigned int positivo = 300u;

	std::cout << "Tipo: char, valor: " << caractere
			  << ", tamanho: " << sizeof(caractere) << " bytes\n";
	std::cout << "Tipo: int, valor: " << inteiro
			  << ", tamanho: " << sizeof(inteiro) << " bytes\n";
	std::cout << "Tipo: float, valor: " << decimal
			  << ", tamanho: " << sizeof(decimal) << " bytes\n";
	std::cout << "Tipo: double, valor: " << precisao
			  << ", tamanho: " << sizeof(precisao) << " bytes\n";
	std::cout << "Tipo: bool, valor: " << std::boolalpha << ativo
			  << ", tamanho: " << sizeof(ativo) << " bytes\n";
	std::cout << "Tipo: short, valor: " << pequeno
			  << ", tamanho: " << sizeof(pequeno) << " bytes\n";
	std::cout << "Tipo: long, valor: " << grande
			  << ", tamanho: " << sizeof(grande) << " bytes\n";
	std::cout << "Tipo: unsigned int, valor: " << positivo
			  << ", tamanho: " << sizeof(positivo) << " bytes\n";

	return 0;
}
