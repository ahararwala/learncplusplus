#ifndef LESSON8_TICTACTOE_H
#define LESSON8_TICTACTOE_H

static const int BOARD_SIZE = 4;
static const char X_VALUE = 'x';
static const char O_VALUE = '0';

#include "header_lesson8.h"

class TicTacToe {
    char board[BOARD_SIZE][BOARD_SIZE];
    string user_x = "X_USER_NAME";
    string user_o = "Y_USER_NAME";


public:
    TicTacToe();

    void mark_x(int row, int column);

    void mark_o(int row, int column);

    string check_win(char xOro);

    string findUserName(char xOrZeroUser);
};

TicTacToe::TicTacToe() {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = '-';
        }
    }
}

void TicTacToe::mark_x(int row, int column) {
    TicTacToe::board[row][column] = X_VALUE;
}

void TicTacToe::mark_o(int row, int column) {
    TicTacToe::board[row][column] = O_VALUE;
}

string TicTacToe::check_win(char xOro) {
    int count;
    for (int i = 0; i < 4; i++) {
        count = 0;
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == xOro) {
                count++;
            }
        }
        if (count == 4)
            return findUserName(xOro);
    }
    if (count == 4)
        return findUserName(xOro);
    else
        return "DID_NOT_WIN";
}

string TicTacToe::findUserName(char xOrZeroUser) {
    if (xOrZeroUser == X_VALUE) {
        return TicTacToe::user_x;
    } else if (xOrZeroUser == O_VALUE) {
        return TicTacToe::user_o;
    }
    return "ERROR_USER";
}


#endif //LESSON8_TICTACTOE_H
