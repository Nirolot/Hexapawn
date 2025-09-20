#pragma once
#include <iostream>
#include <vector>
#include <string.h>

#define EMPTY 0
#define BLACK 1
#define WHITE 2

const int boardDimension = 3;
const std::vector<std::string> alphabet = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

class Board {
public:
    Board();
    int& at(int row, int col);
    void initializeBoard();  
    void stampaBoard();  
    void make_move(std::string move_str);
    static int find_object(char obj_to_find);
    std::vector<int> translate_move(std::string move);

private:
    std::vector<int> board, whitePositions, blackPositions;
    int nBlacks, nWhites;
};