#include <iostream>

int main() {
    // multi dimension array or matrix
    // how to declare: datatypes <name>[<row>][<column>]
    // row can be empty if the data will be initialized
    // column always need to be set/initialized

    char matrix[][3] = {{'a', 'b', 'c'},
                        {'d', 'e', 'f'},
                        {'g', 'h', 'i'}};


    // how to count the rows and columns
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    std::cout << "Number of rows: " << rows << "\n";
    std::cout << "Number of cols: " << cols << "\n";

    for (int i = 0; i < rows; i++) {
        std::cout << "rows number #" << i << ": ";
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << ", ";
        }
        std::cout <<  "\n";
    }

    std::cout <<  "\n";
    return 0;
}
