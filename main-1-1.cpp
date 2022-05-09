#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(void){
    {
        Invoice invoice("ABCD");
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    {
        Invoice invoice("ABCD");
        invoice.addServiceCost(1);
        if (invoice.getDollarsOwed() != 1) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    return 0;
}
