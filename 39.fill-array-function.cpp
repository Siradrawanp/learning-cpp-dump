#include <algorithm>
#include <iostream>
#include <string>

int main() {
    const int SIZE = 20;
    std::string array[SIZE];

    // example to fill all element of array;
    fill(array, array + SIZE, "filled");
    for (std::string element : array) {
        std::cout << element << "\n";
    }

    std::cout << "\n";

    // it can be used to fill the portion of the array
    std::string array2[SIZE];
    std::fill(array2, array2 + (SIZE/4), "first quarter");
    std::fill(array2 + (SIZE/4), array2 + (SIZE/4)*2,"second quarter");
    std::fill(array2 + (SIZE/4)*2, array2 + (SIZE/4)*3, "third quarter");
    std::fill(array2 + (SIZE/4)*3, array2 + (SIZE/4)*4, "last quarter");
    for (std::string element : array2) {
        std::cout << element << "\n";
    }

    return 0;
}
