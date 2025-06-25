//
// Created by info on 25.06.2025.
//

#ifndef PLAYER_H
#define PLAYER_H



class player {
    protected:
    static unsigned int m_winCount;

    public:
    player();
    ~player(){};

    virtual int check(int* board);


};


#endif //PLAYER_H
