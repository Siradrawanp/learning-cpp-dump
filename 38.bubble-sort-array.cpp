#include <iostream>
int main() {
    int list[] = {5, 1, 3, 0, 9, 2, 4, 6, 8, 7};
    int size = sizeof(list) / sizeof(list[0]);
    int temp;

    for (int ele : list) {
        std::cout << ele << " ";
    }
    std::cout << "\n";

    for (int i=0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ( list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for (int ele : list) {
        std::cout << ele << " ";
    }
    std::cout << "\n";

    return 0;
}
