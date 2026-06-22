#include <iostream>

int main() {
    // null value = a value that means there is no value;
    // nullptr = keyword to declare if the pointer is pointing to null value / null memory address
    // it can be used to check if a memory address is successfully assigned to a pointer

    // declaring pointer with nullptr (no/empty memory address)
    int *pNumber = nullptr;
    int number = 125;

    // assign the memory address to a null pointer
    pNumber = &number;

    // check if pointer is nullptr
    if (pNumber == nullptr) {
        std::cout << "pointer is null" << "\n";
        std::cout << "will cause seg fault if try to dereference the pointer" << "\n";
        // std::cout << *pNumber << "\n";
    } else {
        std::cout << "pointer isnt null, can dereference the pointer" << "\n";
        std::cout << *pNumber << "\n";
    }

    return 0;
}
