// book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string ISBN;
    bool available;
    string dateAdded;

public:
    Book(string t, string a, string i, bool av, string d);
    virtual void display();
    string getTitle() const;
};

#endif
