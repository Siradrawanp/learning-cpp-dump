#include <iostream>
#include <string>

int main() {

    int time = 8;
    std::string day = "tuesday";

    if (day == "tuesday" && time >= 9) {
        std::cout << "store a is open" << "\n";
    }

    if (day == "tuesday" || time >= 8) {
        std::cout << "store b is open" << "\n";
    }

    return 0;
}
