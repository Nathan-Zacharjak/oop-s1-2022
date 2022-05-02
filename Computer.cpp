#include <string>
#include "Computer.h"
#include "Player.h"

using namespace std;

Computer::Computer(){
    _setMove = 'r';
}

Computer::Computer(string letter){
    char computerMove = letter[0];
    if (computerMove == 'r' || computerMove == 'R'){
        _setMove = 'r';
    }else if (computerMove == 'p' || computerMove == 'P'){
        _setMove = 'p';
    }else if (computerMove == 's' || computerMove == 'S'){
        _setMove = 's';
    }else{
        _setMove = 'r';
    }
}

void Computer::move(){
    _num_moves++;
}
string Computer::getMoves(){
    string moves = "";
    for (int i = 0; i < _num_moves; i++){
        moves = moves.append(to_string(_setMove));
    }
    
    return _moves;
}

Computer::~Computer(){

}