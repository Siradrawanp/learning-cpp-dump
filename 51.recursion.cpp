#include <iostream>

void countdownIterative(int starting);
void countdownRecursive(int starting);
int factorialValue(int number);

int main() {
    // countdownIterative(20);
    // std::cout << "now the recursive one: \n";
    // countdownRecursive(20);

    int value = factorialValue(5);
    std::cout << value << "\n";
    return 0;
}

void countdownIterative(int starting) {
    for (int i = starting; i > 0; i--) {
        std::cout << i << "\n";
    }
}

void countdownRecursive(int starting) {
    if (starting > 0) {
        std::cout << starting << "\n";
        countdownRecursive(starting-1);
    }
}

int factorialValue(int number) {
    if (number > 1) {
        return number * factorialValue(number - 1);
    }
    return 1;
}
