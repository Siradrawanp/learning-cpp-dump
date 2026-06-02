#include <iostream>

int main() {
    // order of operation:
    // parenthesis
    // multiplication & division
    // addition & substraction

    // int people = 20;
    double people = 20;

    // addition
    // people = people + 1;
    // people += 1;
    // people++; // addition by 1

    // subtraction
    // people = people - 1;
    // people -= 1;
    // people--; // subtract by 1

    // multiplication
    // people = people * 2;
    // people *= 2;

    // division\
    // type data int will truncate the decimal, use double to keep the decimal
    double floating = people / 3;
    // people /= 2;

    // modulo
    // int remainder = people % 3;

    std::cout << floating << '\n';

    return 0;
}
