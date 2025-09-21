#pragma once
#include <iostream>
#include <vector>
#include <string.h>

#define EMPTY 0
#define BLACK 1
#define WHITE 2

const int boardDimension = 3;
const std::vector<std::string> alphabet = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", 
                                           "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

std::string ask_move();