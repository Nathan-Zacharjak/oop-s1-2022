#include "Contract.h"
#include <string>
#include <math.h>

using namespace std;

int Contract::amountDoc = 0;

Contract::Contract(){

}

Contract::Contract(int n){
    numPages = n;
    docID = amountDoc;
    amountDoc++;
}

int Contract::get_docID(){
    return docID;
}

void Contract::set_docID(int id){
    docID = id;
}

int Contract::get_amountDoc(){
    return amountDoc;
}

void Contract::set_amountDoc(int a){
    amountDoc = a;
}

int Contract::typesetMargins(){
    if (numPages == 1){
        return amountDoc;
    } else {
        return floor(numPages/2);
    }
}

Contract::~Contract(){

}