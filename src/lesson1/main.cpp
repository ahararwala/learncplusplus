#include "learn_header.h"

using namespace std;

int print_size_of_variables() {
    cout << "bool size = " << sizeof(bool) << "\n";
    cout << "char size = " << sizeof(char) << "\n";

    cout << "short size = " << sizeof(short) << "\n";

    cout << "int size = " << sizeof(int) << "\n";
    cout << "float size = " << sizeof(float) << "\n";

    cout << "long size = " << sizeof(long) << "\n";
    cout << "double size = " << sizeof(double) << "\n";
    return 0;
}

int main() {
    cout << "Hello world, I am ready for C++ lesson 1\n";
//    return print_size_of_variables();
//    return print_months();
//    return print_formattings();
//    return console_output();
//    return read_and_write_to_file();
//    return console_in();
//    return console_getline();
//    return console_getname_address();
//    return string_stream_convert();
    return prompt_compute_area();
}

