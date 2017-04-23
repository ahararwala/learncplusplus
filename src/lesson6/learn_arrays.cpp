#include "header_lesson6.h"

/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

int calculate_average() {
    int userInput[NUM_OF_INPUT];
    for (int i = 0; i < NUM_OF_INPUT; i++) {
        std::cout << "Enter a number: ";
        std::cin >> userInput[i];
    }
    for (int i = 0; i < NUM_OF_INPUT; i++) {
        std::cout << userInput[i] << " ";
    }
    std::cout << "\n";
    for (int i = NUM_OF_INPUT-1; i >= 0; i--) {
        std::cout << userInput[i] << " ";
    }
    return 0;
}