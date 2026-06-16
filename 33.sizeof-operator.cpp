#include <iostream>
#include <string>

int main() {
    // sizeof()
    // determine the size of variable, class, objects
    // in bytes

    double gpa = 3.4;
    std::string name = "andrew";
    char grades = 'A';
    bool pass = true;

    char arrayof3[] = {'A', 'B', 'C'};

    std::cout << "sizeof double " << sizeof(gpa) << " bytes\n";
    std::cout << "sizeof string " << sizeof(name) << " bytes\n";
    std::cout << "sizeof char " << sizeof(grades) << " bytes\n";
    std::cout << "sizeof boolean " << sizeof(pass) << " bytes\n";

    std::cout << "sizeof char array of 3: " << sizeof(arrayof3) << " bytes\n";
    // you can find the num of element in an array
    // by dividing the size of an array by the size of data types of the element

    std::cout << "num of element: " << sizeof(arrayof3) / sizeof(arrayof3[0]) << " elements\n";

    return 0;
}
