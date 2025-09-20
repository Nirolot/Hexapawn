#include "function.hpp"
#include <algorithm>

Board::Board() 
        : board(boardDimension * boardDimension, EMPTY), 
        whitePositions(boardDimension), 
        blackPositions(boardDimension), 
        nBlacks(boardDimension), 
        nWhites(boardDimension)
{}

int& Board::at(int row, int col) {
    return board[row * boardDimension + col];
}

int Board::find_object(char obj_to_find) {
    std::string target(1, obj_to_find);  // Convert char to string
    for(int i = 0; i < alphabet.size(); i++) {
        if(target == alphabet[i]) {
            return i;
        }
    }
    return -1;
}

std::vector<int> Board::translate_move(std::string move) {
    std::vector<int> final_move(2);
    final_move[0] = Board::at(Board::find_object(move[0]), move[1] - '0');
    final_move[1] = Board::at(Board::find_object(move[2]), move[3] - '0');
    
    return final_move;
}

void Board::make_move(std::string move_str) {
    std::vector<int> move = translate_move(move_str);

    int pawn = board[move[0]];
    board[move[0]] = EMPTY;
    board[move[1]] = pawn;
}

void Board::initializeBoard() {
    int startingRow = 0, endingRow = boardDimension - 1; 

    for(int i = 0; i < boardDimension; i++) {
        board[endingRow   * boardDimension + i] = WHITE;
        board[startingRow * boardDimension + i] = BLACK;
    }
}

void Board::stampaBoard() {

    for(int r = 0; r < boardDimension; r++) {
        std::cout << alphabet[r] << " ";
        for(int c = 0; c < boardDimension; c++) {
            int currentColor = at(r, c);
            if(currentColor == WHITE) {
                std::cout << "[W]";
            }
            else if(currentColor == BLACK) {
                std::cout << "[B]";
            }
            else {
                std::cout << "[ ]";
            }
        }
        std::cout << "\n";
    }
    std::cout << "   ";
    for(int i = 0; i < boardDimension; i++) {
        std::cout << i+1 << "  ";
    }
    std::cout << "\n";
}