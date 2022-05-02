#include <string>
#include "Truck.h"

using namespace std;

Truck::Truck(){
    _brand = "";
    _code = 0;
}

Truck::Truck(string brand, int code){
    _brand = brand;
    _code = code;
}

string Truck::get_brand(){
    return _brand;
}

int Truck::get_code(){
    return _code;
}

Truck::~Truck(){

}