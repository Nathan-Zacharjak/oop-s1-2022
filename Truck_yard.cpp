#include <string>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std;

Truck_yard::Truck_yard(){
    _capacity = 0;
    _stock_list = new Truck[0];
    _stock_count = 0;
}

Truck_yard::Truck_yard(int capacity){
    _capacity = capacity;
    _stock_list = new Truck[capacity];
    _stock_count = 0;
}

int Truck_yard::get_total_stock_count(){
    return _stock_count;
}

int Truck_yard::get_stock_quantity(int code){
    int quantity = 0;

    for (int i = 0; i < _stock_count; i++){
        if (_stock_list[i].get_code() == code){
            quantity++;
        }
    }

    return quantity;
}

Truck *Truck_yard::get_current_stock_list(){
    return _stock_list;
}

bool Truck_yard::add_stock(Truck c){
    if (_stock_count >= _capacity){
        return false;
    }

    _stock_list[_stock_count] = c;
    _stock_count++;
    return true;
}

Truck_yard::~Truck_yard(){
    delete[] _stock_list;
}