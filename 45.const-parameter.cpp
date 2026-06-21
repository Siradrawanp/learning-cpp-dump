#include <iostream>
#include <string>

void printProfile(const std::string name, const int age);

int main() {
    // const parameter basically is used to make a function a read-only
    // (the value of parameter can`t changed inisde the function)

    std::string name = "andrew";
    int age = 10;
    printProfile(name, age);

    return 0;
}

void printProfile(const std::string name, const int age) {

    // can be changed into anoter value
    // std::string name = "haha";
    // int age = 12;

    std::cout << name << "\n";
    std::cout << age << "\n";
}
