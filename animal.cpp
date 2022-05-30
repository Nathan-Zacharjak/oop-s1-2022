#include <string>
#include "animal.h"

int animal::lastID(0);

animal::animal(string n, int v){
    name = n;
    volume = v;
    animalID = lastID;
    lastID = lastID + 1;
}

void animal::set_name(string n){
    name = n;
}

string animal::get_name(){
    return name;
}

void animal::set_volume(int v){
    volume = v;
}

int animal::get_volume(){
    return volume;
}

int animal::get_animalID(){
    return animalID;
}

animal::~animal(){
}