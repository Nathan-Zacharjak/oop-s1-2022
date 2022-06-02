#include "Documents.h"
#include <string>
#include <iostream>

using namespace std;

void Documents::sort(Contract **document, int n){
    int i;
    int k;
    for (i = 0; i < n-1; i++)
    {
        for (k = 0; k < n-i-1; k++)
        {
            if (document[k]->get_docID() > document[k+1]->get_docID())
            {
                swap(document[k], document[k+1]);
            }
        }
    }
}