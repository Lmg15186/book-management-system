#ifndef DIGITALBOOK_H
#define DIGITALBOOK_H
#include "Book.h"

class DigitalBook : public Book {
public:
    DigitalBook(string t, string a, string i, bool avail, string d)
        : Book(t, a, i, avail, d) {}

    void displayBookDetails() override {
        cout << "[Digital] ";
        Book::displayBookDetails();
    }
};

#endif
