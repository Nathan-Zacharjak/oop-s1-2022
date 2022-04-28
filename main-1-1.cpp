#include <string>
#include <iostream>
#include "Truck.h"

using namespace std;

int main(void){
    Truck truck1;
    Truck truck2("big rig", 118999);

    cout << truck1.get_brand() << " " << truck1.get_code() << endl;
    cout << truck2.get_brand() << " " << truck2.get_code() << endl;

    return 0;
}
