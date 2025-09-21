#include "config.hpp"

std::string ask_move() {
    std::string move;
    std::cout << "move: ";
    std::cin >> move;

    return move;
}