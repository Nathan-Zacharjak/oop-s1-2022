#include <string>
#include "vegie.h"

int vegie::nextID(100);

vegie::vegie(string n, int v): animal(n,v){
    favourite_food = "grass";
    animalID = nextID;
    nextID = nextID + 1;
}

void vegie::set_favourite_food(string f){
    favourite_food = f;
}

string vegie::get_favourite_food(){
    return favourite_food;
}

string vegie::get_name(){
    return "Safe: " + name;
}

vegie::~vegie(){
}