#ifndef CONTRACT_H
#define CONTRACT_H

#include <string>

using namespace std;

class Contract{
protected:
    int docID;          // unique document id
    static int amountDoc;
public:
    Contract(int n);     // sets number of pages
                    // calls the constructor of the document class with title=="", 
                    //documentType=="Contract" and numPage=n
    Contract();
    ~Contract();
};

#endif