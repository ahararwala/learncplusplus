#ifndef LESSON8_CAT_H
#define LESSON8_CAT_H

#include "header_lesson8.h"

class Cat {
    string catName, breed;
    int age;
public:
    Cat(const string &name, const string &breed, int age);

    const string &getCatName() const;

    void setCatName(const string &name);

    const string &getBreed() const;

    void setBreed(const string &breed);

    int getAge() const;

    void setAge(int age);

    void printInfo();
};

Cat::Cat(const string &name, const string &breed, int age) : catName(name), breed(breed), age(age) {}

#endif //LESSON8_CAT_H
