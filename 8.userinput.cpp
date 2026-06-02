#include <iostream>
#include <istream>
#include <string>

int main() {
    std::string name;
    int age;


    std::cout << "Input your name ? " << "\n";
    // this only work if name is one word without space or whitespace or a string
    // std::cin >> name;

    // for getting the full string use
    // std::getline(std::cin, name);

    // the above method will extract a whitespace or newline char
    // if there is an input before that because the input buffer
    // examplee
    // std::cin >> age;
    // std::getline(std::cin, name); -> name will extract the newline charater after the "std::cin" for "age";

    // for getting the fullstring if there is another
    // input before this ot avoid the input buffer
    std::getline(std::cin >> std::ws, name);


    std::cout << "Input your age? " << "\n";
    std::cin >> age;

    std::cout << name << "\n";
    std::cout << age << "\n";

    return 0;
}
