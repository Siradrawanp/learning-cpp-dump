#include <iostream>

// global scope variable
const double SPEEDOFLIGHT = 300000;
void printConstantValue();

int main() {
    // local variable
    double carSpeed = 100;

    // case if local and global variable has the same name
    // it will prioritize the local variable
    // unless it use scope resolution operator (::)
    // example
    const double SPEEDOFLIGHT = 5;

    std::cout << SPEEDOFLIGHT << " from local variable" << "\n";
    std::cout << ::SPEEDOFLIGHT << " from global variable" << "\n";

    printConstantValue();
    return 0;
}

void printConstantValue() {
    std::cout << SPEEDOFLIGHT << " from separate function" << "\n";
}
