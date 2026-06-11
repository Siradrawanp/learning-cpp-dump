#include <iostream>
#include <ctime>

char generateBotChoice();
void compareChoice(char player, char bot);

int main() {
    char player;
    char bot;

    // user input their choice
    do {
        std::cout << "Select your choice " << "\n";
        std::cout << "'r' for rock" << "\n";
        std::cout << "'p' for paper" << "\n";
        std::cout << "'s' for scissor" << "\n";

        std::cin >> player;
    }while (player != 'r' && player != 'p' && player != 's');

    std::cout << "you picked " << player << "\n";

    // bot choice
    bot = generateBotChoice();
    std::cout << "bot picked " << bot << "\n";

    // check the result
    compareChoice(player, bot);

    return 0;
}

char generateBotChoice() {
    srand(time(0));
    int random = (rand() % 3) + 1;
    char output;

    switch (random) {
        case 1:
            output = 'r';
            break;
        case 3:
            output = 'p';
            break;
        case 2:
            output = 's';
            break;
    }

    return output;
}

void compareChoice(char player, char bot) {
    if (player == bot) {
        std::cout << "Its a tie" << "\n";
    } else {
        switch (player) {
            case 'r':
                if (bot == 'p') {
                    std::cout << "You lose" << "\n";
                } else if (bot == 's') {
                    std::cout << "You win" << "\n";
                }
                break;
            case 'p':
                if (bot == 's') {
                    std::cout << "You lose" << "\n";
                } else if (bot == 'r') {
                    std::cout << "You win" << "\n";
                }
                break;
            case 's':
                if (bot == 'p') {
                    std::cout << "You win" << "\n";
                } else if (bot == 'r') {
                    std::cout << "You lose" << "\n";
                }
                break;
        }
    }
}
