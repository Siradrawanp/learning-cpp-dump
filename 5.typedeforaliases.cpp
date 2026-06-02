#include <iostream>
#include <string>
#include <vector>

// example with typedef
// typedef std::pmr::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
// exampel with using

using text_t = std::string;
using number_t = int;
using pairlist_t = std::vector<std::pair<std::string, int>>;

int main() {
    // typedef is a way to create another name / simplify the name for existing data types
    // it placed outside the main function
    // syntax: typedef <data types> <new / alias name + "_t">; usually it has suffix "_t"
    //
    // currently its more popular to use "using" instead of "typedef"
    // syntax: using < name/aliases > = < data types >

    // the usage
    text_t name = "haha";
    number_t age = 20;

    std::cout << name << " " << age << "\n";
    return 0;
}
