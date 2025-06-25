//
// Created by info on 25.06.2025.
//

#ifndef BOARD_H
#define BOARD_H



class board {
    private:
    int m_board [7][6];

    public:
    void place (int position);
    int height (int column);
};



#endif //BOARD_H
