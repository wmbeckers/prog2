#include <iostream>
#include <iomanip>

int main() {
    double celsius;

    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;

    double fahrenheit = celsius * 1.8 + 32.0;
    double kelvin = celsius + 273.15;
    int fahrenheitInteiro = static_cast<int>(fahrenheit);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit: " << fahrenheit << "\n";
    std::cout << "Kelvin: " << kelvin << "\n";
    std::cout << "Fahrenheit como inteiro: " << fahrenheitInteiro << "\n";

    return 0;
}
