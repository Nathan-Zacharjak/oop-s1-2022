#include <string>
#include "zoo.h"
#include "vegie.h"
#include "hunter.h"

zoo::zoo(string n,int cows,int lions){
    name = n;
    number_of_animals = cows + lions;
    animals = new animal*[cows + lions];

    for (int i = 0; i < cows; i++){
        animals[i] = new vegie("Daisy", 100);
    }

    for (int i = cows; i < cows + lions; i++){
        animals[i] = new hunter("Clarence", 50);
    }
    
}

string zoo::get_name(){
    return name;
}

int zoo::get_number_of_animals(){
    return number_of_animals;
}

animal** zoo::get_animals(){
    return animals;
}

zoo::~zoo(){
    for (int i = 0; i < number_of_animals; i++){
        delete animals[i];
    }
}