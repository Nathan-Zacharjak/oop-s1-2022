#include <string>
#include <iostream>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"

using namespace std;

int main(){
    zoo zoo1("The Amazing Zoo", 5, 3);
    animal* daisy1 = zoo1.get_animals()[0];

    cout << zoo1.get_name() << " " << zoo1.get_number_of_animals() << endl;
    cout << daisy1->get_animalID() << " " << daisy1->get_name() << " " << daisy1->get_volume() << endl;
    
    return 0;
}
