#include <iostream>

namespace first{
    int num = 10;
}

namespace second {
    int num = 20;
}

int main() {
    /* namespaces  = a wrapper or object for an entity that has the same name in project.
     * prevent duplicate name because each entity int a project should have unique name
     */

    // print the value of local num inside the main
    int num = 0;
    std::cout << num << '\n';

    // print the value of num of first namespace instead the local num
    std::cout << first::num << "\n";

    // print the value of num of second namespace instead the local num
    std::cout << second::num << "\n";

    /*
        another way to use namespace is by delcaring it first; example:
        using namespace first;
        std::cout << num << "\n"; num will have a value based on the "first" namespace without the prefix "first"
        std:;cout << second::num << "\n"; still can access num from second namespace but using prefix "second" or name of the namespace
    */

    /*
        it can be used to shorten the standard header package; example:
        using std::cout;
        using std::string;

        now you can just write "cout" and "string" without prefis "std"
        string name = "kanan";
        cout << name << "\n";

        it can also be used like this
        using namespace std;
        NEED TO AVOIDED BECAUSE INSIDE STD THERE IS MANY ENTITY WITH COMMON NAME
        WHICH MAY CREATE A NAME CONFICLT; Example std::data -> data;
    */

    return 0;
}
