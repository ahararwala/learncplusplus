/*Goal: Examine pointers!*/

#include "header_lesson5.h"

/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
int examine_pointers() {
    int givenInt;
    float givenFloat;
    double givenDouble;
    string givenString = "learn pointers";
    char givenChar;

    int *pointerToGivenInt = &givenInt;
    float *pointerToGivenFloat = &givenFloat;
    double *pointerToGivenDouble = &givenDouble;
    string *pointerToGivenString = &givenString;
    char *pointerToGivenChar = &givenChar;

    std::cout << "Deference value of givenInt = " << *pointerToGivenInt << "\n";
    std::cout << "Address of givenInt = " << pointerToGivenInt << "\n";

    std::cout << "Deference value of givenFloat = " << *pointerToGivenFloat << "\n";
    std::cout << "Address of givenFloat = " << pointerToGivenInt << "\n";

    std::cout << "Deference value of givenDouble = " << *pointerToGivenDouble << "\n";
    std::cout << "Address of givenDouble = " << pointerToGivenDouble << "\n";

    std::cout << "Deference value of givenString = " << *pointerToGivenString << "\n";
    std::cout << "Address of givenString = " << pointerToGivenString << "\n";

    std::cout << "Deference value of givenChar = " << *pointerToGivenChar << "\n";
    std::cout << "Address of givenChar = " << pointerToGivenChar << "\n";

    return 0;
}

int care_about_pointers() {
    int *pointerI;
    int number;
    char character;
    char *pointerC;
    std::string sentence;
    std::string *pointerS;

    pointerI = &number;
    *pointerI = 45;

    pointerC = &character;
    *pointerC = 'f';

    pointerS = &sentence;
    *pointerS = "Hey look at me, I know pointers!";

    std::cout << "number = " << number << "\n";
    std::cout << "character = " << character << "\n";
    std::cout << "sentence = " << sentence << "\n";

    return 0;
}