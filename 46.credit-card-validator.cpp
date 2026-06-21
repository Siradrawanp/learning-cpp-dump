#include <iostream>
#include <string>

int sumOfEvenDigit(const std::string cardNumber);
int sumOfOddDigit(const std::string cardNumber);

int main() {
    // basically implementing Luhn Algorithm
    // 1. Double every second (even) digit from right to left
    //    if the doubled digit become 2 digits, split them into 2 separate single digit
    // 2. Add all single digit from step 1
    // 3. Add all odd digit from right to left (the one not used in step 1)
    // 4. Sum results from step 2 & 3
    // 5. if the result from step 4 is divisible by 10, its valid

    // example
    // the number : 6011 0009 9013 9424
    // step 1 (even positioned digit from right to left):
    // - 6 1 0 0 9 1 9 2 -> double it -> 1 2 2 0 0 1 8 2 1 8 4
    // step 2 (sum of step 1) = 29
    // step 3 (sum of odd positioned digit):
    // - 0 + 1 + 0 + 9 + 0 + 3 + 4 + 4 = 21
    // step 4 (sum step 3 + 2) = 29 + 21 = 50
    // step 5: 50 % 10 = 0 -> the card number is valid

    std::string cardNumber;
    int result;

    std::cout << "insert your credit card number: " << "\n";
    std::getline(std::cin, cardNumber);

    result = sumOfEvenDigit(cardNumber) + sumOfOddDigit(cardNumber);
    if (result % 10 == 0) {
        std::cout << "credit card is valid" << "\n";
    } else  {
        std::cout << "credit card is not valid" << "\n";
    }

    return 0;
}

int sumOfEvenDigit(const std::string cardNumber) {
    int digit;
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            // get the digit number and convert it from char into int
            // *check the ASCII number conversion
            digit = (cardNumber[i] - '0') * 2;

            // in case if the doubled digit become double digit number,
            // sum of the those 2 digit
            sum += digit % 10 + (digit / 10 % 10);
        }
    }

    return sum;
}

int sumOfOddDigit(const std::string cardNumber) {
    int digit;
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        if (i % 2 != 0) {
            // get the digit number and convert it from char into int
            // *check the ASCII number conversion
            digit = (cardNumber[i] - '0');
            sum += digit;
        }
    }

    return sum;
}
