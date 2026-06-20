#include "iostream"
#include <string>

int findTheCoffee(std::string array[], int size, std::string searched);

int main() {
    std::string coffee[] = {"black", "white", "espresso", "latte"};
    int size = sizeof(coffee) / sizeof(coffee[0]);
    int index;
    std::string searched;

    std::cout << "input the name of coffee you want: ";
    std::getline(std::cin, searched);

    index = findTheCoffee(coffee, size, searched);
    if (index > -1) {
        std::cout << "Your coffee is in index: " << index << "\n";
    } else {
        std::cout << "Your coffee isnt in the list" << "\n";
    }

    return 0;
}

int findTheCoffee(std::string array[], int size, std::string searched) {
    // using linear search
    for (int i = 0; i < size; i++) {
        if (array[i] == searched) {
            return i;
        }
    }

    return -1;
}
