#include "Compare.h"

int compare_two_values() {
    Compare c;
    int a = 5;
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';
    int arrayInt[5] = {65,43,2,898,678};
    float arrayInF[4] = {4.5,4.9,4.3,6.5};
    char arrayInC[6] = {'w','z','t','h','e','c'};

    std::cout << c.findSmaller(a, b) << " is the smaller of " << a << " and " << b << "\n";
    std::cout << c.findSmaller(f1, f2) << " is the smaller of " << f1 << " and " << f2 << "\n";
    std::cout << c.findSmaller(c1, c2) << " is the smaller of " << c1 << " and " << c2 << "\n";

    std::cout<<c.findSmaller(arrayInt, 5)<<" is the smallest of the input array\n";
    std::cout<<c.findSmaller(arrayInF, 4)<<" is the smallest of the input array\n";
    std::cout<<c.findSmaller(arrayInC, 6)<<" is the smallest of the input array\n";

    return 0;
}