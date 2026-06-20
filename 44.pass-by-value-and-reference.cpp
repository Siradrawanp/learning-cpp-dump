#include <iostream>
#include <string>

void passByValueSwitch(std::string word1, std::string word2);
void passByReferenceSwitch(std::string &word1, std::string &word2);

int main() {

    std::string word1 = "testing";
    std::string word2 = "validating";

    // example of passing by value
    std::cout << "initial word" << "\n";
    std::cout << "first word: " << word1 << "\n";
    std::cout << "second word: " << word2 << "\n\n";
    passByValueSwitch(word1, word2);

    std::cout << "after swap by value" << "\n";
    std::cout << "first word: " << word1 << "\n";
    std::cout << "second word: " << word2 << "\n\n";

    passByReferenceSwitch(word1,word2);
    std::cout << "after swap by reference" << "\n";
    std::cout << "first word: " << word1 << "\n";
    std::cout << "second word: " << word2 << "\n";

    return 0;
}

// pass by value make the copy of the parameter
// because of that the word arent swapped
// since the memory address of the copied value are different from the original value
void passByValueSwitch(std::string word1, std::string word2) {
    std::string temp;
    temp = word1;
    word1 = word2;
    word2 = temp;
}

// pass by reference use the memory address of the value passed
// because of that when the value is used it also affect the original value
void passByReferenceSwitch(std::string &word1, std::string &word2) {
    std::string temp;
    temp = word1;
    word1 = word2;
    word2 = temp;
}
