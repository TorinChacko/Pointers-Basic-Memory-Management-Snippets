#include <array>
#include <iostream>
#include <memory>
#include <random>
#include <string>


int main() {

    //Print pointer address
    std::cout << "x: " << x << '\n';
    //

    //Print pointed value if any
    if (x) {
        std::cout << "*x: " << *x << '\n';
    } else {
        std::cout << "*x: empty" << '\n';
    }
    //

    // Delete value pointed
    // - Use smart pointers to delete the data automatically
    delete x;
    x = nullptr;
    //

    //print_first Points to the first number in the sequence
    std::cout << "*x2: " << *x2 << '\n';
    std::cout << "x2[3]: " << x2[3] << '\n';
    std::cout << "*(x2+3): " << *(x2 + 3) << '\n';
    //
  
    //Raw dynamic array
    int *x2 = new int[10];
    for (int i2 = 0; i2 < 10; ++i2) {
        x2[i2] = 10 + i2 * 10;
    }
    //

    // Print addresses
    std::cout << "x2: " << x2 << '\n';
    std::cout << "&x2[0]: " << &x2[0] << '\n';
    std::cout << "x2[0]: " << x2[0] << '\n';
    //

    

    return 0;
}
