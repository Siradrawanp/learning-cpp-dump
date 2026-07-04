#include <algorithm>
#include <ctime>
#include <iostream>

void drawBoard(char *spaces);
void putPlayer(char *spaces, char player);
void putBot(char *spaces, char bot);
bool checkWinner(char *spaces, char player, char bot);
bool checkTie(char *spaces);

int main() {
    char spaces[9];
    char player = 'X';
    char bot = 'O';
    bool running = true;

    std::fill(spaces, spaces + 9, ' ');
    drawBoard(spaces);
    while (running) {
        putPlayer(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, bot)) {
            running = false;
            break;
        }

        std::cout << "\n";
        putBot(spaces, bot);
        drawBoard(spaces);
        if (checkWinner(spaces, player, bot)) {
            running = false;
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << "   |   |   " << "\n";
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " \n";
    std::cout << "___|___|___" << "\n";
    std::cout << "   |   |   " << "\n";
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " \n";
    std::cout << "___|___|___" << "\n";
    std::cout << "   |   |   " << "\n";
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " \n";
    std::cout << "   |   |   " << "\n";
}

void putPlayer(char *spaces, char player) {
    int number;
    bool run = true;

    do {
        std::cout << "Insert your spot number of choice (1-9): ";
        std::cin >> number;
        number -= 1;

        if (number < 0 || number > 8) {
            run = true;
        } else if (spaces[number] == ' ') {
            spaces[number] = player;
            run = false;
            break;
        }
    }while (run);
}

void putBot(char *spaces, char bot) {
    int number;
    srand(time(0));

    std::cout << "Computer turn: \n";
    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = bot;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char bot) {
    int check[][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    int rows = sizeof(check) / sizeof(check[0]);
    for (int i = 0; i < rows; i++) {
        int a = check[i][0];
        int b = check[i][1];
        int c = check[i][2];

        if ((spaces[a] == spaces[b]) && (spaces[a] == spaces[c]) && spaces[a] != ' ') {
            if (spaces[a] == player) {
                std::cout << "YOU WON \n";
                return true;
            }
            if (spaces[a] == bot) {
                std::cout << "YOU LOSE \n";
                return true;
            }
        }
    }

    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "IT`S A TIE \n";

    return true;
}
