#include <iostream>
#include "Musician.h"
#include <string>

using namespace std;

Musician::Musician(){
    _instrument = "null";
    _experience = 0;
}

Musician::Musician(string instrument, int experience){
    _instrument = instrument;
    _experience = experience;
}

string Musician::get_instrument(){
    return _instrument;
}

int Musician::get_experience(){
    return _experience;
}

Musician::~Musician(){
}
