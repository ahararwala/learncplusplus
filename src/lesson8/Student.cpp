#include "Student.h"

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

int Student::getId() const {
    return id;
}

void Student::setId(int id) {
    Student::id = id;
}

int Student::getGradDate() const {
    return gradDate;
}

void Student::setGradDate(int gradDate) {
    Student::gradDate = gradDate;
}
