#include <string>
#include <iostream>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"
#include "sort_by_animalID.h"

using namespace std;

int main(){
    zoo zoo1("The Amazing Zoo", 5, 3);
    animal* daisy1 = zoo1.get_animals()[0];

    cout << zoo1.get_name() << " " << zoo1.get_number_of_animals() << endl;
    cout << daisy1->get_animalID() << " " << daisy1->get_name() << " " << daisy1->get_volume() << endl;
    
    sort_by_animalID::sort(zoo1.get_animals(), zoo1.get_number_of_animals());

    for (int i = 0; i < zoo1.get_number_of_animals(); i++){
        cout << zoo1.get_animals()[i]->get_animalID() << endl;
    }
    

    return 0;
}
