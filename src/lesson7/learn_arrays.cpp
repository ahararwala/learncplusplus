/*
There are three methods for passing an array by reference to a function:

void functionName(variableType *arrayName)
void functionName(variableType arrayName[length of array])
void functionName(variableType arrayName[])
Let's look at each method in the program below.
 */
#include "header_lesson7.h"

//Goal: Learn to pass arrays to functions
//Pass the array as a pointer
void arrayAsPointer(int *array, int size);

//Pass the array as a sized array
void arraySized(int array[3], int size);

//Pass the array as an unsized array
void arrayUnSized(int array[], int size);

int passingArrayExamples() {
    const int size = 3;
    int array[size] = {33, 66, 99};
    //We are passing a pointer or reference to the array
    //so we will not know the size of the array
    //We have to pass the size to the function as well
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array, size);
    return 0;
}

void arrayAsPointer(int *array, int size) {
    std::cout << std::setw(5);
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void arraySized(int array[3], int size) {
    std::cout << std::setw(5);
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void arrayUnSized(int array[], int size) {
    std::cout << std::setw(5);
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

/*Goal: create a function that searches an array for
**a given value.
*/
int search(int *arrayToSearch, int size, int searchKey) {
    for (int i = 0; i < size; ++i) {
        if (arrayToSearch[i] == searchKey) {
            return i;
        }
    }
    return -1;
}

int searchInArray() {
    const int size = 4;
    int array[] = {345, 75896, 2, 543};
    int searchKey = 543;
    int candidate = search(array, size, searchKey);
    std::cout << "Found at: " << candidate;
    return 0;
}

