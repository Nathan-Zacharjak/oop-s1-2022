#include "Document.h"
#include <string>

using namespace std;

Document::Document(){

}

Document::Document(string t, string d, int n){
    title = t;
    documentType = d;
    numPages = n;
}

string Document::get_title(){
    return title;
}

void Document::set_title(string t){
    title = t;
}

string Document::get_documentType(){
    return documentType;
}

void Document::set_documentType(string d){
    documentType = d;
}

int Document::get_numPages(){
    return numPages;
}

void Document::set_numPages(int n){
    numPages = n;
}

Document::~Document(){

}