#include <iostream>
#include <string>

int main() {
    // an example of how to insert value int a static array
    const int SIZE = 5;
    std::string array[SIZE];

    for (int i = 0; i < SIZE; i++) {
        std::string temp;
        std::cout << "Insert your coffee or 'q' to quit #" << i + 1 << " : ";
        std::getline(std::cin, temp);

        if (temp == "q") {
            break;
        }
        array[i] = temp;
    }

    std::cout << "Your Options are " << "\n";
    // print the non empty array
    // combine it with less than SIZE to prevent SEGFAULT
    // beciase i will count pass the size of the array if not checked
    for (int i = 0; !array[i].empty() && i < SIZE; i++) {
        std::cout << array[i] << "\n";
    }

    return 0;
}
