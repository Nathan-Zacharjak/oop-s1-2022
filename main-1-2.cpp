#include <string>
#include <iostream>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std;

int main(void){
    Truck truck1;
    Truck truck2("big rig", 118999);
    Truck_yard yard1;
    Truck_yard yard2(3);

    cout << yard1.add_stock(truck1) << " " << yard1.get_stock_quantity(118999) << endl;
    cout << yard1.get_total_stock_count() << endl;

    cout << yard2.add_stock(truck1) << " " << yard2.add_stock(truck2) << " " << yard2.add_stock(truck1) << " " << yard2.add_stock(truck2) << endl;
    cout << yard2.get_current_stock_list()[1].get_brand() << " " << yard2.get_stock_quantity(118999) << " " << yard2.get_total_stock_count() << endl;

    return 0;
}
