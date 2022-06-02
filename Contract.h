#ifndef CONTRACT_H
#define CONTRACT_H

#include <string>
#include "Document.h"

using namespace std;

class Contract:public Document{
protected:
    int docID;          // unique document id
    static int amountDoc;
public:
    Contract(int n);     // sets number of pages
                    // calls the constructor of the document class with title=="", 
                    //documentType=="Contract" and numPage=n
    Contract();
    int get_docID();
    void set_docID(int id);
    static int get_amountDoc();
    static void set_amountDoc(int a);
    int typesetMargins(); // sets the margins based on the pages
    ~Contract();
};

#endif