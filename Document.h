#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

using namespace std;

class Document{
protected:
    string title;                   // the title of a Document
    string documentType;            // the type of Document
    int numPages;                   // the number of pages; takes only non-negative values
    
public:
    Document(string t, string d, int n);   // creates a Document title t, type of document d, and number of pages n
    Document();
    string get_title();
    void set_title(string t);
    string get_documentType();
    void set_documentType(string d);
    int get_numPages();
    void set_numPages(int n);
    int virtual typesetMargins() = 0; // sets the margins based on the pages
    ~Document();
};

#endif