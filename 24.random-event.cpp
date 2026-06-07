#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch (randNum) {
        case 1:
            std::cout << "win a cup" << "\n";
            break;
        case 2:
            std::cout << "win a spoon & fork" << "\n";
            break;
        case 3:
            std::cout << "win a knife" << "\n";
            break;
        case 4:
            std::cout << "win a plate" << "\n";
            break;
        case 5:
            std::cout << "win a t-shirt" << "\n";
            break;
    }

    return 0;
}
