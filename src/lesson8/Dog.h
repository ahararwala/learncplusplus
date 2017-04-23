#ifndef LESSON8_DOG_H
#define LESSON8_DOG_H

#include "header_lesson8.h"

class Dog {
    string name;
    string licenseNumber;

public:
    Dog(const string &name, const string &licenseNumber);

    void setName(string nameIn);
    void setLicenseNumber(string licenseNumberIn);
    string getName();
    string getLicenseNumber();
    void printInfo();
};

Dog::Dog(const string &name, const string &licenseNumber) : name(name), licenseNumber(licenseNumber) {}

void Dog::setName(string nameIn) {
    name = nameIn;
}

void Dog::setLicenseNumber(string licenseNumberIn) {
    licenseNumber = licenseNumberIn;
}

string Dog::getName() {
    return name;
}

string Dog::getLicenseNumber() {
    return licenseNumber;
}

void Dog::printInfo() {
    cout<<name<<" "<<licenseNumber;
}


#endif //LESSON8_DOG_H
