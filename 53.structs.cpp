#include <iostream>
#include <string>

// example of struct
struct student{
    std::string name;
    int year;
    double gpa;
};

int main() {
    // a struct is a groub of variables under one name
    // each variable can have different data types
    // basically like an object in JavaScript

    // how to use structs
    student students1;
    students1.name = "ankara";
    students1.year = 2018;
    students1.gpa = 3.5;

    std::cout << students1.name << "\n";
    std::cout << students1.year << "\n";
    std::cout << students1.gpa << "\n";

    return 0;
}
