#include <iostream>
#include <string>

double calcCubeVolume(double a, double b, double c);
std::string concat2String(std::string first, std::string second);

int main() {
    double cubeWidth = 10;

    double area = calcCubeVolume(cubeWidth, cubeWidth, cubeWidth);
    std::cout << "Cube volume " << area << "\n";

    std::string concatted = concat2String("Mr.", "Boggard");
    std::cout << "from " << concatted << "\n";

    return 0;
}

double calcCubeVolume(double a, double b, double c) {
    return a * b * c;
}

std::string concat2String(std::string first, std::string second) {
    return  first + " " + second;
};
