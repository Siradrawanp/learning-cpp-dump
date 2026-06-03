#include <iostream>

int main() {
    double age;

    std::cout << "Enter your age? " << "\n";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "above or equal 18" << std::endl;
    } else if (age < 1) {
        std::cout << "not valid age number" << '\n';
    } else {
        std::cout << "below 18" << "\n";
    }

    return 0;
}
