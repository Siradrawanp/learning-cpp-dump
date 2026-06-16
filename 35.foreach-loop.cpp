#include <iostream>
#include <string>

int main() {
    std::string array1[] = {"reden", "raman", "make", "routa"};

    for (std::string elem : array1) {
        std::cout << "element: " << elem << "\n";
    }

    double array2[] = {3.2, 12.5, 22.2, 145.1, 22.00};
    for (double num : array2) {
        std::cout << "double element: " << num << "\n";
    }

    return 0;
}
