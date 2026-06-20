#include <iostream>

double getTotal(double prices[], int length);

int main() {
    double prices[] = {30.2, 11.5, 25.5, 32.1};
    int length = sizeof(prices) / sizeof(prices[0]);
    std::cout << getTotal(prices, length) << "\n";
    return 0;
}

// the array passed become a pointer
// so it cant know the size of the array
double getTotal(double prices[], int length) {
    double result = 0;
    for (int i = 0; i < length; i++) {
        result += prices[i];
    }
    return result;
};
