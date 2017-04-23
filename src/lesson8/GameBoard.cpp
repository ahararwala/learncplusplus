#include "GameBoard.h"


int playGameBoard() {
    Gameboard game1;
    game1.setGameSpace(0, 0, 'z');
    game1.setGameSpace(0, 1, 'x');
    game1.setGameSpace(0, 2, 'x');
    game1.setGameSpace(0, 3, 'e');
    game1.setGameSpace(1, 0, '-');
    game1.setGameSpace(2, 0, '-');
    game1.setGameSpace(3, 0, 'x');
    game1.setGameSpace(3, 1, 'x');
    game1.setGameSpace(3, 2, 'x');
    game1.setGameSpace(3, 3, 'x');

    if (game1.fourInRow() == 1) {
        cout << "X got four in a row! \n\n";
    } else {
        cout << "X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}