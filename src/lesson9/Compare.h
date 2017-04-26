#ifndef LESSON9_COMPARE_H
#define LESSON9_COMPARE_H


#include<iostream>

class Compare {
public:
    int findSmaller(int input1, int input2);

    float findSmaller(float input1, float input2);

    char findSmaller(char input1, char input2);

    int findSmaller(int intArray[], int size);

    float findSmaller(float floatArray[], int size);

    char findSmaller(char charArray[], int size);
};

int Compare::findSmaller(int input1, int input2) {
    if (input1 < input2)
        return input1;
    return input2;
}

float Compare::findSmaller(float input1, float input2) {
    if (input1 < input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2) {
    if (input1 < input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int *intArray, int size) {
    int candidate = intArray[0];
    for (int i = 0; i < size; ++i) {
        if (intArray[i] < candidate) {
            candidate = intArray[i];
        }
    }
    return candidate;
}

float Compare::findSmaller(float *floatArray, int size) {
    float candidate = floatArray[0];
    for (int i = 0; i < size; ++i) {
        if (floatArray[i] < candidate) {
            candidate = floatArray[i];
        }
    }
    return candidate;
}

char Compare::findSmaller(char *charArray, int size) {
    char candidate = charArray[0];
    for (int i = 0; i < size; ++i) {
        if (charArray[i] < candidate) {
            candidate = charArray[i];
        }
    }
    return candidate;
}

#endif //LESSON9_COMPARE_H
