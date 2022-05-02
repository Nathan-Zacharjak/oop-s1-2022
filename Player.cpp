#include <string>
#include "Player.h"

using namespace std;

Player::Player(){
    _moves = "";
}

Player::Player(string moves){
    _moves = moves;
}

char Player::getMove(){
    int lastIndex = _moves.length() - 1;
    return _moves[lastIndex];
}

bool Player::win(Player * opponent){
    char opMove = opponent->getMove();
    char plMove = this->getMove();

    if (opMove == 'r' && plMove == 'p' ){
        return true;
    }else if (opMove == 'p' && plMove == 's'){
        return true;
    }else if (opMove == 's' && plMove == 'r'){
        return true;
    }

    return false;
}

Player::~Player(){

}