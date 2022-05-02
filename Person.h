#ifndef TRUCK_H
#define TRUCK_H

#include <string>

using namespace std;

class Truck{
private:
    string _brand;
    int _code;
public:
    Truck();   // default constructor - makes new truck with code number 0 and
            // and empty string "" for brand

    Truck(string brand, int code); // constructor taking string representing brand
                                        // and integer representing code for that brand

    string get_brand(); // returns the brand of the truck
    int get_code();  // returns the brand code number of truck
    ~Truck(); // destructor
};

#endif