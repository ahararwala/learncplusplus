/*
 * File IO Steps:

 - Include the <fstream> library
 - Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 - Open the file  myfile.open(“filename”);
 - Write or read the file
 - Close the file myfile.close();
 */
#include "learn_header.h"

using namespace std;

int read_and_write_to_file() {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream inputFile("input.txt", ios::app);
    if (inputFile.is_open()) {
        inputFile << "\nI am adding a line.\n";
        inputFile << "I am adding another line.\n";
        inputFile.close();
    } else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream inputFileToAppend("input.txt");
    //During the creation of ifstream, the file is opened.
    //So we do not have explicitly open the file.
    if (inputFileToAppend.is_open()) {
        while (getline(inputFileToAppend, line)) {
            cout << line << '\n';
        }
        inputFileToAppend.close();
    } else cout << "Unable to open file for reading";

    return 0;
}