#include <cstddef>
#include <iostream>

int main() {
    // dynamic memory
    // memory that is allocated after the program already compiled & running;
    // basically memory that is reserved / placeholder to use later;
    // the memory is stored in heap rather than in stack;
    //
    // use "new" operator to allocate or to declare a dynamic memory
    //
    // usefull to use when we do not know how much memory we wil need;

    // example #1
    int *pNum = NULL; // <- declare an empty / null pointer
    pNum = new int; // <- init an dynamic memory for type integer

    *pNum = 21; // <- now you can assign an value
    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    delete pNum; // <- delete the memory allocation if it isnt needed anymore to prevent memory leaks

    // example #2
    char *pGrades = NULL;
    int size;

    std::cout << "Enter how many grades needed? \n";
    std::cin >> size;

    // dynamicly allocate memory from user input
    pGrades = new char[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter the grades #" << i + 1 << "\n";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    std::cout << "\n";
    // delete the unused memory for an array types
    delete[] pGrades;

    return 0;
}
