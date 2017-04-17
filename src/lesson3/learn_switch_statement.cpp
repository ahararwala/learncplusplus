#include "header_lesson3.h"

int switch_statement() {
    int menuItem = 1;

    std::cout << "What is your favorite winter sport?: \n";
    std::cout << "1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout << "\n4.Drinking hot chocolate\n";
    std::cout << "\n\n";

    switch (menuItem) {
        case (1):
            std::cout << "Skiing?! Sounds dangerous!\n";
            break;
        case (2):
            std::cout << "Sledding?! Sounds like work!\n";
            break;
        case (3):
            std::cout << "Sitting by the fire?! Sounds warm!\n";
            break;
        case (4):
            std::cout << "Hot chocolate?! Yum!\n";
            break;
        default:
            std::cout << "Enter a valid menu item";
    }

    char begin;
    std::cout << "\n\nWhere do you want to begin?\n";
    std::cout << "B. At the beginning?\nM. At the middle?";
    std::cout << "\nE. At the end?\n\n";
    begin = 'M';

    switch (begin) {
        case ('B'):
            std::cout << "Once upon a time there was a wolf.\n";
        case ('M'):
            std::cout << "The wolf hurt his leg.\n";
        case ('E'):
            std::cout << "The wolf lived happily everafter\n";
    }
    return 0;
}

/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
*/

int calculate() {
    float in1, in2;
    char operand;
    std::cout << "Enter two numbers:\n";
    std::cin >> in1;
    std::cin >> in2;
    std::cout << "Enter the operation '+','-','*','/':\n";
    std::cin >> operand;

    switch (operand) {
        case ('+'):
            std::cout << "Addition of two numbers is: "<< in1 + in2 << "\n";
            break;
        case ('-'):
            std::cout << "Subtraction of two numbers is: " << in1 - in2 << "\n";
            break;
        case ('*'):
            std::cout << "Multiplication of two numbers is: " << in1 * in2 << "\n";
            break;
        case ('/'):
            std::cout << "Division of two numbers is: " << in1 / in2 << "\n";
            break;
        default:
            std::cout << "Enter a valid Operand";
    }
    return 0;
}
