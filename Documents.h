#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <string>
#include "Contract.h"

using namespace std;

class Documents{
public:
    static void sort(Contract **document, int n);      // sorts the array of n Contract in ascending 
                                              // order base on their docID
};

#endif