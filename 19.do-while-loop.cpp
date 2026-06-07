#include <iostream>

int main() {

    int number;

    do {
        std::cout << "input some positive number: ";
        std::cin >> number;
    }while (number < 0);

    std::cout << "your number: " << number << "\n";

    return 0;
}
