#include <iostream>

// create a template for parameter data types T with return data types T
// which mean the parameter and return value has the same data types when used
template <typename T>
T max(T x, T y) {
    return (x > y) ? x : y;
}

// you can also mix the datatype for the parameter
// use 'auto' to make the return data types automatically select the suitable return types
template<typename V, typename W>
auto min(V x, W y) {
    return ( x > y ) ? y : x;
}

int main() {
    // used to make a function that can be used for many data types
    // basically you do not need to make a many function overload if the different
    // are just the functio or parameter data types

    std::cout << "used with int data types max(2, 4): " << max(2, 4) << "\n";
    std::cout << "used with double data types max(5.1, 3.2): " << max(5.1, 3.2) << "\n";
    std::cout << "used with char data types max('1','2'): " << max('1', '2') << "\n";

    std::cout << "used with mix parameter data types int,double min(2,2.1): " << min(2, 2.1) << "\n";

    return 0;
}
