#include <string>
#include "Musician.h"
#include "Orchestra.h"

using namespace std;

Orchestra::Orchestra() : _size(5), _memberNumber(0), _members(new Musician[5]){
}

Orchestra::Orchestra(int size) : _size(size), _memberNumber(0),
_members(new Musician[size]){
}

int Orchestra::get_current_number_of_members(){
    return _memberNumber;
}

bool Orchestra::has_instrument(string instrument){
    for (int i = 0; i < _memberNumber; i++){
        if (_members[i].get_instrument() == instrument){
            return true;
        }
    }

    return false;
}

Musician* Orchestra::get_members(){
    return _members;
}

bool Orchestra::add_musician(Musician new_musician){
    if (_size == _memberNumber){
        return false;
    }

    _members[_memberNumber] = new_musician;
    _memberNumber++;
    return true;
}

Orchestra::~Orchestra(){
    delete[] _members;
}