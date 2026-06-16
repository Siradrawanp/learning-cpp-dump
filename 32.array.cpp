#include <iostream>

int main() {

    std::string array[] = {"el1", "el2", "el3"};

    std::cout << array[0] << "\n";
    std::cout << array[1] << "\n";

    array[0] = "ele1.1";
    std::cout << array[0] << "\n";

    // other way to declare an array
    char array2[2];
    array2[0] = 'b';
    array2[1] = 'r';

    std::cout << array2[1] << "\n";

    return 0;
}
