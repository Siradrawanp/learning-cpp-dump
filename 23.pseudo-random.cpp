#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int num = rand();

    // limit rand number to (0-5) by using modulo
    // example for random 1 dice generator
    int limited = (num % 6) + 1;

    // original random number
    std::cout << num << "\n";

    // random number when limited to 6
    std::cout << limited << "\n";

    return 0;
}
