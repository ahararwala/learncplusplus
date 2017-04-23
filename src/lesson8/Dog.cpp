#include "Dog.h"

int playWithDogs() {
    Dog dog1("name1", "license1"), dog2("name2", "license2");
    dog1.setName("name changed");
    dog1.printInfo();
    dog2.printInfo();

}