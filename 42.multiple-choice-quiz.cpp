#include <iostream>
#include <string>

int main() {

    std::string questions[] = {
        "1. What is the international standard of temperature? ",
        "2. What is the year world war 2 ended? ",
        "3. Where is the location of Mount Fuji? ",
        "4. Which one of this animals do not have 4 legs? "
    };
    std::string options[][4] = {
        {"A. Fahrenheit", "B. Reamur", "C. Celcius", "D. Kelvin"},
        {"A. 1944", "B. 1945", "C. 1946", "D. 1947"},
        {"A. North Korea", "B. Japan", "C. South Korea", "D. China"},
        {"A. Cat", "B. Dog", "C. Cow", "D. Chicken"}
    };

    char answer[] = {'D', 'B', 'B', 'D'};

    // size of question
    int size = sizeof(questions) / sizeof(questions[0]);

    // size of options
    int rows = sizeof(options) / sizeof(options[0]);
    int cols = sizeof(options[0]) / sizeof(options[0][0]);

    int num_correct = 0;
    char input;
    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << "\n";
        for (int j = 0; j < cols; j++) {
            std::cout << options[i][j] << " ";

        }
        std::cout << "\n" << "Your answer (type the alphabet): ";
        std::cin >> input;
        input = toupper(input);

        if (input == answer[i]) {
            num_correct++;
            std::cout << "Correct Answer!" << "\n";
        } else {
            std::cout << "Wrong Answer!" << "\n";
        }

        std::cout << "\n";
    }

    double score = ((double)num_correct / size) * 100;
    std::cout << "your score is : " << score << "%\n";
  return 0;
}
