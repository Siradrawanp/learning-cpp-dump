#include <iostream>

int main() {
    const double COEF = 32;
    char unit;
    double temp;
    double result;

    std::cout << "Select the original unit of temperature" << "\n";
    std::cout << "Celcius (kode: C)" << "\n";
    std::cout << "Fahrenheit (kode: F)" << "\n";

    std::cin >> unit;

    std::cout << "temperature value" << "\n";
    std::cin >> temp;

    if (unit == 'C' || unit == 'c') {
        result = (temp * 9/5) + COEF;
        std::cout << "The converted temperature is " << result << "F \n";
    } else if (unit == 'F' || unit == 'f') {
        result = (temp - COEF) * 5/9;
        std::cout << "The converted temperature is " << result << "C \n";
    } else {
        std::cout << "unit not found" << "\n";
    }

    return 0;
}
