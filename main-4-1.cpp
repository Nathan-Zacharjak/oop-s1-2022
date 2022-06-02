#include "Documents.h"
#include <string>
#include <iostream>

int main(){
    Contract** contracts = new Contract*[5];
    contracts[0] = new Contract(10);
    contracts[1] = new Contract(3);
    contracts[2] = new Contract(11);

    Documents::sort(contracts, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << contracts[i]->get_docID() << endl;
    }
    

    return 0;
}
