#include "TicTacToe.h"

int playTicTacToe() {
    TicTacToe game;
    game.mark_o(0, 0);
    game.mark_o(0, 1);
    game.mark_o(0, 2);
    game.mark_o(0, 3);
    game.mark_x(1, 0);
    game.mark_o(2, 0);
    game.mark_x(3, 0);
    game.mark_o(3, 1);
    game.mark_o(3, 2);
    game.mark_x(3, 3);

    cout << "USER X " << game.check_win(X_VALUE) << "\n";
    cout << " USER O " << game.check_win(O_VALUE);

}