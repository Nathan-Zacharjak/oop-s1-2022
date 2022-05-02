#include <string>
#include <iostream>
#include "Player.h"

using namespace std;

int main(void){
    Player player1("sr");
    Player player2("ss");
    Player* playerAddress = &player2;

    cout << player1.win(playerAddress) << endl;

    return 0;
}
