#ifndef LESSON8_GAMEBOARD_H
#define LESSON8_GAMEBOARD_H

#include "header_lesson8.h"

class Gameboard {
    char gameSpace[4][4];

public:
    Gameboard();

    Gameboard(char (*gameSpace)[4]);
    //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row, int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row, int column);

    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition
Gameboard::Gameboard() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            gameSpace[i][j] = '-';
        }
    }
}

void Gameboard::setGameSpace(int row, int column, char value) {
    Gameboard::gameSpace[row][column] = value;

}

char Gameboard::getGameSpace(int row, int column) {
    return Gameboard::gameSpace[row][column];
}

int Gameboard::fourInRow() {
    int count;
    for(int i=0;i<4; i++)
    {
        count = 0;
        for(int j=0;j<4; j++)
        {
            if(gameSpace[i][j]=='x')
            {
                count++;
                //cout<<"count = "<<count;
            }
        }
        if(count == 4)
            return 1;
    }
    if(count == 4)
        return 1;
    else
        return 0;
}

void Gameboard::printInfo() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "row: " << i << " column:" << j << " value:" << gameSpace[i][j] << "\n";
        }
    }

}

#endif //LESSON8_GAMEBOARD_H
