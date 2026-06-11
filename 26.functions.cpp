#include <iostream>
#include <string>

// function need to be declared before main
// it can be declared as empty functiom first
// them them real function can be writen below main

void functionSum(int a, int b);
void functionName(std::string name);

int main() {
    functionSum(10, 20);
    functionName("hahal");
    return 0;
}

void functionSum(int a, int b) {
    int result = a + b;
    std::cout << result << "\n";
}

void functionName(std::string name) {
    std::cout << name << "\n";
}
