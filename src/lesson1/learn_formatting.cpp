#include "learn_header.h"
#include <iomanip>

int print_formattings() {
    std::cout << "\n\nThe text without any formating\n";
    std::cout << "Ints" << "Floats" << "Doubles" << "\n";

    std::cout << "\nThe text with setw(15)\n";
    std::cout << "Ints" << std::setw(15) << "Floats" << std::setw(15) << "Doubles" << "\n";

    std::cout << "\n\nThe text with tabs\n";
    std::cout << "Ints\t" << "Floats\t" << "Doubles" << "\n";
}

/*Formatting Output
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/
int console_output() {
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    std::cout << "Printing with set with of 15\n";
    std::cout << a << std::setw(15) << aa << std::setw(15) << aaa <<"\n";
    std::cout << b << std::setw(15) << bb << std::setw(15) << bbb <<"\n";
    std::cout << c << std::setw(15) << cc << std::setw(15) << ccc <<"\n";
    std::cout << "\n\n";

    std::cout << "Printing with tabs\n";
    std::cout << a << "\t\t" << aa << "\t\t" << aaa <<"\n";
    std::cout << b << "\t" << bb << "\t" << bbb <<"\n";
    std::cout << c << "\t" << cc << "\t" << ccc <<"\n";
    std::cout << "\n\n";

    return 0;
}