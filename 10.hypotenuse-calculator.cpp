#include <cmath>
#include <iostream>

int main() {
    double a;
    double b;
    double c;

    std::cout << "Input value of a" << "\n";
    std::cin >> a;

    std::cout << "Input value of b" << "\n";
    std::cin >> b;

    c = std::sqrt((pow(a, 2) + pow(b, 2)));
    std::cout << "The Hypotenuse is : " << c << "\n";

    return 0;
}
