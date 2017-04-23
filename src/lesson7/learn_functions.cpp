#include "header_lesson7.h"

/*Goal: practice functions that do not return
**a value and do not accept parameters
*/

void printProduct(int a, int b) {
    cout << "Printing product of two number:\t" << a * b << "\n";
}

//note, the definition is conventionally placed after main
void printMessage() {
    std::cout << "HEY! I'm from a function!";
    printProduct(4, 5);
}

void increment(int &input); //Note the addition of '&'

int try_increment() {
    int a = 34;
    std::cout << "Before the function call a = " << a << "\n";
    increment(a);
    std::cout << "After the function call a = " << a << "\n";
    return 0;
}

void increment(int &input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout << "In the function call a = " << input << "\n";
}