#include <iostream>
#include <string>

int main() {
    std::string inp_text;

    std::cout << "input string" << "\n";
    std::getline(std::cin, inp_text);

    // some string methods

    // get the lenght of string
    int len_text = inp_text.length();

    // chekc is string is empty
    if (inp_text.empty()) {
        std::cout << "text is empty" << "\n";
    }

    // clear the string
    inp_text.clear();

    // append a string
    inp_text.append("@appended-string");

    // get char by index from a string
    std::cout << inp_text.at(2);

    // insert an char or string at index of string
    inp_text.insert(0, "add-prefix");

    // find position of first index/occurence of char
    std::cout << inp_text.find(" "); // find first occurence of whitespace

    // erase some character by index position
    std::cout << inp_text.erase(0, 1); // erase the first 3 character

    return 0;
}
