#include <iostream>

int main() {
    int value = 1;
    value >= 10 ? std::cout << "more than 10" << "\n" : std::cout << "less than 10" << "\n";

    bool isOpen = true;
    isOpen ? std::cout << "open" << "\n" : std::cout << "closed" << "\n";

    return 0;
}
