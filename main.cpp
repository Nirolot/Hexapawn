#include "function.hpp"

int main() {
    Board board;
    board.initializeBoard();
    board.stampaBoard();

    std::string move;
    std::cout << "--move: ";
    std::cin >> move;
    board.make_move(move);
    board.stampaBoard();
}
