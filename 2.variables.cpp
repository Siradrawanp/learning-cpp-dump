#include <iostream>
#include <string>

int main() {
  // integer
  int age = 12;
  int year = 2026;

  // double
  double price = 10.99;
  double gpa = 3.43;
  double temperature = 26.5;

  // single character
  char grade = 'A';

  // boolean
  bool isOn = true;

  // string
  std::string name = "kanan";
  std::string food  = "fish";

  std::cout << "hello, my name is " << name << "\n";
  std::cout << "my age is " << age << " years old" << "\n";
  std::cout << "I like " << food << " that has a price of $" << price << "\n";
  return 0;
}
