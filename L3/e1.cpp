#include <iostream>

int main() {
	int ano;

	std::cout << "Digite um ano: ";
	std::cin >> ano;

	if (ano >= 1930 && (ano - 1930) % 4 == 0 && ano != 1942 && ano != 1946) {
		std::cout << "Havera Copa do Mundo em " << ano << ".\n";
	} else {
		std::cout << "Nao havera Copa do Mundo em " << ano << ".\n";
	}

	return 0;
}
