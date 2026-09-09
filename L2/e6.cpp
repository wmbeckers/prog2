#include <iostream>

namespace Geometria {
namespace Retangulo {
    double calcularArea(double b, double h) {
        return b * h;
    }
}

namespace Circulo {
    double calcularArea(double r) {
        const double PI = 3.14159;
        return PI * r * r;
    }
}
}

int main() {
    double areaRetanguloQualificado =
        Geometria::Retangulo::calcularArea(5.0, 3.0);

    double areaCirculoUsing;
    {
        using Geometria::Circulo::calcularArea;
        areaCirculoUsing = calcularArea(2.0);
    }

    double areaRetanguloDiretiva;
    {
        using namespace Geometria::Retangulo;
        areaRetanguloDiretiva = calcularArea(4.0, 2.0);
    }

    std::cout << "Retangulo (nome qualificado): "
              << areaRetanguloQualificado << "\n";
    std::cout << "Circulo (declaracao using): "
              << areaCirculoUsing << "\n";
    std::cout << "Retangulo (diretiva using namespace): "
              << areaRetanguloDiretiva << "\n";

    return 0;
}
