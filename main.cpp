#include "Board.hpp"

int main() {
    Board board;
    board.initializeBoard();
    board.stampaBoard();

    std::string move = ask_move();
    board.make_move(move);
    board.stampaBoard();
}
