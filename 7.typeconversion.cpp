#include <iostream>
int main() {
    // implicit conversion
    int stock = 10;
    int sisa = 5;

    // explicit conversion for variable sisa, so it can store a decimal value
    double percent = (double) sisa / stock * 100;

    // implicit conversion
    // char x = 100;
    // std::cout << x; will output the decimal 100 on ascii table
    //
    // explicit conversion
    // std::cout << (char) 100;


    std::cout << percent << "%" << "\n";
    return 0;
}
