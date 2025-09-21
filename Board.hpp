#include "config.hpp"

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