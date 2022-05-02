#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Player.h"

using namespace std;

class Computer : public Player{
private:
    char _setMove;
public:
    Computer();
    Computer(string letter);//set what move the computer will
                            //make (rock, paper, or scissors)
                            //if the input is not r, R, p, P, s, S or
                            //a string starting with one of these letters,
                            //set the move to the default ‘r’
    void move();//increments number of moves made 
    string getMoves();//returns all moves stored in a string
    ~Computer();
};

#endif