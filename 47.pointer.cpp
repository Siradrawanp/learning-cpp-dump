#include <iostream>
#include <string>

int main() {
    // pointer is a variable that store memory address of another variable
    // & address of operator
    // * de-reference operator

    std::string name = "andrew";
    int age = 21;

    // make a pointer
    std::string *pName = &name;
    int *pAge = &age;

    // check the value
    std::cout << "Will return the memory address: " << pName << "\n";
    std::cout << "Will return the value: " << *pName << "\n";

    std::cout << "Will return the memory address: " << pAge << "\n";
    std::cout << "Will return the value: " << *pAge << "\n";

    // case of pointer to an array
    std::string array1[3] = {"car", "bus", "train"};

    // making pointer to an array
    // do not need the & address operator
    std::string *pArray1 = array1;

    std::cout << "array pointer will return the memory address: " << pArray1 << "\n";
    std::cout << "array pointer with dereference will return first value of an array: " << *pArray1 << "\n";

    return 0;
}
