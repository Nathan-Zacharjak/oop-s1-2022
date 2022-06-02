#ifndef PDF_H
#define PDF_H

#include <string>
#include "Contract.h"

using namespace std;

class PDF:public Contract{
protected:
    int version;  // stores the pdf version attribute  

    bool hasTOCVersion(); // checks if there is a Table of Contents feature
    int get_version(); // returns version attribute

public:
    PDF();       // inherit from base class default constructor
    PDF(int v); // sets the version of the pdf
            // calls the Contract constructor with numPage==5
    ~PDF();
};

#endif