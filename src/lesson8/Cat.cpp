#include "Cat.h"

const string &Cat::getCatName() const {
    return catName;
}

void Cat::setCatName(const string &name) {
    Cat::catName = name;
}

const string &Cat::getBreed() const {
    return breed;
}

void Cat::setBreed(const string &breed) {
    Cat::breed = breed;
}

int Cat::getAge() const {
    return age;
}

void Cat::setAge(int age) {
    Cat::age = age;
}

void Cat::printInfo() {
    cout << Cat::catName << " " << Cat::breed << " " << Cat::age;
}

void playWithCats() {
    Cat siamese("Ruby", "Siamese", 5);
    siamese.printInfo();
}
