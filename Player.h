#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
private:
    string _moves;
public:
    Player();
    Player(string moves);
    // void virtual move() = 0;
    // string virtual getMoves() = 0;
    char getMove(); //returns the most recent move made
    bool win(Player * opponent); //compares players’ moves to see who wins
    ~Player();
};

#endif