#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
protected:
    string _moves;
    int _num_moves;
public:
    Player();
    void virtual move() = 0;
    string virtual getMoves() = 0;
    char getMove(); //returns the most recent move made
    bool win(Player * opponent); //compares players’ moves to see who wins
    virtual ~Player();
};

#endif