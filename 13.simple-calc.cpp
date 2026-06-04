#include <iostream>

int main() {
    char operand;
    double num1;
    double num2;
    double result;

    std::cout << "enter the operand ( + , - , / , * ) ?" << "\n";
    std::cin >> operand;

    std::cout << "enter first number" << "\n";
    std::cin >> num1;
    std::cout << "enter second number" << "\n";
    std::cin >> num2;

    switch (operand) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << "\n";
            break;
        default:
            std::cout << "operand not found" << "\n";
            break;
    }

    return 0;
}
