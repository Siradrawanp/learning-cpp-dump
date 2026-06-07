#include <iostream>
#include <ctime>

int main() {
    int answer;
    int guess;
    int tries = 0;

    srand(time(0));
    answer = (rand() % 25) + 1;

    do {
        std::cout << "Input your guess number (1 - 25): ";
        std::cin >> guess;
        tries++;

        if (guess < answer) {
            std::cout << "too low" << "\n";
        } else if (guess > answer) {
            std::cout << "to high" << "\n";
        } else {
            std::cout << "Correct, the number is " << guess << "\n";
            std::cout << "you did it in " << tries << " tries" << "\n";
        }
    }while (answer != guess);

    return 0;
}
