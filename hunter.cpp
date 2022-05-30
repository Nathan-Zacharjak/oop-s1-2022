#include <string>
#include "hunter.h"

int hunter::nextID(1000);

hunter::hunter(string n, int v): animal(n,v){
    kills = 0;
    animalID = nextID;
    nextID = nextID + 1;
}

void hunter::set_kills(int k){
    kills = k;
}

int hunter::get_kills(){
    return kills;
}

string hunter::get_name(){
    return "Hunter: " + name;
}

hunter::~hunter(){
}