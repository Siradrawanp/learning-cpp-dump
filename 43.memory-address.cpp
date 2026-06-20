#include <iostream>
#include <string>

int main() {
    // memory address is the location in computer where the data is stored

    std::string name = "andrew";
    int age = 23;
    bool jobless = false;

    // you can see the memory address using & operator
    std::cout << "memory address of var string name are in: " << &name << "\n";
    std::cout << "memory address of var int age are in: " << &age << "\n";
    std::cout << "memory address of var bool jobless are in: " << &jobless << "\n";

    return 0;
}
