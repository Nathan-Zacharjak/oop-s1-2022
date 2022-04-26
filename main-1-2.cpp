#include <string>
#include <iostream>
#include "Musician.h"
#include "Orchestra.h"

using namespace std;

int main(void){
    Orchestra orchestra1(3);
    Orchestra orchestra2;

    Musician musician1;
    Musician musician2("Piano", 2);
    Musician musician3("Violin", 3);
    Musician musician4("Choir", 4);

    cout << orchestra1.add_musician(musician1) << endl;
    cout << orchestra1.add_musician(musician2) << endl;
    cout << orchestra1.add_musician(musician3) << endl;
    cout << orchestra1.add_musician(musician4) << endl;

    cout << orchestra1.get_current_number_of_members() << endl;
    cout << orchestra1.get_members()[1].get_instrument() << endl;
    cout << orchestra1.has_instrument("Piano") << endl;

    cout << orchestra2.get_current_number_of_members() << endl;
    cout << orchestra2.get_members()[1].get_instrument() << endl;
    cout << orchestra2.has_instrument("Piano") << endl;

    return 0;
}
