//
// Created by Aziz Hararwala on 4/23/17.
//

#ifndef LESSON7_STUDENT_H
#define LESSON7_STUDENT_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstddef>
#include<iomanip>

using namespace std;

class Student {
    string name;
    int id;
    int gradDate;

public:
    const string &getName() const;

    void setName(const string &name);

    int getId() const;

    void setId(int id);

    int getGradDate() const;

    void setGradDate(int gradDate);

};


#endif //LESSON7_STUDENT_H
