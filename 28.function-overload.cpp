#include <iostream>
#include <string>

// function overload mean you can make multiple functon with the same name
// but it need to have different parameter

void sayHi(std::string name1);
void sayHi(std::string name1, std::string name2);
void sayHi(std::string name1, std::string name2, std::string name3);

int main() {

    // first1
    sayHi("andy");
    // second
    sayHi("andy", "terry");
    // third
    sayHi("andy", "terry", "mai");

    return 0;
}

void sayHi(std::string name1) {
    std::cout << "Hi, " << name1 << "\n";
}

void sayHi(std::string name1, std::string name2) {
    std::cout << "Hi, " << name1 << "\n";
    std::cout << "Hi, " << name2 << "\n";
}

void sayHi(std::string name1, std::string name2, std::string name3) {
    std::cout << "Hi, " << name1 << "\n";
    std::cout << "Hi, " << name2 << "\n";
    std::cout << "Hi, " << name3 << "\n";
}
