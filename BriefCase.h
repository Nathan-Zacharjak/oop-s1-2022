#ifndef BRIEFFCASE_H
#define BRIEFFCASE_H

#include <string>
#include "Document.h"
#include "Contract.h"
#include "PDF.h"

using namespace std;

class BriefCase{
protected:
    Document** documents = new Document*[5];
public:
    BriefCase();
    /* creates a  briefcase containing pointers to  5 Document objects as an array; 
    the first and the last elements of the array are pointers to PDF objects, 
    the rest of the elements are Contracts
    */

    Document **get_documents(); // returns the array of pointers to the five Document objects
    ~BriefCase();
};

#endif