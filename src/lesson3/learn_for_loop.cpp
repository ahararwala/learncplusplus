#include "header_lesson3.h"

/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
int sum_and_average() {
    float input;
    float sum = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "What is the next number?\n";
        std::cin >> input;
        sum = sum + input;
    }

    std::cout << "Sum = " << sum << "\n";
    std::cout << "Average = " << sum / 5 << "\n";
    return 0;
}