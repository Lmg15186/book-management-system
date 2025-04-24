#ifndef HARDCOPY_H
#define HARDCOPY_H
#include "Book.h"

class Hardcopy : public Book {
public:
    Hardcopy(string t, string a, string i, bool avail, string d)
        : Book(t, a, i, avail, d) {}

    void displayBookDetails() override {
        cout << "[Hardcopy] ";
        Book::displayBookDetails();
    }
};

#endif
