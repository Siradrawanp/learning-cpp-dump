#include <iostream>
#include <string>

int main() {
    std::string array1[] = {"reden", "raman", "make", "routa"};

    int length = sizeof(array1) / sizeof(std::string);
    for (int i = 0; i < length ; i++) {
        std::cout << "first element: " << array1[i] << "\n";
    }

    return 0;
}
