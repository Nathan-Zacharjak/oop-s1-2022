#include "PDF.h"
#include <string>

using namespace std;


PDF::PDF(){

}

PDF::PDF(int v){
    version = v;
}

bool PDF::hasTOCVersion(){
    if (version > 5){
        return true;
    } else {
        return false;
    }
}

int PDF::get_version(){
    return version;
}

PDF::~PDF(){

}