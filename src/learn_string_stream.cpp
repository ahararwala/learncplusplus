#include "learn_header.h"

int string_stream_convert ()
{
    std::string stringLength;
    float inches = 0;
    float yardage = 0;

    std::cout << "Enter number of inches: ";
    std::getline (std::cin,stringLength);
    std::stringstream(stringLength) >> inches;
    std::cout<<"You entered "<<inches<<"\n";
    yardage = inches/36;
    std::cout << "Yardage is " << yardage;
    return 0;
}

/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */
int prompt_compute_area() {
    std::string string_length;
    std::string string_width;

    float length = 0;
    float width = 0;

    std::cout << "Enter length of room: ";
    std::getline (std::cin,string_length);

    std::cout << "Enter width of room: ";
    std::getline (std::cin,string_width);

    std::stringstream(string_length) >> length;
    std::stringstream(string_width) >> width;

    float area = width * length;
    std::cout << "Room area is " << area;
    return 0;
}

int main ()
{
    int FTemp = 0;
    int CTemp = 0;

    std::cout << "Enter a Farenheit temperature: ";
    std::cin >> FTemp;

    CTemp = FTemp - 32 / (9/5);
    std::cout << "\n" << FTemp <<" in Farenheit = "  << CTemp << "in Celsius\n";
    return 0;
}