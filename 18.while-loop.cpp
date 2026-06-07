#include <iostream>
#include <string>

int main() {
    std::string inp_text;

    while (inp_text.empty()) {
        std::cout << "input some text" << "\n";
        std::getline(std::cin, inp_text);
    }

    std::cout << "Inputed text: " << inp_text << "\n";
    return 0;
}
