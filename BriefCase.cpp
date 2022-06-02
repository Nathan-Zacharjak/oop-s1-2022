#include "BriefCase.h"
#include <string>

using namespace std;

BriefCase::BriefCase(){
    documents[0] = new PDF(5);
    documents[1] = new Contract(10);
    documents[2] = new Contract(3);
    documents[3] = new Contract(11);
    documents[4] = new PDF(6);
}

Document** BriefCase::get_documents(){
    return documents;
}

BriefCase::~BriefCase(){
    for (int i = 0; i < 5; i++){
        delete documents[i];
    }
    delete[] documents;
}