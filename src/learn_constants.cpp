#include "learn_header.h"

int constants_cannot_be_changed() {
    const int weightGoal = 100;
    std::cout<<"WeightGoal = "<<weightGoal<<"\n";
//    weightGoal = 200;
//    std::cout<<"WeightGoal = "<<weightGoal<<"\n";
    return 0;
}
