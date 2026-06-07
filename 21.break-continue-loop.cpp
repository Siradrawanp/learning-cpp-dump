#include <iostream>

int main() {

    for (int i = 0; i <= 20; i++) {
        if (i == 7) {
            continue; // skip the index loop if executed
        }

        if (i == 13) {
            break; // stop the loop if executed
        }
        std::cout << "seq " << i << "\n";
    }

    return 0;
}
